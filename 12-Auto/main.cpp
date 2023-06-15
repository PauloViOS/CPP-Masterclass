#include <iostream>
#include <typeinfo>

int main()
{
    // "auto" faz com que o compilador deduza o tipo da variável para nós 

    auto var1 {12};
    auto var2 {13.0};
    auto var3 {14.0f};
    auto var4 {15.0l};
    auto var5 {'e'};
    
    // modificadores 
    auto var6 {123u}; // unsigned
    auto var7 {123ul}; // unsigned long
    auto var8 {123ll}; // long long

    //  tipo e sizeof
    std::cout << "The variable var1(" << var1 <<") has type " << typeid(var1).name() << " and size " << sizeof(var1) << std::endl;
    std::cout << "The variable var2(" << var2 <<") has type " << typeid(var2).name() << " and size " << sizeof(var2) << std::endl;
    std::cout << "The variable var3(" << var3 <<") has type " << typeid(var3).name() << " and size " << sizeof(var3) << std::endl;
    std::cout << "The variable var4(" << var4 <<") has type " << typeid(var4).name() << " and size " << sizeof(var4) << std::endl;
    std::cout << "The variable var5(" << var5 <<") has type " << typeid(var5).name() << " and size " << sizeof(var5) << std::endl;
    std::cout << "The variable var6(" << var6 <<") has type " << typeid(var6).name() << " and size " << sizeof(var6) << std::endl;
    std::cout << "The variable var7(" << var7 <<") has type " << typeid(var7).name() << " and size " << sizeof(var7) << std::endl;
    std::cout << "The variable var8(" << var8 <<") has type " << typeid(var8).name() << " and size " << sizeof(var8) << std::endl;

    return 0;
}