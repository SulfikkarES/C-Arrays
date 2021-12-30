#include<stdio.h>
int main()
{
int matrix1[10][10],matrix2[10][10],mul[10][10],row,column,i,j,k;

printf("enter the number of row:");
scanf("%d",&row);
printf("enter the number of columns");
scanf("%d",&column);

printf("enter the element of first matrix\n");
for(i=0;i<row;i++)
{
for(j=0;j<column;j++)
{
scanf("%d",&matrix1[i][j]);
}
}

printf("enter element of second matrix\n");
for(i=0;i<row;i++)
{
for(j=0;j<column;j++)
{
scanf("%d",&matrix2[i][j]);
}
}


printf("multiplication of these two matrixs\n");

for(i=0;i<row;i++)
{
for(j=0;j<column;j++)
{
mul[i][j]=0;
for(k=0;k<column;k++)
{
mul[i][j]+=matrix1[i][k]*matrix2[k][j];
}
}
}

for(i=0;i<row;i++)    //result printing
{
for(j=0;j<column;j++)
{
printf("%d\t",mul[i][j]);
}
printf("\n");
}
return 0;
}
