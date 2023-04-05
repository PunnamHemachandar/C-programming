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
            if(arr[i] > arr[j])
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

    return 0;
}
/*
size:5
elements are: 50 , 80 , 40, 90,35,
output: 35,40,50,80,90
*/
