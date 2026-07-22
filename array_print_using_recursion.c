#include <stdio.h>

/*
    Recursive Function

    This function prints every element
    of the array using recursion.

    Parameters:

    a[] -> array (actually receives pointer to first element)
    n   -> total number of elements
    i   -> current index

    Instead of using a loop,
    recursion moves from one index
    to the next.
*/
void fun(int a[], int n, int i)
{
    /*
    Base Case

    When current index becomes equal
    to array size,

    there are no more elements left.

    So recursion stops.
    */
    if (i == n)
        return;

    /*
    Print current array element.
    */
    printf("%d ", a[i]);

    /*
    Recursive Call

    Move to the next index.

    Current:
        i

    Next:
        i + 1

    Every recursive call creates
    a new stack frame.
    */
    fun(a, n, i + 1);

    /*
    After recursion finishes,
    execution returns here.

    Since there is no code below,
    this function simply returns
    to the previous recursive call.
    */
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    /*
    Start recursion from index 0.

    Call sequence:

    fun(a, n, 0)
        ↓
    fun(a, n, 1)
        ↓
    fun(a, n, 2)
        ↓
    ...
        ↓
    fun(a, n, n)

    Base Case reached.
    Then all recursive calls
    return one by one.
    */
    fun(a, n, 0);

    return 0;
}