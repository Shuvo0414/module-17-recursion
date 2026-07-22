#include <stdio.h>

/*
    Recursive Function:

    This function calls itself.

    Base Case:
    if (i == 6)
        return;

    When i becomes 6,
    the function immediately stops
    and returns to the previous function call.

    This prevents infinite recursion
    and avoids Stack Overflow.
*/
void fun(int i)
{
    /*
    Base Case (Stopping Condition)

    As soon as i becomes 6,
    recursion stops.

    No new function call is created.
    */
    if (i == 6)
        return;

    /*
    This line executes before
    the recursive call.

    Therefore numbers are printed as:
    1 2 3 4 5
    */
    printf("%d\n", i);

    /*
    Recursive Call

    Calls the same function again
    with the next value.

    Every call creates a new stack frame
    in the Call Stack.
    */
    fun(i + 1);

    /*
    After the recursive call finishes,
    execution returns here.

    Since there is no code below,
    this function simply returns
    to the previous function call.
    */
}

int main()
{
    /*
    Program starts from main().

    First function call:
        fun(1)

    Call sequence:

    fun(1)
      ↓
    fun(2)
      ↓
    fun(3)
      ↓
    fun(4)
      ↓
    fun(5)
      ↓
    fun(6) → Base Case → Stop

    Then all function calls return
    one by one until the Call Stack
    becomes empty.
    */
    fun(1);

    return 0;
}