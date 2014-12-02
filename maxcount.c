#include <stdio.h>
 
int main(void)
{
int t,b,pos,max,i,n;
scanf("%d",&t);
while(t--)
{
max=0;
int a[10001]={0};
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&b);
a[b]++;
if(a[b]>max)
{
max=a[b];
pos=b;
}
if(a[b]==max&&b<pos)
pos=b;
}
printf("%d %d\n",pos,max);
}
return 0;
}