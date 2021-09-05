#include<stdio.h>
void main()
{
int a[10],i,j,t;
printf("Enter 10 number:\n");
for(i=0;i<=9;i++)
scanf("%d",&a[i]);
for(i=0;i<=9;i++)
for(j=0;j<=9;j++)
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
printf("Gretest number is=%d",a[0]);
}
