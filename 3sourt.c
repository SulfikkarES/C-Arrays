#include<stdio.h>
int main()
{
    int a[5],i,j,k,n=4;

    printf("enter array element");  //element collection
    for(i=0;i<n;i++)
    {
   scanf("%d",&a[i]);
    }
printf("entered elements are ");  //element printing
    for(i=0;i<n;i++)
        printf(" %d",a[i]);

    for(i=0;i<n;i++) //sorting
   {

    for(j=i+1;j<n;j++)
    if (a[i] > a[j])
    {
    k=a[i];
    a[i]=a[j];
    a[j]=k;}
}
printf("\n");
printf("Sorted result is :");

for(i=0;i<n;i++)  //for print each values of i,loop is here
printf("%d ",a[i]);
return 0;
}
