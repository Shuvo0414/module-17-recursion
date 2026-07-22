#include <stdio.h>

/*
    Recursive Function

    This function prints numbers
    from i down to 1.

    Every recursive call creates
    a new stack frame.

    The recursion stops when
    the Base Case becomes true.
*/
void fun(int i)
{
    /*
    Base Case (Stopping Condition)

    When i becomes 0,
    recursion stops immediately.

    No more recursive calls are made.
    */
    if (i == 0)
        return;

    /*
    Since printf() comes BEFORE
    the recursive call,

    the current value is printed first.

    Output:
    5
    4
    3
    2
    1
    */
    printf("%d\n", i);

    /*
    Recursive Call

    Calls the same function
    with a smaller value.

    Every call waits until
    the next recursive call finishes.
    */
    fun(i - 1);

    /*
    After fun(i - 1) finishes,
    execution returns here.

    There is no more code,
    so this function returns
    to the previous function call.
    */
}

int main()
{
    /*
    Program starts from main().

    First recursive call:

        fun(5)

    Call sequence:

    fun(5)
      ↓
    fun(4)
      ↓
    fun(3)
      ↓
    fun(2)
      ↓
    fun(1)
      ↓
    fun(0) → Base Case → Stop

    Then all function calls return
    one by one until the Call Stack
    becomes empty.
    */
    fun(5);

    return 0;
}