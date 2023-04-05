#include <stdio.h>
int main()
{
    int arr[100];
    int size;
    int i, j, temp;

    
    printf("Enter size of array: ");
    scanf("%d", &size);

    
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<size; i++)
    {

        for(j=i+1; j<size; j++)
    
    {
            if(arr[i] < arr[j])
            {
                temp     = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }


    printf("\nElements of array in ascending order: ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", arr[i]);
    }
1
    return 0;
}
/*
elements are  2 14 7 42 92
after sorting descending order 92 ,42,14,7,2
*/
