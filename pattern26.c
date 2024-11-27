#include<stdio.h>
int main(){
	int i,j,n=5;
	for(i=1;i<=n;i++)
	 {
	 	for(j=0;j<i;j++)
	 	 { printf("%c ",n+65-i+j);
		 }
		 printf("\n");
	 }
	return 0;
}
