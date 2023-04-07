#include<stdio.h>
division()
{
	int i;
	printf("Enter The Value->");
	scanf("%d",&i);
	
	if (i%3==0 && i%5==0)
	{
		printf("It is divisible by 5 & 3");
	}
	else
	{
		printf("It is not divisible by 5 & 3");
	}
}
main()
{
	division();
}
