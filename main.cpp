#include "Stack.h"

int main() {

    Stack<char> stack;
    stack.push('a');
    stack.print();
    stack.push('b');
    stack.print();
    stack.push('c');
    stack.print();
    stack.pop();
    stack.print();
    stack.pop();
    stack.print();
    stack.pop();
    stack.print();

    return 0;
}