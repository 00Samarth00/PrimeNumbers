#include<stdio.h>
int prime(int num)
{
    int d2,d3,d5,d7;
    d2=num%2;
    d3=num%3;
    d5=num%5;
    d7=num%7;
    if(d2==d3==d5==d7==0)
    {
        return 1;
    }
    else {return 0;}
}
void main()
{
    int num;
    printf("Enter a number to check if it is a prime number or not : \n");
    scanf("%d",&num);
    if(prime(num)==1)
    {
        printf("Number entered is a prime number");
    }
    else
    {
        printf("Number entered is not a prime number");
    }
}
