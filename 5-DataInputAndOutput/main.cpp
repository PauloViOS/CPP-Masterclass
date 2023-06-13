#include <iostream>
#include <string> //nova lib para suporte a strings

int main()
{
    // std::cout << "Hello C++20" << std::endl;

    // int age = 21;
    // std::cout << "Age: " << age << std::endl;

    // Mensagem de erro
    // std::cerr << "Error message: something went wrong" << std::endl;

    // Mensagem de log
    // std::clog << "Log message: something happened" << std::endl;

    // Infos sem espaço
    /*
    int age1;
    std::string name;

    std::cout << "Please type your name and age: " << std::endl;

    std::cin >> name >> age1; // aqui, ao contrário do que vimos até agora, a informação vai do cin (o input) para a variável

    std::cout << "Hello " << name << ", you are " << age1 << " years old!" << std::endl;
    */

    // Infos com espaço

    std::string full_name;
    int age3;

    std::cout << "Please type your full name and age: " << std::endl;

    std::getline(std::cin, full_name);
    std::cin >> age3;

    std::cout << "Hello " << full_name
              << ", you are " << age3 << " years old!" << std::endl;

    return 0;
}