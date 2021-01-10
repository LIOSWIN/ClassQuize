#include<stdio.h>
int main()
{
    int i,n,t1 =0,t2 =1,nextTerm = 0;
    printf("Enter a positive number,");
    scanf("%d",&n);
   //displays the first two numbers which are 0 and 1
   printf("Fibonacci series:%d, %d, ",t1,t2);
   nextTerm = t1 + t2;

    while(nextTerm <= n){
        printf("%d, ",nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 +t2;
    }
    return 0;
}
