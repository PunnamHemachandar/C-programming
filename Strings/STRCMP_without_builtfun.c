#include<stdio.h>
int my_strcmp(char *ptr1,char *ptr2)
{
    while(*ptr1!='\0'&& *ptr2!='\0'&& *ptr1==*ptr2)
    {
        ptr1++;
        ptr2++;
        
    }
    if(*ptr1==*ptr2)
    return 0;
    else
    return *ptr1-*ptr2;
}
int main()
{
    char str1[]="ram",str2[]="RAM";
    int ret;
    ret=my_strcmp(str1,str2);
    if(ret==0)   

    printf("strings are equal");
    else if(ret>0)
    printf("string1 is greater\n");
    else
    printf("string2 is greater\n");

}
/*
string 1 is greater
*/
