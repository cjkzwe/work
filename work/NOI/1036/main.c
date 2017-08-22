#include <stdio.h>
#include <math.h>
int main()
{
    int num,shang,yu;
    shang=-1;
    scanf("%d",&num);
    while(shang!=0)
    {
        yu = num%2;
        num = shang = num/2;
        printf("shang:%d yu:%d",shang,yu);
        printf("\n");
    }
	return 0;
}
