
#include<stdio.h>
#include<math.h>
float f(float x)
{
    return x*x - 4*x - 10;
}
float df (float x)
{
    return 2*x - 4;
}

int main()
{
    int itr, maxmitr;
    float h, x0, x1, allerr;
    printf("\nEnter x0, allowed error and maximum iterations\n");
    scanf("%f %f %d", &x0, &allerr, &maxmitr);
    for (itr=1; itr<=maxmitr; itr++)
    {
         x1 = x0 - (f(x0)/df(x0));
        printf(" At Iteration no. %3d, x = %9.6f\n", itr, x1);
        if (fabs(x1-x0) < allerr)
        {
            printf("After %3d iterations, root = %8.6f\n", itr, x1);
            return 0;
        }
        x0=x1;
    }
    printf("The required solution does not converge or iterations are insufficient\n");
    return 1;
}