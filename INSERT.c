#include<stdio.h>
int main()
{
int i,p,n,num;
printf("ENTER THE SIZE OF ARRAY:");
scanf("%d",&n);
int a[n];
printf("Enter the element:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf(" Enter position number and element");
scanf("%d%d",&p,&num);
for(i=n;i>=p;i--)
{
a[i]=a[i-1];
}
a[p-1]=num;
for(i=0;i<=n;i++)
printf("%d ",a[i]);
return 0;
}
