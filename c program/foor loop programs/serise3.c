#include <stdio.h>
int main()
{
		int i,j,n=0;
		printf("enter the i value");
		scanf("%d",&i);
		
		for(j=1;j<=i;j++)
		{
			if(j%2==0)
			{
					printf("%d ,",(j*j));
				
			}
			else{
					printf("%d",j);
				
			}
			printf("\t");
			
		}
return 0;
}