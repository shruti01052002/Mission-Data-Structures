#include<stdio.h>
int main()
{
    int num = 6;
    int &n = num;
    n = 10;
    printf("%d\n", num);
    printf("%d", n);
    return 0;
}
