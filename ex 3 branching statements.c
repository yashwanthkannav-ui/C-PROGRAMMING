#include<stdio.h>
int main()
{
	int a,b,res,choice;
	printf("\n======BRANCHING STATEMENTS======\n");
	printf("enter the first number:");
	scanf("%d",&a);
	printf("enter the second number:");
	scanf("%d",&b);
	printf("\n-----menu-----\n");
	printf("1.check positive,negative or zero\n");
	printf("2.check even or odd\n");
	printf("3.find the largest of two numbers\n");
	printf("4.check divisibility by 5\n");
	printf("\nenter your choice:");
	scanf("%d",&choice);
	printf("\n-----RESULT-----\n");
	switch(choice)
	{
		case 1:
			if(a>0)
			  printf("%d is positive",a);
			else if(a<0)
			  printf("%d is negative",a);
			else
			  printf("%d is zero",a);
			break;
		case 2:
			if(a%2==0)
			  printf("%d is even",a);
			else
			  printf("%d is odd",a);
			break;
		case 3:
			if(a>b)
			{
				res=a;
				printf("%d is the largest number",res);
			}
			else if(b>a)
			{
				res=b;
				printf("%d is the largest number",res);
			}
			else
			{
				printf("both the numbers are equal");
			}
			break;
		case 4:
			if(a%5==0)
			  printf("%d is divisible by 5",a);
			else
			  printf("%d is not divisible by 5",a);
			break;
		default:
			printf("invalid choice");
	}
	return 0;
}