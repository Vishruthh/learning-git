#include<stdio.h>

int facto(int n)
{
int res=1;
for(int i=1;i<=n;i++)
{
res=res*i;
}
return res;
}

int main()
{
int n;
printf("\nEnter the number: ");
scanf("%d",&n);
printf("\nThe result is: %d",facto(n));
return 0;
}
