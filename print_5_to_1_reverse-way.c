#include <stdio.h>

/*
    Recursive Function

    This function calls itself until
    the Base Case is reached.

    Important:
    The position of printf() changes
    the output order in recursion.
*/
void fun(int i)
{
    /*
        Base Case:

        When i becomes 6,
        recursion stops.

        Without this condition,
        the function would keep calling itself
        forever and cause Stack Overflow.
    */
    if (i == 6)
        return;

    /*
        Recursive Call:

        The function calls itself first
        before printing.

        Call Stack creation:

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
        fun(6)

        At this moment, printf() has not executed yet.
        Every function call is waiting.
    */
    fun(i + 1);

    /*
        This printf executes while the Call Stack
        is returning (unwinding).

        First fun(6) returns,
        then fun(5) prints,
        then fun(4) prints,
        and so on.

        Output:

        5
        4
        3
        2
        1

        because printing happens during
        the return phase of recursion.
    */
    printf("%d\n", i);
}

int main()
{
    /*
        Program starts from main().

        First recursive call:

        fun(1)

        Then recursion goes deeper
        until Base Case is reached.
    */
    fun(1);

    return 0;
}