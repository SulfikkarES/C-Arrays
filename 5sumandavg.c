#include<stdio.h>
int main()
{
    int a[5],i,sum,n=4,average;

    printf("enter array element");  //element collection
    for(i=0;i<n;i++)
    {
   scanf("%d",&a[i]);
    }
printf("entered elements are ");  //element printing
    for(i=0;i<n;i++)
        printf(" %d",a[i]);

         for(i=0;i<n;i++)  //sum calculation
            {
                sum += a[i]; // total+a[i]

        }
        average =sum/n;

         printf("\n");
         printf("sum is %d",sum);

           printf("\n");
         printf("Average is %d",average);
         return 0;
}
