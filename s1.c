#include<stdio.h>
void main()
{
	int n;
	int c=1;
	int sum=0;
	printf("Enter a number");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=c;j++)
		{
			sum+=j;
		}
		c++;
	}
	printf("/n Sum=%d",sum);
} 
	
