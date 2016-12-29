#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("\nEnter the value:");
    scanf("%d",&a);
    if(a>0)
        printf("it is a positive value");
    else
        printf("it is a negative value");
    getch();
}
