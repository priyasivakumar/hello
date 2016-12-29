#include<conio.h>
#include<stdio.h>
void main()
{
  char c;
  printf("enter a character:");
  scanf("%c",&c);
  if((c>='a'&&c<='z') || (c>='A'&&c<='Z'))
    printf("it is an alphabet.",c);
  else
    printf("it is not an alphabet.",c);
  getch();
}
