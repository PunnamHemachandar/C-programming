#include<stdio.h>
void main()
{
char str1[100],str2[100];
int i,n,j;
printf("Enter a string1: ");
fgets(str1,100,stdin);
printf("Enter a string2: ");
fgets(str2,100,stdin);
for(n=0;str1[n]!='\0';n++);// to find the string length 
for(i=n,j=0;str2[j]!='\0';i++,j++)
{
str1[i]=str2[j];
}
printf("After concatenation the string1 is became like this:%s",str1);
}

/* OUTPUT IS: Enter a string1: i love
Enter a string2: c programming
After concatenation the string1 is became like this: i love c programming
*/
