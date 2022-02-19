#include <stdio.h>
int main()
{
int i, n=10, a[n];
for(i=0;i<n;++i)
scanf("%d",&a[i]) ;
for(i=0;i<n;++i)
{
printf("%d\n",a[i]) ;
}
for(i=n-1;i>=0;--i)
{
printf("%d\n", a[i]) ;
}
}
