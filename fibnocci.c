#include<stdio.h>
#include<conio.h>
int main()
{
 int f1=0,f2=1,nextterm=0,n;
 printf("Enter the positive number:");
 scanf("%d",&n);
 printf("fibonacci series:");
 nextterm==f1+f2;
 while(nextterm<=n)
 {
  printf("%d\n",nextterm);
  f1=f2;
  f2=nextterm;
  nextterm=f1+f2;
 }
 return 0;
}
