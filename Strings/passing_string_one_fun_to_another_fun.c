#include<stdio.h>
void print(const char *ptr)
{
    while(*ptr!='\0')
    {
        putchar(*ptr);
        ptr++;
        
    }
}
int main()
{
    char *str="Hello world";
    print(str);
}
/*
output is Hello world
*/
