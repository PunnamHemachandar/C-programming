#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
int p[2];
if(pipe(p)==-1)
{
perror("PIPE");
exit(EXIT_FAILURE);
}
