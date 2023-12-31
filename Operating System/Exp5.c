//Write a C program to implement Bankers algorithm for Deadlock Avoidance.

#include<stdio.h>

int main()
{
    int p,c,count = 0,terminate = 0,i,j;
    int alc[5][3],max[5][3],need[5][3],safe[5],available[3],done[5];

    printf("Name: Rakesh Yadav\n");
    printf("Roll NO. 1029\n");
    printf("Enter the number of process and resources ");
    scanf("%d %d",&p, &c);

    printf("Enter allocation of resources of all process %dx%d matrix",p,c);
    for(i = 0;i < p;i++)
    {
        for(j = 0;j < c;j++)
        {
            scanf("%d",&alc[i][j]);
        }
    }

    printf("\nEnter the max resources process required %dx%d matrix",p,c);
    for(i = 0;i < p;i++)
    {
        for(j = 0;j < c;j++)
        {
            scanf("%d",&max[i][j]);
        }
    }

    printf("\nEnter the available resources ");
    for(i = 0;i<c;i++)
        scanf("%d",&available[i]);

    printf("\nNeed resource matrix is: \n");
    for(i = 0;i < p;i++)
    {
        for(j = 0;j < c;j++)
        {
            need[i][j] = max[i][j]-alc[i][j];
            printf("%d\t",need[i][j]); 
        }
        printf("\n");
    }

    for(i = 0;i < p;i++)
    {
        done[i] = 0;
    }

    while(count<p)
    {
        for(i = 0;i<p;i++)
        {
            if(done[i] == 0)
            {
                for(j = 0;j<c;j++)
                {
                    if(need[i][j] > available[j])
                        break;
                }
                if(j==c)
                {
                    safe[count] = i;
                    done[i] =1;
                    for(j=0;j<c;j++)
                    {
                        available[j]+=alc[i][j];
                    }
                    count++;
                    terminate = 0;
                }
                else
                {
                    terminate++;
                }
            }
        }
        if(terminate == (p-1))
        {
            printf("SAFE SEQUENCE DOES NOT EXIST");
            break;
        }
    }

    if(terminate != (p-1))
    {
        printf("\nAvailabe resources after compilation\n");
        for(i = 0;i<c;i++)
        {
            printf("%d\t",available[i]);
        }
        printf("\nSafe sequence are\n");
        for(i = 0;i<p;i++)
        {
            printf("p%d\t",safe[i]);
        }
    }
    return 0;
}