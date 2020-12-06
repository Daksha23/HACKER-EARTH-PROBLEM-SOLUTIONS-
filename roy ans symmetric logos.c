
#include<stdio.h>
int main()
{
  int i,j,k,n,c,x,t,s;
  scanf("%d",&t);
  for(x=0;x<t;x++)
  {
    s=0;
    scanf("%d",&n);
    char a[n][n];
    getchar();
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
        scanf("%c",&a[i][j]);
        getchar();
    }
    for(i=0;i<n;i++)
    {
      c=1;
      for(j=0,k=n-1;c<=n/2;j++,k--)
      {
        c++;
        if(a[i][j]==a[i][k] && a[j][i]==a[k][i])
          s++;
      }
    }
    if(s==n/2*n)
      printf("YES\n");
    else
      printf("NO\n");
  }
}
