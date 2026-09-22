#include <stdio.h>
int main()
{
    int x,y;
    printf("enter value 1:");
    scanf("%d",&x);
    printf("enter value 2:");
    scanf("%d",&y);

    printf("Sum: %d \n",x+y);
    printf("Difference: %d \n",x-y);
    printf("Product: %d \n",x*y);
    printf("Quotient: %d \n",x/y);
    printf("Remainer: %d \n",x%y);
    
    return 0;
}