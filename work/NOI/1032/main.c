#include <stdio.h>
#include <math.h>
void printnumto(int num);
int main()
{
    int n=5,i,j,sums;
    int jn=2*n+1;
    sums=jn/2+1;
    for(i=1;i<jn;i+=2)
    {
        if(sums < 0)
            sums=0;
        for(j=0;j<=sums;j++)
            printf(" ");
        printnumto(i);
        sums--;
        printf("\n");
    }
    sums=0;
    for(i=jn;i>0;i-=2)
    {
        if(sums > jn/2+1)
            sums=jn/2+1;
        for(j=0;j<=sums;j++)
            printf(" ");
        printnumto(i);
        sums++;
        printf("\n");
    }
	return 0;
}
void printnumto(int num)
{
    int i;
    for(i=1;i<=num;i++)
        printf("%d",i);
}
