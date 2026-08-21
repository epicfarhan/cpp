#include <iostream>

int main(){

    using namespace std;

    int age = 23;
    string role = "game developer";
    bool experienced = true;

    if (age >= 20 && age <= 25 ){
        
        cout << "yes you can apply" << "\n";
    }else{
        cout << "sorry, you are not allowed" << "\n" ;
    }


    if (role == "game developer" || role == "graphics developer")
    {
       cout << "yes you can apply for this role as a game developer!" << "\n";
    }else{
        cout << "sorry, you are not allowed to apply";
    }


    if (!experienced)
    {
        cout << "we are looking for some experienced";
    }else{
        cout << "yes you have enough experience";
    }
    
    
    

   

    return 0;
}