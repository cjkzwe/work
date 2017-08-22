#include <stdio.h>
int main()
{
    int i,j,k,n;
    int num[100]={0};
    int min;
    int t;
    scanf("%d",&n);
    for(i=0;i<=n-2;i++)
        scanf("%d ",&num[i]);
    scanf("%d",&num[n-1]);

    printf("\n\n\n\n");


    min = num[0];

    for(i=0; i<=n-1; i++)
    {
        k = i;
        for(j=n-1; j>=i+1; j--)

            if(num[j]<num[k])
                k=j;
        if(i!=k)
        {
            t = num[i];
            num[i] = num[k];
            num[k]=t;
        }

    }


    for(i=0;i<=n-1;i++)
        printf("%d ",num[i]);


    return 0;
}
