#include "main.h"
int main(int argc, char **argv)
{
//seed the random number generator
srand(time(NULL));
/*
**************************************************************
*
* First get your arguments from the command line. Your
program must
* accept one and only one argument not including the
program name
* itself. That argument must be an integer between 2 and
any
* number (i.e. >= 2). If anything else is entered in any
way,
* terminate the program with a suitable error message
telling the
* user how to use your program correctly.
*
* Remember, you may not use more than one return, even in
main()
* and you may not use exit() or anything like that.
*
**************************************************************
*/
if (argc != 2)
{
cout << "Usage: " << argv[0] << " <test number>" <<
endl;
return 1;
}
int testNum = atoi(argv[1]);
if (testNum <2)
{
cout << "Usage: " << argv[0] << " <test number>" <<
endl;
return 1;
}
/*
**************************************************************
*
* Use the number passed in from the command line and
declare a stack
* that uses that number as the size of the stack. NOTE:
Make sure
* your stack ALSO checks the number passed in to it. You
cannot rely
* on main checking the number first. This will be tested
during grading.
*
**************************************************************
*/
Stack *stack = new Stack(testNum);
/*
**************************************************************
*
* Now, for each test, you will need to do the following:
*
* 1. Create a random string of characters and push it
onto the stack.
* 2. Pop the string off the stack and compare it to the
string you
* pushed.
* 3. Repeat steps 1 and 2 for a random number of times
between 1 and
* 10.
* 4. Pop the stack and make sure it is empty.
* 5. Repeat steps 1-4 for a random number of times
between 1 and 10.
* 6. Pop the stack and make sure it is empty.
* 7. Repeat steps 1-6 for a random number of times
between 1 and 10.
* 8. Pop the stack and make sure it is empty.
* 9. Repeat steps 1-8 for a random number of times
between 1 and 10.
* 10. Pop the stack and make sure it is empty.
* 11. Repeat steps 1-10 for a random number of times
between 1 and 10.
* 12. Pop the stack and make sure it is empty.
* 13. Repeat steps 1-12 for a random number of times
between 1 and 10.
* 14. Pop the stack and make sure it is empty.
* 15. Repeat steps 1-14 for a random number of times
between 1 and 10.
* 16. Pop the stack and make sure it is empty.
* 17. Repeat steps 1-16 for a random number of times
between 1 and 10.
* 18. Pop the stack and make sure it is empty.
* 19. Repeat steps 1-18 for a random number of times
between 1 and 10.
* 20. Pop the stack and make sure it is empty.
* 21. Repeat steps 1-20 for a random number of times
between 1 and 10.
* 22. Pop the stack and make sure it is empty.
* 23. Repeat steps 1-22 for a random number of times
between 1 and 10.
* 24. Pop the stack and make sure it is empty.
* 25. Repeat steps 1-24 for a random number of times
between 1 and 10.
* 26. Pop the stack and make sure
* it is empty.
* 27. Repeat steps 1-26 for a random number of times
between 1 and 10.
* 28. Pop the stack and make sure
* it is empty.
* 29. Repeat steps 1-28 for a random number of times
between 1 and 10.
* 30. Pop the stack and make sure
* **/
for (int i = 0; i < testNum; i++)
{
string randomString;
rand_string(&randomString);
Data data = Data(i, randomString);
stack->push(data);
}
for (int i = 0; i < testNum; i++)
{
Data data = stack->pop();
cout<<data.information<<endl;
}
if (stack->isEmpty())
{
cout <<"Stack is empty"<< endl;
}
return 0;
}