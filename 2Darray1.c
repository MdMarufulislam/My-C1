#include<stdio.h>
int main()
{


int a[2][3],i,j;
printf("Enter 6 elements : ");
for(i=0;i<2;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<2;i++)
{
    for(j=0;j<3;j++)
    {
        printf("%d",a[i] [j]);
    }
}

}
