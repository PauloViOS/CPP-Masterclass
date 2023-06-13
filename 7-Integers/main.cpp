#include <iostream>

// integers tomam 4 bytes de memória
int main()
{
    // Inicialização com {}
    /*
    // Variável pode conter valor inútil

    int elephant_count; // Inicia com valor nulo (não 0). Alguns compiladores podem passar o valor 0 para a variável por ser um valor que faz sentido colocar ali

    int lion_count{}; // inicia como 0

    int dog_count{10}; // inicia como 10

    int cat_count{15}; // inicia como 15

    // podemos usar uma expressão para iniciar uma variável
    int domesticated_animals{dog_count + cat_count};

    // int new_number{doesnt_exist}; não deixa compilar pq a variável não existe

    // não deixa compilar. Essa conversão deve ser feita usando ()
    // int narrowing_conversion{2.9};

    std::cout << "Elephant count: " << elephant_count << std::endl;
    std::cout << "Lion count: " << lion_count << std::endl;
    std::cout << "Dog count: " << dog_count << std::endl;
    std::cout << "Cat count: " << cat_count << std::endl;
    std::cout << "Domesticated animal count: " << domesticated_animals << std::endl;
    */

    // Inicialização Funcional ( com () )
    /*
    int apple_count(5);
    int orange_count(10);
    int fruit_count(apple_count + orange_count);

    // int bad_initialization (doesnt_exist + doesnt_exist2);

    // conversão com (). Informação é perdida. Menos seguro que iniciar com {}
    int functional_narrowing_conversion(2.9); // ainda gera uma warning no compilador, mas termina a compilação

    std::cout << "Apple count: " << apple_count << std::endl;
    std::cout << "Orange count: " << orange_count << std::endl;
    std::cout << "Fruit count: " << fruit_count << std::endl;
    std::cout << "Narrowing conversion: " << conversao_limitadora_funcional << std::endl;
    */

    // Notação de atribuição

    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;
    // Linha abaixo tem o mesmo efeito da inicialização funcional
    // gera warning e converte pra parte inteira
    int narrowing_conversion_assignment = 2.9;

    std::cout << "Bike count: " << bike_count << std::endl;
    std::cout << "Truck count: " << truck_count << std::endl;
    std::cout << "Vehicle count: " << vehicle_count << std::endl;
    std::cout << "Narrowing conversion: " << narrowing_conversion_assignment << std::endl;

    // checa o tamanho da memória ocupada pelos dados usando a função sizeof
    std::cout << "sizeof int: " << sizeof(int) << std::endl;
    std::cout << "sizeof truck_count: " << sizeof(truck_count) << std::endl;

    return 0;
}