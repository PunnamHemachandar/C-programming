#include<stdio.h>
int my_strcpy(char*dest,char*src)
{
    while(*src)
    *dest++ = *src++;
    
}
   
int main()
{
    char str1[100],str2[100];
    printf("enter the string");
    scanf("%99[^\n]",str1);
    my_strcpy(str2,str1);
    printf("copied string is %s\n",str2);
}
/*
string is memepage
copied string is memepage
*/
