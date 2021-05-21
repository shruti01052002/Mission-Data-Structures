//Initial Template for C++

#include <stdio.h>

void rotate(int arr[], int n);

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n] , i;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        rotate(a, n);
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
        return 0;
}


void rotate(int arr[], int n)
{
    int curr, prev, i;
    prev = arr[0];
    for(i=1;i<n;i++)
    {
        curr = arr[i];
        arr[i] = prev;
        prev = curr;
        if(i==n-1)
        arr[0] = prev;
    }
}
