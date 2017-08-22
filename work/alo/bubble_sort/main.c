#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int flag,t,i;
    scanf("%d",&n);
    int num[n];
    for(i=0;i<=n-2;i++)
        scanf("%d ",&num[i]);
    scanf("%d",&num[n-1]);
    while(flag != 0)
    {
        flag=0;
        for(i=0;i<=n-1;i++)
        
            if(num[i]>num[i+1])
            {
                t=num[i];
                num[i]=num[i+1];
                num[i+1]=t;
                flag=1;
            }

    }
    for(i=0;i<=n-1;i++)
        printf("%d ",num[i]);
	return 0;
}
