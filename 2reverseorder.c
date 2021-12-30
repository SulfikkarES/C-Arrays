#include<stdio.h>
int main()
{
    int a[10],n=5;
    int i;

    printf("enter elements");  //element collection
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }


    printf("original form is :%d",a[i]);  //printing of elements
        for(i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    }
    printf("\n");


    printf("reverse order is :");
    for(i=(n-1);i>=0;i--)         //reverse order format , a{n}=n-1 th positions i= n-1
    {
    printf("%d ",a[i]);
    }
    printf("\n");


return 0;
}
