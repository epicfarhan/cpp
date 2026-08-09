#include <iostream>
//namespaces
namespace info{
   using namespace std;
    int age = 20;
    string gender = "male";
}

namespace status{
    using namespace std;
    int health = 100;
    string items = "sword";
}

// typedef

typedef std::string text_t;

//another way

using number_t = int;

// main function

int main(){

    using namespace status;
    using namespace std;

    // int
    int x;
    x = 5;

    // decimal
    double y = 5.53;

    // strings or characters

    char grade = 'A';

    // boolean

    bool power = false;

    // sting

    string name = "farhan";

    // const

    const string lastname = " nasim";
    
    // typedef example

    const text_t fruit = "peaches";
    number_t productNumber = 12;

    // addition

    number_t numOne = 1;
    numOne = numOne + 2; // += works too, ++ adds 1
    
    // sub

    number_t numTwo = 10;
    numTwo = numTwo - 4; // -= works as well,  --  subs 1

   // multiplication

   number_t numThree = 3;
   numThree = numThree * 3; // *= , ** or *<number> doubles

   // divide 

   number_t numFour = 4;
   numFour = numFour / 4; // /= 

   //remainder

   number_t numberFive = 5;
   numberFive = numberFive % 2; // %=


  // type conversion

   double decimal = (int) 4.13; // converted to int
   
   cout << (char) 100 << "\n"; // prints d cause the converted value of 100 in string is d;

   int correct = 8;
   int questions = 10;
   double result = (double) correct / (double)questions * 100;
   cout << result << "%" << "\n";



   // inputs

   text_t username;

   cout << "What is your name?" << "\n";
   cin >> username;
   cout << "hello " << username << "\n";

   // using nextline inputs 
   text_t fullname;
   cout << "What is fullname?" << "\n";
   getline(cin >> ws, fullname);// auto writes new line

   // outputs for testing
    cout << x << "\n";
    cout << y << "\n";
    cout << grade << "\n";
    cout << power << "\n";
    cout << "hello " << name  << lastname << "\n";
    cout << "age : " << info::age << "\n";
    cout << "health : " << health << "\n";
    cout << "items : " << items << "\n";
    cout << fruit << " : " << productNumber << "\n";
    cout << numOne << "\n";
    cout << numTwo << "\n";
    cout << decimal;

    return 0;
}