#include<stdio.h>
int main(){
	int i,j,n=5;
	for(i=1;i<n+1;i++)
	 {
	 	for(j=1;j<i+1;j++)
	 	 { printf("%c ",j+64);
		 }
		 printf("\n");
	 }
	return 0;
}
