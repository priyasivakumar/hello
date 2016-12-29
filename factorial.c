#include<stdio.h>
#include<conio.h>
void main()
{
    int n,fact=1,i;
    printf("\nEnter the values:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
      fact=fact*i;
      printf("the factorial value is:%d\n",fact);
  getch();
}
