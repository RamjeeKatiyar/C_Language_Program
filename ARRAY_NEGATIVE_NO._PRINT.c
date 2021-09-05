#include<stdio.h>
void main()
{
int a[5],i,j=0,c=0;
printf("Enter The Number:\n");
for(i=0;i<5;i++){
scanf("%d",&a[i]);}
for(i=0;i<5;i++){
if(a[i]<0){
a[j]=a[i];
j++;
}
}
printf("NEGATIVE NUMBER IS:\n");
for(i=0;i<j;i++)
printf(" %d",a[i]);
}
