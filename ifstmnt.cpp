#include <iostream>

int main(){
    using namespace std;
    int age;
    cout << "enter age ";
    cin >> age;
    if (age < 18)
    {
        cout << "not allowed to enter venue";
    } 
    else if (age>= 30)
    {
        cout << "sit in adult area";
    }else{
        cout << "enter";
    }
}