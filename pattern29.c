#include<stdio.h>
int main()
{
    int n;
    printf("enter the n\n");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        for(int s=0;s<n-i-1;s++)

        printf(" ");
           
           if(i%2==0)
           {
            for(int j1=0;j1<i+1;j1++)
               printf("*");
           }
           if(i%2!=0)
           {
            for(int j2=0;j2<i+1;j2++)
            printf("-");
           }
        printf("\n");
    }        
    return 0;
    

}