

    #include<stdio.h>
    #include<math.h>

    double area(double x1,double y1,double x2,double y2,double x3,double y3)
    {
    double a,b,c,s,ar;
    a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    b=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    c=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    s=(a+b+c)/2;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
    return ar;
    }
    int max(double a[],int n)
    {
    int i,al=0,b;
    double max=a[0];
    for(i=0;i<n;i++)
    {
    if(max<=a[i])
    {
    al=1;
    max=a[i];
    b=i;
    }
    }
    if(a!=0)
    return b+1;
    else
    return 1;
    }
    int min(double a[],int n)
    {
    int i,al=0,b;
    double min=a[0] ;
    for(i=0;i<n;i++)
    {
    if(min>=a[i])
    {
    al=1;
    min=a[i];
    b=i;
    }
    }
    if(al!=0)
    return b+1;
    else
    return 1;
    }

    int main()
    {
    int n,x1,x2,i,x3,y1,y2,y3,t,c,d;
    double a[100],ab;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
    a[i]=area(x1,y1,x2,y2,x3,y3);


    }
    c=max(a,n);
    d=min(a,n);
    printf("%d %d\n",d,c);

    return 0;
    }


