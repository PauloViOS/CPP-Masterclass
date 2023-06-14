#include <iostream>

int main()
{
    /* signed e unsigned
    // implicitamente é colocado o modificador signed
    int value1 {10};
    int value2 {-300};

    // Declaração normal de um inteiro. O tamanho de uym inteiro é 4 bytes
    std::cout << "value1: " << value1 << std::endl;
    std::cout << "sizeof(value1): " << sizeof(value1) << std::endl;
    std::cout << "value2: " << value2 << std::endl;
    std::cout << "sizeof(value1): " << sizeof(value1) << std::endl;

    // Modificador unsigned:
    // não aceita números negativos. Existe um range de números que
    // podem ser criados com signed e são tanto positivos quanto negativos.
    // O unsigned pega esse range e coloca todo para os positivos,
    // esefivamente dobrando a quantidade de números que podem
    // ser representados
    unsigned int value3 {10};
    // unsigned int value4 {-300}; essa linha causa um erro de compilação 

    std::cout << "value3: " << value3 << std::endl;
    std::cout << "sizeof(value3): " << sizeof(value3) << std::endl;
    // std::cout << "value4: " << value4 << std::endl;
    // std::cout << "sizeof(value4): " << sizeof(value4) << std::endl;
    */

    // short e long
    // 2 bytes
    short short_var {-32768};
    short int short_int {455};
    signed short signed_short {122};
    signed short int signed_short_int {-456};
    unsigned short int unsigned_short_int {456};

    std::cout << "Size: 2" << std::endl;
    std::cout << "Short variable: " <<  short_var << ", size: " << sizeof(short_var) << std::endl;
    std::cout << "Short int: " <<  short_int << ", size: " << sizeof(short_int) << std::endl;
    std::cout << "Signed short: " <<  signed_short << ", size: " << sizeof(signed_short) << std::endl;
    std::cout << "Signed short int: " <<  signed_short_int << ", size: " << sizeof(signed_short_int) << std::endl;
    std::cout << "Unsigned short int: " <<  unsigned_short_int << ", size: " << sizeof(unsigned_short_int) << std::endl;
    std::cout << "--------------------" << std::endl;

    // 4 bytes
    int int_var {55};
    signed signed_var {66};
    signed int signed_int {77};
    unsigned int unsigned_int {77};

    std::cout << "Size: 4" << std::endl;
    std::cout << "Int variable: " <<  int_var << ", size: " << sizeof(int_var) << std::endl;
    std::cout << "Signed variable: " <<  signed_var << ", size: " << sizeof(signed_var) << std::endl;
    std::cout << "Signed int: " <<  signed_int << ", size: " << sizeof(signed_int) << std::endl;
    std::cout << "Unsigned int: " <<  unsigned_int << ", size: " << sizeof(unsigned_int) << std::endl;
    std::cout << "--------------------" << std::endl;

    // 4 OU 8 bytes
    long long_var {88};
    long int long_int {33};
    signed long signed_long {44};
    signed long int signed_long_int {44};
    unsigned long int unsigned_long_int {44};

    std::cout << "Size: 4 or 8" << std::endl;
    std::cout << "Long variable: " <<  long_var << ", size: " << sizeof(long_var) << std::endl;
    std::cout << "Long int: " <<  long_int << ", size: " << sizeof(long_int) << std::endl;
    std::cout << "Signed long: " <<  signed_long << ", size: " << sizeof(signed_long) << std::endl;
    std::cout << "Signed long int: " <<  signed_long_int << ", size: " << sizeof(signed_long_int) << std::endl;
    std::cout << "Unsigned long int: " <<  unsigned_long_int << ", size: " << sizeof(unsigned_long_int) << std::endl;
    std::cout << "--------------------" << std::endl;

    // 8 bytes
    long long long_long {888};
    long long int long_long_int {999};
    signed long long signed_long_long {444};
    signed long long int signed_long_long_int {1234};
    unsigned long long int unsigned_long_long_int {1234};

    std::cout << "Size: 8" << std::endl;
    std::cout << "Long long variable: " <<  long_long << ", size: " << sizeof(long_long) << std::endl;
    std::cout << "Long long int: " <<  long_long_int << ", size: " << sizeof(long_long_int) << std::endl;
    std::cout << "Signed long long: " <<  signed_long_long << ", size: " << sizeof(signed_long_long) << std::endl;
    std::cout << "Signed long long int: " <<  signed_long_long_int << ", size: " << sizeof(signed_long_long_int) << std::endl;
    std::cout << "Unsigned long long int: " <<  unsigned_long_long_int << ", size: " << sizeof(unsigned_long_long_int) << std::endl;

    return 0;
}