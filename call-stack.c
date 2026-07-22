#include <stdio.h>

/*
    world() is a normal function.

    When this function is called:
    1. A new stack frame is pushed onto the Call Stack.
    2. It starts executing from the first line.
    3. After finishing, its stack frame is removed (popped).
    4. Control returns to the function that called it.
*/
void world()
{
    printf("World Start\n");

    /*
    All statements inside this function execute sequentially.
    */
    printf("World End\n");
}

/*
    hello() is called from main().

    While hello() is running, main() is paused (waiting).

    If hello() calls another function (world()),
    then hello() also waits until world() finishes.
*/
void hello()
{
    printf("Hello Start\n");

    /*
    Call Stack flow:

    main()
       ↓
    hello()
       ↓
    world()

    world() finishes first,
    then execution comes back here.
    */
    world();

    /*
    This line executes only after world() has completely finished.
    */
    printf("Hello End\n");
}

int main()
{
    /*
    Every C program starts execution from main().

    The Call Stack first pushes main() onto the stack.
    */
    printf("Main Start\n");

    /*
    main() calls hello().

    At this moment:
    - main() pauses and waits.
    - hello() is pushed onto the Call Stack.
    */
    hello();

    /*
    This line executes only after hello() has finished
    and returned control back to main().
    */
    printf("Main End\n");

    /*
    main() finishes.
    Its stack frame is removed,
    and the Call Stack becomes empty.
    */
    return 0;
}