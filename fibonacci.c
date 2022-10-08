#include<stdio.h>

void fibonacci(int n)
{
int a,b,new;
a=0;
b=1;
printf("\nThe fibonacci sequence: %d, %d, ",a,b);
for(int i=0;i<n-2;i++)
{
new=a+b;
a=b;
b=new;
printf("%d ,",b);
}
}

int main()
{
int n;
printf("\nEnter the no. of terms: "):
scanf("%d",&n);
fibonacci(n);
return 0;
}

