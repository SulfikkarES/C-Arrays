#include<stdio.h>
int main()
{

    int matrix[10][10],amatrix[10][10];
    int i,j,m,n;
    printf("enter number of rows");
    scanf("%d",&m);
   printf("enter number of columns");
    scanf("%d",&n);

    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
               {
                   printf("Enter elements :");
                   scanf("%d",&matrix[i][j]);

                }

 printf("\n");
        }


printf("elements of matrix is :");
    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                {
                    printf(" %d\t",matrix[i][j]);
                }
    printf("\n");
        }

printf("Sum of matrix is:");
    int sum=0;
    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                {
                    sum = sum+matrix[i][j];


                }

    printf("\n");
        }
printf("  %d ",sum); // sum elements


printf("\n");
printf("\n");


    for(i=0;i<n;i++)
    {

        int row_sum=0;
        int column_sum=0;

            for(j=0;j<m;j++)
                {

                    row_sum += matrix[i][j];
                    column_sum += matrix[j][i];
                }
        printf("\n  sum of row %d is :%d ",i+1,row_sum);
        printf("\n  sum of column %d is :%d  ",i+1,column_sum);

    } //row sum and column sum

printf("\n");
printf("\n");
for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                {
                    amatrix[j][i]=matrix[j][i];

                }
        }
printf(" Transpose of matrix is  \n");
      for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                {
                    matrix[i][j]=matrix[j][i];
                    printf("\t %d ",amatrix[j][i]);
                }
    printf("\n");
        }


return 0;
}
