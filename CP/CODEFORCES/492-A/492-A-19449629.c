#include<stdio.h>
int main(){int s=0,a,i,j;
scanf("%d",&a);
for(i=1,j=1;a>=i;i+=++j)a-=i;
printf("%d",j-1);}