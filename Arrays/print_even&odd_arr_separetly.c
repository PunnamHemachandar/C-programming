#include <stdio.h>
int main()
{
    int a[20],b[20],c[20];
    int i,j=0,k=0,n;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    printf("enter %d elements of array",n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            b[j]=a[i];
            j++;
        }
        else
        {
            c[k]=a[i];
            k++;
        }
    }
    printf("even array is: ");
    for(i=0;i<j;i++)
    printf("%d ",b[i]);
    printf("odd array is: ");
    for(i=0;i<k;i++)
    printf("%d ",c[i]);

}
/* 
array elements are : 1 2 3 4 5 6
even array is 2 4 6 and odd array is 1 3 5
*/
