#include <stdio.h>
int main(void)
{
        int  n;
        printf("enter your number");
        scanf("%d", &n);
        if (n == 0)
        {
/* this is a comment */
                printf("%d is zero ", n);
        }
        if (n < 0)
        {
                printf("%d is negative", n);
        }
        if (n > 0)
        {
                printf("%d is posative ", n);
        }
        return (0);
}
