#include<stdio.h>
int main()
{
    int a[10],i,j,k,n;
    printf("enter the size: ");
    scanf("%d",&n);
    
    printf("enter the %d array elements\n",n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<n;k++)
                {
                    a[k]=a[k+1];
                }
                    n--;
                    j--;
                
            }
        }
    }
    printf("array after deleting duplicates: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
  /*
  input array elements  1 1 5 3 5 7 
  output is 1 5 3 7
    */
}
