#include<stdio.h>
void main()
{
int b[100],n,i=0,j;
printf("Enter a decimal number:\n");
scanf("%d",&n);
//i = 0;
while(n>0)
{
  b[i] = n%2;
    n  = n/2;
    i++;
}
for(j = i-1;j>=0;j-- )
{
printf("%d",b[j]);
}
 }
