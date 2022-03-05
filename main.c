#include <stdio.h>
#include <assert.h>

/**
 * Calculate postfix expression
 *
 * Constraints:
 *  - Only needs to support addition and subtraction
 *  - Only needs to support whole signed integers
 *  - Optionally support negative integers
 *  - Optionally handle incorrectly formatted input. You may modify function
 *    declaration and calls in main if necessary.
 *
 * @param expr Postfix notation expression to evaluate
 * @return Answer
 */
int calculate(char * expr)
{
    /* YOUR CODE HERE */
    return 0;
}

#if defined(TEST_BUILD)
int main(void)
{
    printf("Testing postfix calculator...\n");

    /* YOUR TESTS HERE
     *
     * Please modify the below assert */
    assert(0);

    printf("PASSED\n");
    return 0;
}
#else
int main(int argc, char * argv[])
{
    if (argc > 1) {
        printf("%d\n", calculate(argv[0]));
    } else {
        printf("USAGE:\n\tpostfix \"<expression>\"\n");
        return -1;
    }

    return 0;
}
#endif
