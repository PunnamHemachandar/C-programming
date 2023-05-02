// pipe creation
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
//declare to hold the file descriptors
int p[2];
//create pipe
if(pipe(p)==-1)
{
perror("PIPE");
exit(EXIT_FAILURE);
}
printf("p[0]:%d\n p[1]:%d\n",p[0],p[1]);
}
/*
output
p[0] : 3
p[1] : 4
*/
