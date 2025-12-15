#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter the first element:");
    scanf("%d",&a);
    printf("Enter the second element:");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping, first element: %d\n",a);
    printf("After swapping, second element: %d\n",b);
    return 0;
}