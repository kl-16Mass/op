#include<stdio.h>
void sort (int d[],int n)
{
  int temp,small,i,j;
  for(i=0;i<n-1;i++)
  { small=i;
    for(j=i+1;j<n;j++)
    {if(d[small]>d[j])
    {small=j;}
    }
    temp=d[small];
    d[small]=d[i];
    d[i]=temp;
   }
 }
 int fhp(int d[],int p,int q,int head)
 {int mid=(p+q)/2;
 if(d[mid]==head)
 { return mid;}
 else if(d[mid]<head)
 { return fhp(d,mid+1,q,head);
 }else
 {return fhp(d,p,mid-1,head);
 }}
 void scan(int A[],int p,int q,int pos)
 {
 int i;
 printf("\torder of scan::::\n");
 if((A[pos]-A[pos-1])<(A[pos+1]-A[pos]))
{
for(i=pos;i>=p;i--)
{
printf("\t%d\t",A[i]);
}
printf("0");
for(i=pos+1;i<=q;i++)
{
printf("\t%d\t",A[i]);}
//printf("200");
}
else
{
for(i=pos;i<=q;i++)

{printf("\t%d\t",A[i]);}
printf("200");
for(i=pos-1;i>=q;i--)
{
printf("\t%d\t",A[i]);
}
//printf("0"); 
}}
void main()
{
int head,d[20],n,i,pos;
printf("\tEnter no.of head positions-- ");
scanf("%d",&n);
printf("Enter the head ---\t");
scanf("%d",&head);
d[0]=head;
for(i=1;i<=n;i++)
{
printf("\nEnter the position --- ");
scanf("%d",&d[i]);
}
sort(d,n+1);
pos=fhp(d,0,n+1,head);
scan(d,0,n,pos);
}
