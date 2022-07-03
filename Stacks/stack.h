#ifndef STACK_H
#define STACK_H
/*
* there are no other includes here because they are not
needed.
* if you do need other things included, they would go here
*/
#include "data.h"
class Stack
{
public:
//constructor
Stack(int size);
//destructor
~Stack();
//method to push data onto the stack
void push(Data);
//method to pop data off the stack
Data pop();
//method to peek at the top of the stack
Data peek();
//method to check if the stack is empty
bool isEmpty();
//method to get the size of the stack
int sizeofstack();
private:
// these are the only attributes you need.
// do not modify them or add any other attributes
int top;
int size;
Data **stack;
};
#endif // STACK_H