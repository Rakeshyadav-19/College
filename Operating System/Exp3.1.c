// Write a C program to implement First Come First Serve (FCFS) scheduling algorithm.

#include <stdio.h>

void main()
{
    int n,i,bt[100],wt=0,tat=0;
    float avg_wt,avg_tat;

    printf(&quot;Enter number of processes: &quot;);
    scanf(&quot;%d&quot;,&amp;n);
    for(i=0;i&lt;n;i++)
    {
        printf(&quot;Enter the burst time of process[%d]&quot;,i+1);
        scanf(&quot;%d&quot;,&amp;bt[i]);
    }

    printf(&quot;\nPid\t\tBT\t\t WT\t\t TAT&quot;);

    for(i=0;i&lt;n;i++)
    {
        tat=bt[i]+wt;
        printf(&quot;\n%d\t\t%d\t\t%d\t\t%d&quot;),i+1,bt[i],wt tat);

        avg_wt=avg_wt+wt;
        avg_tat=avg_tat+tat;
        wt=wt+bt[i];
    }
        avg_wt=avg_wt/n;
        avg_tat=avg_tat/n;

    printf(&quot;\nAverage waiting time is : %f&quot;,avg_wt);
    printf(&quot;\nAverage turn around time is : %f&quot;,avg_tat);
}