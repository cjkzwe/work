#include <stdio.h>
#include <math.h>
int main()
{
    long sum=1,n;
    scanf("%ld",&n);
    while(n!=1)
    {
        sum++;
        if(n%2==0)
            n/=2;
        else
            {n*=3;n++;}
    }
    printf("%ld",sum);
	return 0;
}
