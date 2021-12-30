#include<stdio.h>
int main()
{
int array[50],i,j,n,p,t;

printf("enter size of array");
scanf("%d",&n);

printf("enter the elements of array");
for(i=0;i<n;i++)
scanf("%d",&array[i]);
printf("\n");

printf("entered elements are ");  //element printing
    for(i=0;i<n;i++)
        printf(" %d",array[i]);

printf("\n");

for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(array[i]<array[j])
{
t=array[i];
array[i]=array[j];
array[j]=t;

}
}
}

for(i=0;i<n;i++)
{
printf("\n");
}
printf("second large number is : %d",array[1]);
printf("\n");

printf("second smallest number is : %d",array[n-2]);
return 0;

}
