#include<stdio.h>
int  main()
{
    char c[50];
    int i,n,k;
    scanf("%s%d",c,&k);
    for(i=0;i<k;i++)
    {
        if(c[i]=='9')
            k++;
        c[i]='9';
    }
        printf("%s",c);
}
