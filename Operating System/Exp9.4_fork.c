//

#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main()
{
    pid_t p;
    printf("Before fork:\n");
    p = fork();
    
    if(p == 0)
    {
        printf("I am child having id %d\n",getpid());
        printf("My parent id is %d\n",getpid());
    }
    else
    {
        printf("My child id is %d\n",p);
        printf("I am parent having id %d\n",getpid());
    }
    printf("common\n");
}