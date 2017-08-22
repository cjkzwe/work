#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int monkey[n+1];
    int i,j;
    int fail;
    int count;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d ",&monkey[i]);
    scanf("%d",&monkey[n]);
    fail=0;
    count = 1;
    j=1;
    while(fail != n-1)
    {
        j++;
        if(monkey[j] != -1 && count == 3)
        {
            monkey[j]=-1;
            fail++;
            count=1;
        }
        if(count==3)
            count=1;
        if(j==n)
            j=1;
        count++;
    }
    for(i=0;i<=n;i++)

        if(monkey[i]!=-1)
            printf("%d",n);
	return 0;
}
