//program to swap using pointers
#include <stdio.h>

void Swap(int *a, int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
int main()
{
    int x=0,y=0;
    printf("Enter the first number :");
    scanf("%d",&x);
    printf("\nEnter the second number :");
    scanf("%d",&y);
    printf("\nThe value of the numbers are : %d , %d",x,y);
    Swap(&x,&y);
    printf("\nThe value of the numbers are : %d , %d",x,y);
    return 0;
}
