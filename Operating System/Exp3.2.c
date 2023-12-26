//Write a C program to implement Shortest Job First (SJF) scheduling algorithm.

#include <stdio.h>

void main()
{
    int n,bt[100],wt=0,tat=0;
    int i,j,temp;
    float avg_wt,avg_tat,awt=0,atat=0;
    
    printf("Enter number of processes: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter the burst time of process[%d]",i+1);
        scanf("%d",&bt[i]);
    }
       
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(bt[i]<bt[j])
            {
                temp=bt[i];
                bt[i]=bt[j];
                bt[j]=temp;
            }
        }
    }
            
    printf("\nPid\t\tBT\t\tWT\t\tTAT");
    
    for(i=0;i<n;i++)
    {
        tat=bt[i]+wt;
        printf("\n%d\t\t%d\t\t%d\t\t%d",i+1,bt[i],wt,tat);
        awt=awt+wt;
        atat=atat+tat;
        wt=wt+bt[i];
    } 
        
    avg_wt=awt/n;
    avg_tat=atat/n;
    printf("\nAverage waiting time is : %f",avg_wt);
    printf("\nAverage turn around time is : %f\n",avg_tat);
   
}