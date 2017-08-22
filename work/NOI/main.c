#include <stdio.h>
#include <math.h>
int main()
{
    int nums[26];
    int snum;
    int i,j,k;
    int flag=0;
    k=0;
    for(i=0;i<24;i++)
        scanf("%d ",&nums[i]);
    scanf("%d",&nums[24]);
    for(i=1;i<25;i++)
    {    
        snum=nums[k];
        for(j=i;j<25;j++)
        {
            if(nums[j]=snum && nums[j] != -1)
                {nums[j]=-1;flag=1;}
        }
        if(flag == 0)
            {printf("%d",snum);break;}
        k++;
    }
	return 0;
}
