#include<stdio.h>
void main()
{
int a[3][3],i,j,sum=0;
printf("ENTER THE ELEMENT IS MATRIX:\n");
{
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);
}
printf("ELEMENT IN MATRIX FORM:");
{
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{
printf("%d",a[i][j]);
printf("\n");
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
sum=sum+a[i][j];
}
printf("Sum of  the matrix element=%d",sum);
}
