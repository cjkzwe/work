#include <stdio.h>
#include <math.h>
int main()
{
    int m,n,r;
    scanf("%d %d",&m,&n);
    while(m != 0 && n!=0)
    {
        if(m == n)
        {
            m-=n;
            break;
        }
        if(m>n)
            m-=n;
        if(m<n)
            n-=m;
    }
    if(m == 0 && n == 1 || m == 1 && n == 0)
        printf("Yes");
    else
        printf("No");
	return 0;
}
