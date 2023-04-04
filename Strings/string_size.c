#include<stdio.h>

int main()
{
    if(sizeof("Hello" "World")==sizeof("hello")+sizeof("world"))
    {
        printf("wow\n");
    }
    else
    {
        printf("Huh\n");
    }
    return 0;

}
/*
11==12 false
it goes to else part
*/
