/*C program to check whether string is Palindrome or not without using function*/
#include<stdio.h>
void main()
{
char str[500];
int i,n;
printf("Enter a string: ");
gets(str);
for(n=0;str[n]!='\0';n++);
for(i=0;i<n/2;i++)
{
if(str[i]!=str[n-1-i])
break;
}
if(i>=n/2)
printf("Given string is Palindrome");
else
printf("The Given string is not Palindrome");
}

/*OUTPUT IS: 
Enter a string: wow
Given string is Palindrome

Enter a string: abccba
Given string is Palindrome

Enter a string: meme
The Given string is not Palindrome
*/
