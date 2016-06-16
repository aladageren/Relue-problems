#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x,y,total=0;
	x=1;
	y=0;
	do{
	y=y+x;
	if(y%2==0)
		total=total+y;
	x=x+y;
	if(x%2==0)
		total=total+x;
	}while(total<4000000);
	printf("%d\n",total);
	system("pause");
	return 0;
}

