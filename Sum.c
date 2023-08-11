#include<stdio.h>

void main()
{
	int a,b,temp;
	printf("Enter Number:");
	scanf("%d",&a);
	printf("Enter Number:");
	scanf("%d",&b);
	
	temp=a;
	a=b;
	b=temp;
	
	
	printf("a=%d   b=%d",a,b);
}
