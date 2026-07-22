#include <stdio.h>

/*
    This is a recursive function.

    A recursive function is a function that calls itself.

    IMPORTANT:
    Every recursive function must have a Base Case
    (stopping condition).

    Without a Base Case, the function will keep
    calling itself forever.
*/
void fun()
{
    /*
    This line prints "Fun" every time the function runs.
    */
    printf("Fun\n");

    /*
    Recursive Call:

    fun() calls itself again.

    Every time this line executes:
    - A new stack frame is pushed onto the Call Stack.
    - Previous function call waits.
    - Control goes to the new function call.

    Since there is NO stopping condition,
    this process continues forever.
    */
    fun();
}

int main()
{
    /*
    Program execution starts from main().
    */

    fun();

    return 0;
}