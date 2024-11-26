#include<stdio.h>
int main()
{ 
int n=5,i,j;

	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		{
			printf("*");
			
		}
		printf("\n");
	}
	
	return 0;
}
