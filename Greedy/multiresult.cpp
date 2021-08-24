#include<stdio.h>
#include<math.h>

void multiresult{int n, int *square, int *cube, double *sroot, double *croot}
{
    *square = n*n;
    *cube = n*n*n;
    *sroot = sqrt(n);
    *croot = pow(n, 1.0/3);
}

int main()
{
    int num=5, x, y;
    double p, q;

    multiresult(num, &x, &y, &p, &q)//pass by address
    printf("Square is %d, Cube is %d, Square root is %f"
           )
}
