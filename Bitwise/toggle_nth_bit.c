#include <stdio.h>

int main()
{
    int num, n, newNum;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);

    /* Input bit position you want to toggle */
    printf("Enter nth bit to toggle (0-31): ");
    scanf("%d", &n);
    newNum = num ^ (1 << n);

    printf("Number before toggling %d bit: %d (in decimal)\n", n, num);
    printf("Number after toggling %d bit: %d (in decimal)\n", n, newNum);

    return 0;
}

/* output :
Enter any number: 22
Enter nth bit to toggle (0-31): 1


Number before toggling 1 bit: 22 (in decimal)
Number after toggling 1 bit: 20 (in decimal)
*/
