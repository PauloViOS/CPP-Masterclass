#include <iostream>

int main()
{
    // pode designar um valor ASCII válido para uma variável do tipo caracter
    // e o caracter correspondente será armazenado. Podemos escolher interpretá-lo como
    // um caracter ou como um valor integral
    // um char tem o tamanho de 1 byte, o que nos possibilita representar 256 caracteres em ASCII
    // Unicode é melhor, obviamente

    char character1 {'a'};
    char character2 {'r'};
    char character3 {'r'};
    char character4 {'o'};
    char character5 {'w'};

    std::cout << character1 << std::endl;
    std::cout << character2 << std::endl;
    std::cout << character3 << std::endl;
    std::cout << character4 << std::endl;
    std::cout << character5 << std::endl;

    char value {65}; // código ASCII para "A"
    std::cout << "value: " << value << std::endl;
    std::cout << "value(int): " << static_cast<int>(value) << std::endl;
}