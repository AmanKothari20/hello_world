#include <stdio.h>
#include <math.h>
static int h=0;
void prime(int num)
{
    int i,count=0;
    i=2;
    while(num%i==0)
        {
            if(num%i==0)
               {;
                   num/=i;
                   count++;
               }
        }


    for(i=3;i<=num;i+=2)
    {
        while(num%i==0)
            {
                if(num%i==0)
               {
                   num/=i;
                   count++;
               }
            }
    }

    if(count<2)
    printf("\nThe number is prime");
    else
    printf("\nThe number is NOT prime");
    h++;
}

void armstrong(int dig)
{
    int a=0,b=0,c=0,k=dig;
    while(k>0)
        {
            k/=10;
            c++;
        }
    k=dig;
    while(k>0)
        {
            a=k%10;
            b+=pow(a,c);
            k/=10;
        }
    if(b==dig)
        printf("\nThe number is an Armstrong number");
    else
        printf("\nThe number is NOT an Armstrong number");
    h++;
}

int main()
{
    int x,count=0,i;
    char p='y';
    while(p=='y'||p=='Y')
    {
        printf("\nEnter the number(>0) : ");
        scanf("%d",&x);
        prime(x);
        armstrong(x);
        printf("\n\nDo you want to check another number(y/n) ? :");
        scanf("%s",&p);
    }
    printf("\nfunction was called %d times",h);
    return 0;
}
