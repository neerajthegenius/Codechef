#include <stdio.h>
#include <string.h>
 
#define MAX 1001
 
 
int main(void) {

long int n,k,a[MAX]={0},x,cnt=0;
int i,j;
char ch[50];
scanf("%ld%ld",&n,&k);
for(i=0;i<k;i++)
{
scanf("%s",ch);
if(strcmp(ch,"CLICK")==0)
{
scanf("%ld",&x);
if(a[x]==0)
{
a[x]=1;
++cnt;
}
else
{	
a[x]=0;
--cnt;
}
}
else
{
for(j=0;j<MAX;j++)
{
if(a[j]==1)
a[j]=0;
}
cnt=0;
}
printf("%ld\n",cnt);
}
return 0;
}