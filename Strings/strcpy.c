#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    printf("enter the string: \n");
    scanf("%99[^\n]",str1);
    strcpy(str2,str1);
    printf("copied string is %s\n",str2);
    
}
