#include<stdio.h>
int main()
{
	int num,c,rem=0;
	printf("enter the number\n");
	scanf("%d",&num);
	while(num!=0)
	{
	
	c=num%10;
	rem=rem*10+c;
	num=num/10;
}
	printf("Reverse number is %d",rem);
	return 0;
}
