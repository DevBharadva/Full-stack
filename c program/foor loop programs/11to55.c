#include <stdio.h>

int main()
{
	int i,j,k=11;
	
	for(i=0;i<=5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d\t",k++);
			
		}
		k+=5;
		printf("\n");
	}
return 0;
}