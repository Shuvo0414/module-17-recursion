#include <stdio.h>

/*
    Recursive Function:

    This function finds the length of a string
    using recursion.

    Parameters:

    a[] → string (character array)
    i  → current index of the string

    Instead of using strlen(),
    recursion checks each character one by one.
*/
int fun(char a[], int i)
{
    /*
        Base Case:

        Every string in C ends with a special character:

        '\0' (null character)

        When we reach '\0',
        it means there are no more characters.

        So we return 0 because
        there is nothing left to count.
    */
    if (a[i] == '\0')
        return 0;

    /*
        Recursive Call:

        Move to the next character.

        Example:

        hello

        i = 0 → h
        i = 1 → e
        i = 2 → l
        i = 3 → l
        i = 4 → o
        i = 5 → '\0'


        The function keeps calling itself
        until it reaches the end of the string.
    */
    int l = fun(a, i + 1);

    /*
        Return Phase:

        After reaching the Base Case,
        the Call Stack starts returning.

        Every return adds 1 for the current character.

        Example:

        fun(5) → return 0
        fun(4) → return 0 + 1
        fun(3) → return 1 + 1
        fun(2) → return 2 + 1
        fun(1) → return 3 + 1
        fun(0) → return 4 + 1


        Final answer = 5
    */
    return l + 1;
}

int main()
{
    /*
        String:

        hello

        Memory:

        index:
        0   1   2   3   4   5
        h   e   l   l   o  \0

        Last position contains '\0'
        which tells C that the string ended.
    */
    char a[6] = "hello";

    /*
        Start recursion from index 0.

        fun(a,0)

        means:
        Start checking from the first character.
    */
    int length = fun(a, 0);

    /*
        Print final string length.
    */
    printf("%d", length);

    return 0;
}