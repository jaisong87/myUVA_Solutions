#include<stdio.h>
#define MAX 1501

int main()
{
int arr[MAX];
int n,i,j,swaps;

while(scanf("%d",&n)!=EOF)
	{
 //arr=malloc(n*sizeof(int));	

 for(i=0;i<n;i++) scanf("%d",&arr[i]);

 swaps=0;
 for(i=0;i<n-1;i++)
	for(j=i+1;j<n;j++)
		if(arr[j]<arr[i]) 
				{	
				//arr[j]^=arr[i]^=arr[j]^=arr[i];
				 swaps++;
				}
 printf("Minimum exchange operations : %d\n",swaps);
 //free(arr);
	}

return 0;
}

