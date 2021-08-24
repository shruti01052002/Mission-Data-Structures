#include<stdio.h>
int main()
{
    int num = 6;
    int *n=&num;
    *n = 10;
    printf("%d\n", num);
    printf("%d\n", n);
    return 0;
}

/**
10
6422036

Process returned 0 (0x0)   execution time : 0.109 s
Press any key to continue.
**/
