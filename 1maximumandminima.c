#include<stdio.h>
int main()
{
    int a[10],i,n=5,min,max;
    printf("enter elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];

    for(i=0;i<n;i++)
    {

    if(a[i]>max)
    {
        max=a[i];
    }

    if (a[i]<max)
    {
        min=a[i];
    }
}

     printf("minimum is %d\n",min);

 printf("maximum is %d\n",max);
return 0;
}
