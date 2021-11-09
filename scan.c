#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the three numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	printf("\n The sum of %d+%d is %d",a,b,a+b);
	printf("\n The substraction of %d-%d is %d",b,c,b-c);
	printf("\n The multiplication of %d*%d is %d",c,a,c*a);
}
