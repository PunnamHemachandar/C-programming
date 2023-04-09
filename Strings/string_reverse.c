#include <stdio.h>

int main()
{
    char str[100];
    int i,len, length=0;
    printf("enter the string\n");
    scanf("%99[^\n]",str);
    while(str[length]!='\0')
    {
        length++;
        
    }
    printf("string length is %d\n",length);
    len=length;
    printf("reverse string is : \n");
    for(i=len;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    
}
