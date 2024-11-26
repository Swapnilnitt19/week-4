#include<stdio.h>
int main()
{
	int n=5,s,j1,j2,i,a,b,c,d;
	
		 for(i=0;i<n;i++)
		 {
		 	
		for(j1=0;j1<i+1;j1++)
		  	printf("*");
		  	
		for(s=0;s<2*n-2*i-2;s++)
		printf(" ");
		
		for(j2=0;j2<i+1;j2++)
		printf("*");
		 printf("\n");
		 
	}
	for(a=0;a<n;a++)
		 {
		for(b=0;b<n-a;b++)
		   printf("*");
		for(c=0;c<2*a;c++)
		  printf(" ");
		for(d=0;d<n-a;d++)
		  printf("*");
		 printf("\n");
	}

	return 0;
}
