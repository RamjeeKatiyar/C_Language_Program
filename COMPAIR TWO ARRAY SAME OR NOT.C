#include<stdio.h>
int main()
{
int a[5],b[5],c[5],i;
printf("ENTER THE ELEMENT OF FIRST ARRAY:\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("ENTER THE ELEMENT OF SECOND ARRAY:\n");
for(i=0;i<5;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<5;i++)
if(a[i]!=b[i])
break;
if(i==5)
printf("FIRST AND SECOND ARRAY IS SAME");
else
printf("FIRST AND SECOND ARRAY IS NOT SAME");
return 0;
}
