#include <iostream>
#include <iomanip>

int main()
{
    // Lembrar dos sufixos ao iniciar uma variável de ponto flutuante ou será artibuído double por padrão
    // o double funciona bem em muitas situaçãoes, então veremos ser usado com frequência

    float number1 {1.12345678901234567890f};
    double number2 {1.12345678901234567890};
    long double number3 {1.12345678901234567890L};

    std::cout << "sizeof float: " << sizeof(number1) << std::endl; // tamanho esperado: 4
    std::cout << "sizeof double: " << sizeof(number2) << std::endl; // tamanho esperado: 8
    std::cout << "sizeof long: " << sizeof(number3) << std::endl; // tamanho esperado: 16

    std::cout << "--------------------" << std::endl;

    // Precisão
    std::cout << std::setprecision(20); // controla a precisão a partir do std::cout
    std::cout << "number1 is: " << number1 << std::endl; // precisão de 7 números. Depois dos 7 o computador não consegue mais associar corretamente os valores, fazendo com que a informação seja inútil
    std::cout << "number2 is: " << number2 << std::endl; // precisão de 15 números, aproximadamente. Depende do compilador
    std::cout << "number3 is: " << number3 << std::endl; // precisão de mais de 15 números.

    //Problemas com float: a precisão é, geralmente, muito limitada
    // ao exibir o número abaixo, os últimos 2 dígitos da 
    // parte inteira estão incorretos. 
    // Isso porque o número é grande demais para ser representado
    // por um float. O correto aqui seria usar um double.
    float number4 {192400023.0}; 

    std::cout << "number4 is: " << number4 << std::endl;

    std::cout << "--------------------" << std::endl;

    // Notação científica
    // O que vimos até agora em termos de ponto flutuante
    // é a notação fixa. A notação científica é bem útil
    // quando temos números muito grandes ou muito pequenos

    double number5 {192400023};
    double number6 {1.92400023e8};
    double number7 {1.924e8}; // podemos omitir o 00023 se nossa aplicação permitir

    double number8 {0.00000000003498};
    double number9 {3.498e-11};

    std::cout << "number5 is: " << number5 << std::endl;
    std::cout << "number6 is: " << number6 << std::endl;
    std::cout << "number7 is: " << number7 << std::endl;
    std::cout << "number8 is: " << number8 << std::endl;
    std::cout << "number9 is: " << number9 << std::endl;

    std::cout << "--------------------" << std::endl;
    
    // Infinito e Nan
    double number10 { 5.6 };
    double number11 {};
    double number12 {};

    double result { number10 / number11 }; // Infinito

    std::cout << number10 << " / " << number11 << " resultda em " << result << std::endl;
    std::cout << result << " + " << number10 << " resulta em " << result + number10 << std::endl;

    // NaN
    result = number11 / number12;
    std::cout << number11 << " / " << number12 << " resulta em " << result << std::endl;

}