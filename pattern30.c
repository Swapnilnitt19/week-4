#include<stdio.h>
int main()
    {
       int n;
       
       printf("enter the n\n");
       scanf("%d",&n);
       
       for(int i=0;i<n;i++)
       {
           for(int s=0;s<i;s++)
           printf(" ");
           
           for(int j1=0;j1<1;j1++)
           printf("*");
           
           for(int s1=0;s1<2*n-2*i-3;s1++)
           printf("-");
           
           for(int j2=0;j2<1;j2++)
           {
            if(i==n-1)
            break;
            else
            printf("*");
           }
           printf("\n");
       }
       return 0;
    }