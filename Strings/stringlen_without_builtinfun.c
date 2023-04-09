#include <stdio.h>

int main()
{
    char str[100];
    int length=0;
    printf("enter the string\n");
    scanf("%99[^\n]",str);
    while(str[length]!='\0')
    {
        length++;
        
    }
    printf("string length is %d\n",length);
}
