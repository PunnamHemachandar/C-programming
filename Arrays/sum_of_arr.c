#include <stdio.h>
int main()
{
    int arr[100];
    int i, n, sum=0;
    printf("Enter size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements in the array: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }


    printf("Sum of all elements of array = %d", sum);

    return 0;
}
/* 
array 5 elements are : 1 2 3 4 5
Total sum of arr elements are 15
*/
