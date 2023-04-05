#include <stdio.h>

int main()
{
    int marks[5];
    int n, i,sum=0;
    float avg;
    printf("enter array size: ");
    scanf("%d",&n);
    printf("enter marks of %d students: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+marks[i];
    }
    avg=sum/5;
    printf("sum=%d ",sum);
    printf("avg=%f ",avg);
}
/*
marks of 5 students is 10,20,30,40,50
sum = 150 , avg = 30.000000
*/
