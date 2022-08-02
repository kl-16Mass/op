#include <stdio.h>
int main()
{
int bt[20],wt[20],tat[20],i,j,n,tmp,p[20];
float wtavg,tatavg;
printf("\nEnter the number of processes--");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("Enter the BURST TIME for process %d--",i);
    p[i]=i;
    scanf("%d",&bt[i]);
}
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
         if(bt[i]>bt[j])
         {
           tmp=bt[j];
           bt[j]=bt[i];
           bt[i]=tmp;
           tmp=p[j];
           p[j]=p[i];
           p[i]=tmp;
           
         }
       }
    }
        wt[0]= wtavg =0;
        tat[0]=tatavg=bt[0]; 
        for(i=1;i<n;i++)
{
    wt[i]=wt[i-1]+bt[i-1];
    tat[i]=tat[i-1]+bt[i];
    wtavg=wtavg+wt[i];
    tatavg=tatavg+tat[i];
}
           printf("\t\t\t\tPROCESS\t\tBURST TIME\tWAITING TIME\tTURNAROUND TIME\n"); 
           for(i=0;i<n;i++)
           printf("\n\t\t\tp%d\t\t%d\t\t%d\t\t%d",p[i],bt[i],wt[i],tat[i]);
           printf("\nAverage Waiting time --%fms",wtavg/n);
           printf("\nAverage Turnaround time --%fms",tatavg/n);
}   
