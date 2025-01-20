#include<stdio.h>


int main()
{
    /* code */
    printf("My first program");
    int a,*p;
    a=5;
    printf("\n value of a%d",a);
    p=&a;
    printf("\nAddress of  a %p",&a);
    printf("\n address on p %u",p);
    printf("\n value on p %d",*p);
    printf("\n address of p%d",*(&p));


    return 0;
}
