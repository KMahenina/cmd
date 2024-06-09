#include <stdlib.h>
#include <stdio.h>

int fact(int n)
{
	int i=1;
	int f=1;
	
	while(i<=n)
	{
		f=f*i;
		i++;
	}	
	return f;
}

int main()
{
	int i,j,n,c=1;
	printf("entrer n:");
		scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=i;j++)
		{
			c=fact(i)/(fact(i-j)*fact(j));
			printf("%d",c);
		}
	printf("\n");}
}
