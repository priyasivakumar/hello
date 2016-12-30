#include<conio.h>
#include<stdio.h>
void main()
{
    int num1,num2,num3;
    printf("Enter three numbers:");
    scanf("%d%d%d",&num1,&num2,&num3);
    printf("\nThe three numbers are\t%d\t%d\t%d\n\n",num1,num2,num3);
    if(num1>=num2)
    {
     if(num1>=num3)
        printf("\n%d is biggest\n",num1);
     else
        printf("\n%d is biggestt\n",num3);
    }
    else
    {
      if(num2>=num3)
        printf("\n%d is biggest\n",num2);
      else
        printf("\n%d is biggest\n",num3);
    }
 getch();
}
