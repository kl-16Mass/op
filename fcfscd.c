#include<stdio.h>
void main()
{
     
int track[20],n,head,i,s=0;
float avg;

printf("\n Enter the number of tracks: ");
scanf("%d",&n);

printf("\nEnter the tracks:");

for(i=1;i<=n;i++)
{
     scanf("%d",&track[i]);
}
printf("\nEnter the initial head position:");
scanf("%d",&head);

track[0]=head;

printf("\nTrack\t\tHead movement");

for(i=0;i<n;i++)
{
    track[i]=(track[i+1]-track[i]);
    if(track[i]>0)
    {
 
        track[i] *= (-1);  
    }

printf("\n%d\t\t%d",track[i+1],track[i]);

s += track[i];
}

printf("\nTotal head movement:%d",s);

avg = s / (float)n;

printf("\nAverage head movement:%d",avg);
}
