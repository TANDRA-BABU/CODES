#include<stdio.h>
int power(int p,int m); //a number that is equal to the sum of cubes of its digits ex:153,370,371,407
int main()
{
    int n, i,j, p, m=0, sum=0;
    printf("Enter a number to check whether it is armstrong number or not: ");
    scanf("%d",&n);
    i=n;
    j=n;
    while(i>0)
    {
        m++;
        i/=10;
    }
    while(j>0)
    {
        p=j%10;
        sum+= power(p,m);
        j/=10;
    }
    if(sum==n)
    {
        printf("%d is a Armstrong Number.",n);
    }
    else
    {
        printf("%d is not a Armstrong Number.",n);
    }
    return 0;
}
int power(int p,int m)
{
    int pow=1;
    for(int i=0;i<m;i++)
    {
        pow*=p;
    }
    return pow;
}