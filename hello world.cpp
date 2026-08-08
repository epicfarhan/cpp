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
    const number_t productNumber = 12;

    // add



    cout << x << "\n";
    cout << y << "\n";
    cout << grade << "\n";
    cout << power << "\n";
    cout << "hello " << name  << lastname << "\n";
    cout << "age : " << info::age << "\n";
    cout << "health : " << health << "\n";
    cout << "items : " << items << "\n";
    cout << fruit << " : " << productNumber;

    return 0;
}