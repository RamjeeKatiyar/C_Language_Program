#include<stdio.h>
int main(){
int i,n,k,j;
printf("Enter the size:");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
for(j=i+1;j<n;j++){
if(a[i]==a[j])
{
for(k=j+1;k<n;k++)
a[k-1]=a[k];
j--;
n--;
}
}
for(i=0;i<n;i++)
printf("  %d",a[i]);
return 0;
}
 

