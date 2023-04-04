#include<stdio.h>
int main()
{
    int a[100],i,max,min,n;
    printf("enter array size: ");
    scanf("%d",&n);
    printf("enter %d elements in array ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
        if(a[i]>max)
        {
            max=a[i];
        }
    }
        printf("%d=max ",max);
        printf("%d=min ",min);
    }
/*
input elements - 1 2 3 4 5
output - max is 5 , min is 1
*/
