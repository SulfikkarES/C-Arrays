#include<stdio.h>
int main()
{

int a[5],i,n=5;
    printf("enter array element");  //element collection
    for(i=0;i<n;i++)
    {
   scanf("%d",&a[i]);
    }
printf("entered elements are ");  //element printing
    for(i=0;i<n;i++)
  {

     printf(" %d",a[i]);}
printf("\n");
     printf("Alternative elements are ");  //element printing
    for(i=0;i<n;i+=2)
  {

     printf(" %d",a[i]);}

        return 0;
}
