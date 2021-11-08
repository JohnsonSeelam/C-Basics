#include<stdio.h>
void main()
{
	int a=10,b=4;
	printf("%d\n",(a>b)&&(b>a));
	printf("%d\n",(a>b)||(b>a));
	printf("%d",(a>b)&&(b<a)||(b>a));
}
