#include <stdio.h>
int main()
{
	int i=20;
	while(i%16!=0 || i%9!=0 || i%5!=0 || i%7!=0 || i%11!=0 || i%13!=0 || i%17!=0 || i%19!=0)
		i=i+20;
	printf("%d is the minimum number that can be divided by any number from 1-20\n",i);
	return 0;
}
