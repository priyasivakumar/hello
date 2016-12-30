#include<stdio.h>
#include<conio.h>
void main()
{
 int num,temp,count=0;
 printf("\nEnter an integer:");
 scanf("%d",&num);
 temp=num;
 while(temp!=0)
 {
    temp=temp/10;
    count++;
 }
  printf("number of digits in %d:%d",num,count);
 return  0;
}

