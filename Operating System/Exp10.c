//Program to simulate producer-consumer problem using semaphores.

#include<stdio.h>
#include<stdlib.h>

int mutex=1,full=0,empty=3,x=0;

int main()
{
    int n;

    void producer();
    void consumer();
     int wait(int);
     int signal(int);

    printf("Name: Rakesh Yadav\nRoll No. 2029");
    printf("\n1.Procedure  \n2.Consumer \n3.Exit");

    while(1)
    {
        printf("\nEnter your Choice: ");
        scanf("%d",&n);
        
        switch(n)
        {
            case 1:
            if((mutex==1)&&(empty!=0))
            producer();
            else
            printf("Buffer is full");
            break;

            case 2:
            if((mutex==1)&&(full!=0))
            consumer();
            else
            printf("Buffer is empty");
            break;

            case 3:
            exit(0);
            break;
        }
    }
}
int wait(int s)
    {
        return(--s);
    }
    int signal(int s)
    {
        return(++s);
    }

    void producer()
    {
        mutex = wait(mutex);
        full = signal(full);
        empty = wait(empty);
        x++;
        printf("Producer produces item %d",x);
        mutex = signal(mutex);
    }

    void consumer()
    {
        mutex = wait(mutex);
        full = wait(full);
        empty = signal(empty);
        printf("Consumer consumes item %d",x);
        x--;
        mutex = signal(mutex);
    }