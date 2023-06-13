#include <iostream> //import a lib iostream

int main() // a função main é chamada de "entrypoint" em c++. É sempre a primeira função a ser chamada no arquivo
{
    std::cout << "Number 1";              // o cout e o endl são do iostream. Não tem i/o sem essa lib
    std::cout << "Number 2" << std::endl; // pra mostrar que o endl serve pra fazer a quebra de linha
    std::cout << "Number 3";

    return 0; // é uma maneira de sinalizar para o OS que o programa terminou sem problemas
}