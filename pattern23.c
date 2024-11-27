#innclude<stdio.h>
int main()
{
  int i,j,k,n;
  printf("enter the value of n: ");
  scanf("%d",&n);
  for (i=0;i<n;i++)
   {
    if(i%2==0)
    { 
        for (k=0;k<6;k++)
        printf("%d",i +1);

        printf("%d",i+2);
        printf("\n");
    }
    else
    {
        printf("%d",i+2);

        for (k=0;k<6;k++)
        printf("%d",i+1 );
        printf("\n");

    }
   }
}
