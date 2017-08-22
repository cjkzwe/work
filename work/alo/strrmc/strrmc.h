extern char *strrmc(char *dst,char ch)
{
    int i,j;
    i=0;
    while(dst[i++] != 0)
    {
        if(dst[i] == ch)
        {
            j=i;
            while(dst[j] != 0)
            {
                dst[j]=dst[j+1];
                j++;
            }

        }
    }
    dst[i-1]='\0';
    return dst;
}
