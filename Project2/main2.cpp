#include <iostream>
#include "Stack.h"
int main()
{
    Stack* stk = new Stack;
    initStack(stk);
    push(stk, 1);
    push(stk, 4);
    push(stk, 9);
    std::cout << "Welcome to the first program in C++ !!!" << std::endl;
    while (!isEmpty(stk)) 
    {
        std::cout << "Element was popped: " << pop(stk) << std::endl;
    }
    cleanStack(stk);
    delete stk;
    system("pause");
	return 0;
}