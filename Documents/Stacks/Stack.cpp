#include <iostream>
#include "Stack.h"
using namespace std;

int main() {
    Stack stack;

    stack.push(30);
    stack.push(40);
    stack.push(50);

    cout << "El elemento top: " << stack.top() << endl;
    stack.pop();
    cout << "El elemento despues del pop: " << stack.top() << endl;
} 