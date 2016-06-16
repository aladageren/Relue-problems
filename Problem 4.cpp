#include <stdio.h>
#include <string.h>
int ispalindrome(int n);
int main()
{
	int i,j;	
	int largest=0;
	int multi;
	for(i=900; i<=999; i++){
		for(j=900; j<=999; j++){
			multi=i*j;
			if(ispalindrome(multi) && (i*j)>largest)
				largest=i*j;
		}	
	}
	printf("%d largest",largest);
	return 0;
}
int ispalindrome(int n)
{	char trial[6];
	int flag,k,l;

	sprintf(trial, "%d", n);
	l=strlen(trial);
	k=0;
	flag=1;
		while(k<(l/2))	
		{
			
			if(trial[k]!=trial[l-k-1]){
				flag=0;
				break;
			}
			k++;		
		}
	return flag;
}



