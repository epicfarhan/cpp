#include <iostream>

int main(){

    using namespace std;

    char operation;
    int numberOne;
    int numberTwo;
    int result;

    cout << "Enter operation (+, -, x, /) : ";
    cin >> operation;

  
    cout << "Enter first number : ";
    cin >> numberOne;

    cout << "Enter second number : ";
    cin >> numberTwo;

    switch (operation){
    case '+':
        result = numberOne + numberTwo;
        cout << result;
        break;

    case '-':
        result = numberOne - numberTwo;
           cout << result;
        break;

    case 'x':
        result = numberOne * numberTwo;
        cout << result;
        break;
    
    case '/':
        result = numberOne / numberTwo;
        cout << result;
        break;
    
    default:
        cout << "only valid operations are accepted (+, -, x, /)";
        break;
    }
    
 

    return 0;
}