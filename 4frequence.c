#include<stdio.h>
int main()
{
    int a[5],i,p,frequecy,n=8,frequency=1;

    printf("enter array element");  //element collection
    for(i=0;i<n;i++)
    {
   scanf("%d",&a[i]);
    }
    printf("entered elements are ");  //element printing
    for(i=0;i<n;i++)
        printf(" %d",a[i]);
    printf("\n");
    printf("enter element to detect how many times repeated :");
    scanf("%d",&p);
    printf("\n");

    printf("entered element is is %d",p);  //to select repeating element
    printf("\n");

    if (a[i]==p)
    {
frequency=frequency+1;
    }

printf("\n");
printf("frequency of array is %d ",frequency);


return 0;
}
