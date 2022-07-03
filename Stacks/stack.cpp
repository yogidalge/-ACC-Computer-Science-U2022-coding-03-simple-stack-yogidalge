#include "stack.h"
#include<iostream>
//namespace stacks
using namespace std;
//define the stack constructor
Stack::Stack( int size )
{
top = -1;
this->size = 0;
stack = new Data*[size];
}
//define the stack destructor
Stack::~Stack()
{
delete [] stack;
}
//define the push method
void Stack::push(Data data)
{
top++;
stack[top] = new Data(data);
size++;
}
//define the pop method
Data Stack::pop()
{
if (isEmpty())
{
cout << "Stack is empty." << endl;
return Data(-1,"");
}
Data data = *stack[top];
delete stack[top];
top--;
size--;
return data;
}
//define the peek method
Data Stack::peek()
{
if (isEmpty())
{
cout << "Stack is empty." << endl;
return Data(-1,"");
}
return *stack[top];
}
//define the isEmpty method
bool Stack::isEmpty()
{
return (top == -1);
}
int Stack::sizeofstack()
{
return size;
}