#include <stdio.h>
int main()
{
    int i,j; 
    int book[13]={0};
    int nums[25];
    for(i=0;i<=24;i++)
        scanf("%d ",&nums[i]);
    scanf("%d",&nums[24]);
    for(i=0;i<=24;i++)
        book[nums[i]]++;
    for(i=0;i<=12;i++)
        if(nums[i]==1)
            printf("%d",nums[i]);
    return 0;
}

