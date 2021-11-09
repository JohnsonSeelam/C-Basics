#include<stdio.h>
void main()
{
	int n;
	printf("Enter a number (from 1-26):");
	scanf("%d",&n);
	printf("Corresponding ASSCII character for  %d is %c",n,n+96);
}
