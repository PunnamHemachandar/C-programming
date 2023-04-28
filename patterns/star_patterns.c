#include <stdio.h>

int main()
{
    int i,j,rows,cols;
    printf("enter the rows");
    scanf("%d",&rows);
    printf("enter the cols");
    scanf("%d",&cols);
    for(i=1; i<=rows; i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
/*
output:
rows:5
cols:5
*
**
***
****
*****
*/
