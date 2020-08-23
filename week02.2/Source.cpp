#include<stdio.h>
int main() 
{
	int x,y=0;
	printf("Enter your num : ");
	scanf_s("%d" ,& x);
	for(y=1;y<=x;y++)
	{
		printf("*");

	}
	return 0;
}