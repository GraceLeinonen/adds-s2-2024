#include "Stack.h"

int main() {

    Stack<int> stack;
    stack.push(1);
    stack.print();
    stack.push(2);
    stack.print();
    stack.push(3);
    stack.print();
    stack.pop();
    stack.print();
    stack.pop();
    stack.print();
    stack.pop();
    stack.print();

    return 0;
}