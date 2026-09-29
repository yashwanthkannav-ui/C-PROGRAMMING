#include<stdio.h>
int main()
{
	int a,b,res,choice;
	printf("\n======BITWISE OPERATIONS======\n");
	printf("enter the first number:");
	scanf("%d",&a);
	printf("enter the second number:");
	scanf("%d",&b);
	printf("\n-----menu-----\n");
	printf("1.bitwise AND(&)\n)");
	printf("2.bitwise OR(|)\n)");
	printf("3.bitwise XOR(^)\n");
	printf("4.bitwise NOT(~)\n");
	printf("5.left swift(<<)\n");
	printf("6.right swift(>>)\n");
	printf("\nenter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			res=a&b;
			printf("bitwise AND result=%d",res);
			break;
		case 2:
			res=a|b;
			printf("bitwise OR result=%d",res);
			break;
		case 3:
			res=a^b;
			printf("bitwise XOR result=%d",res);
			break;
		case 4:
			res=~a;
			printf("bitwise NOT result=%d",res);
			break;
		case 5:
			res=a<<b;
			printf("left swift result=%d",res);
			break;
		case 6:
			res=a>>b;
			printf("right swift result=%d",res);
			break;
		default:
			printf("invalid choice");
		
    }
    return 0;
}