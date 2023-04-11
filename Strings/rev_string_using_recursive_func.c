#include<stdio.h>
#include<string.h>
void reverse(char *a)
{
if(*a)
{
reverse(a+1);
printf("%c",*a);
}
}
int main()
{
char a[100];
printf("Enter a string: ");
//scanf("%[^\n]s",a);
gets(a);
reverse(a);//recursive func call
return 0;
} 

/* OUTPUT IS: $ ./rs
Enter a string: hemachandar

radnahcameh
*/
