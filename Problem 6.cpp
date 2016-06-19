#include <stdio.h>
#include <math.h>
int main()
{
	int i,n,sum=0,sum2,x;
	printf("Enter the limit\n");
	scanf("%d",&n);
	x=(n)*(n+1)/2;
	sum2=pow(x,2);
	for(i=1; i<=n; i++)
		sum=sum + pow(i,2);
	printf("%d is the the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.\n",sum-sum2);
	return 0;
}
