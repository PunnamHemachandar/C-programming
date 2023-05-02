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
switch(fork())
{
case -1:
      perror("fork()");
      break;
case 0:
      printf("child:");
      printf("p[0]:%d\t p[1]:%d\n",p[0],p[1]);
      break;
default:
      printf("parent: ");
      printf("p[0]:%d\tp[1]:%d\n",p[0],p[1]);
      }
      
 }
 /*
 output: p[0]:3 p[1]:4
 child p[0]=3 p[1]:4
 */
