#include <iostream>
//namespaces
namespace info{
    int age = 20;
    std::string gender = "male";
}

namespace status{
    int health = 100;
    std::string items = "sword";
}

// main function

int main(){

    using namespace status;

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

    std::string name = "farhan";

    // const

    const std::string lastname = " nasim";
    

    std::cout << x << "\n";
    std::cout << y << "\n";
    std::cout << grade << "\n";
    std::cout << power << "\n";
    std::cout << "hello " << name  << lastname << "\n";
    std::cout << "age : " << info::age << "\n";
    std::cout << "health : " << health << "\n";
    std::cout << "items : " << items << "\n";

    return 0;
}