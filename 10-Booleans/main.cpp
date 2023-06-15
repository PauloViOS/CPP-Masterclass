#include <iostream>

int main()
{
    bool red_light {true};
    bool green_light {false};

    if (red_light == true) {
        std::cout << "Stop!" << std::endl;
    } else {
        std::cout << "Go through" << std::endl;
    }

    if (green_light) {
        std::cout << "The light is green" << std::endl;
    } else {
        std::cout << "The light is NOT green" << std::endl;
    }
    
    // sizeof() -> Booleanos tem o tamanho de um byte
    std::cout << "sizeof(bool): " << sizeof(bool)<< std::endl;

    // printing a bool
    std::cout << "red light (true): " << red_light << std::endl; // mostra 1
    std::cout << "green light (false): " << green_light << std::endl; // mostra 0

    // da mesma forma que controlamos a precisão de floats na aula anterior
    // através de uma alteração do comportamento do cout, podemos alterar aqui para
    // que ele exiba de fato o booleano ao invés do seu valor como int
    std::cout << std::boolalpha;
    std::cout << "red light (true): " << red_light << std::endl;
    std::cout << "green light (false): " << green_light << std::endl;

    return 0;

}