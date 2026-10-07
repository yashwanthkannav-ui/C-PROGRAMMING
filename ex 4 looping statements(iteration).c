#include<stdio.h>
int main()
{
	int n,i,sum,res;
	printf("enter a number:");
	scanf("%d",&n);
	printf("\nNumbers from 1 to %d:\n",n);
	for(i=1;i<=n;i++)
	{
		printf("%d",i);
	}
	sum=0;
	i=1;
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	res=1;
	i=1;
	do
	{
		res=res*i;
		i++;
	}
	while(i<=n);
	{
		printf("\nsum of numbers=%d",sum);
		printf("\nfactorial of %d=%d",n,res);
	}
	return 0;
}