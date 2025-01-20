#include <iostream>
#include "lexer/lexer.hpp"

int main() 
{
    std::cout << "Hello World\n";

    Lexer* lexer = new Lexer;

    lexer->print_hello_lexer();

    return 0;
}