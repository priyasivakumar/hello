#include<stdio.h>
#include<conio.h>
int main()
{
  int base,exponent,result;
  printf("enter the base number:");
  scanf("%d",&base);
  printf("enter the exponent number:");
  scanf("%d",&exponent);
  result=pow(base,exponent);
  printf("%1d^%1d=%2d",base,exponent,result);
  return 0;
}
