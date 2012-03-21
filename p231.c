#include<stdio.h>
#define MAX 2000

int main()
{
int n,i,j;
int arr[MAX],height[MAX],best,count=0;

n=0;

while(scanf("%d",&arr[n])!=EOF)
	{
	if(arr[n]==-1)
		{
		//printf("N is %d\n",n);
		if(n==0) break;
		count++;
		best=1;
		if(count>1) printf("\n");
		for(i=0;i<n;i++) { height[i]=1;
			           //printf("%d ",arr[i]);	
				 }
		//printf("\n");
		
		
		for(i=0;i<n;i++)
			for(j=i+1;j<n;j++)
				{
				if( (height[j]<=height[i]) &&  (arr[j]<=arr[i]) ) height[j]=1+height[i];
				if(height[j]>best) best=height[j];
				}		
	
		printf("Test #%d:\n  maximum possible interceptions: %d\n",count,best);
		//for(i=0;i<n;i++) printf("%d ",height[i]);
		//printf("\n");
		n=0;
		}
	else n++;	
	}

return 0;
}

