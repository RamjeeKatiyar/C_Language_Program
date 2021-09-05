//2.write a program to find difference of array as compared to variable
#include<stdio.h>
int main()
{
int a[10],i,j,t;
printf("Enter 10 Integer Number:\n");
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
printf("DIFFERENCE OF LARGEST AND SMALLEST ELEMENT=%d",(a[0]-a[9]));
return 0;
}
