#include<stdio.h>
int main()
{
	int num, mul, i;
	printf("Enter a number: ");
	scanf("%d", &num);
	for(i=0;i<=10;i++){
		mul=num*i;
		printf("\n%d X %d = %d", num, i, mul);
	}
	return 0;
}

