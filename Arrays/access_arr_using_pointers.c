#include <stdio.h>



int main()
{
    int arr[100];
    int N, i;
    int * ptr = arr;    // Pointer to arr[0] 

    printf("Enter size of array: ");
    scanf("%d", &N);

    printf("Enter elements in array:\n");
    for (i = 0; i < N; i++)
    {
        scanf("%d", ptr);
        ptr++;   
    }

 
    ptr = arr;

    printf("Array elements: ");
    for (i = 0; i < N; i++)
    {
       
        printf("%d, ", *ptr);

        // Move pointer to next array element
        ptr++;
    }

    return 0;
}
/*
input elements : 1 , 2 , 3 , 4 ,5
output : 1 , 2 , 3 , 4, 5
*/
