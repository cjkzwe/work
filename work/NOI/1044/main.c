#include <stdio.h>
#include <math.h>
int main()
{
    int m,n;
    long list[100001];
    long snums[10000];
    long min=0;
    int i,j;
    long cha;


    scanf("%d",&n);
    for(i=0; i<n-1; i++)
        scanf("%ld ",&list[i]);
    scanf("%ld",&list[n-1]);
   

    
    scanf("%ld",&m);
    for(i=0; i<m-1; i++)// = i<=m-2
        scanf("%ld ",&snums[i]);
    scanf("%ld",&snums[m-1]);



    min=list[0];
    for(j=0; j<m; j++)
    {
        for(i=0; i<n; i++)
        {
            cha = list[i] - snums[j];
            if( (cha >= 0 ? cha : 0-cha ) < min )//绝对值=距离
                min = (cha >= 0 ? cha : 0-cha);//求最小
        }
        printf("%ld\n", snums[j] + cha);//cha = list[i] - snms[j] so cha + snums[j] = list[i] +cha可正可负，正的是+2，负的是-2
    }
	return 0;
}
