#include <iostream>

int main()
{
    int number = 15;          // Decimal
    int number2 = 017;        // Octal
    int number3 = 0x0F;       // Hexadecimal
    int number4 = 0b00001111; // Binário

    // Todos os números acima equivalem a 15 no sistema decimal. Quando o C++ for printar, é o sistema que ele usará para exibição
    std::cout << "number : " << number << std::endl;
    std::cout << "number2 : " << number2 << std::endl;
    std::cout << "number3 : " << number3 << std::endl;
    std::cout << "number4 : " << number4 << std::endl;
}