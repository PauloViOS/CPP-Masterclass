#include <iostream>

int main()
{
    /*
      erro em tempo de compilação (falta o ; no fim da linha)
      isso impede que o binário seja gerado. Geralmente é um
      erro de sintaxe
    */
    // std::cout << "Hello World" << std::endl

    /*
        erro em tempo de execução
        O compilador vai deixar gerar o binário, mas quando o programa
        for executado, um erro ocorrerá. Dependendo do erro, o compilador
        vai gerar um *aviso* durante a compilação.
        Tivemos que capturar o valor da divisão para que um
        erro de fato fosse mostrado no terminal. Se apenas fizermos a
        divisão, o programa termina sem explicitar o motivo
    */
    int value = 7 / 0;
    std::cout << "value: " << value << std::endl;
    return 0;
}