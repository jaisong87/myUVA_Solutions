#include<stdio.h>
#define MAX 23
#define max(a,b) ((a>b)?a:b)

int main()
{
int cases,i,j;
int s1[MAX],s2[MAX],n,LCS[MAX][MAX];
char str[200];
scanf("%d",&n);
printf("Original order:");
for(i=0;i<n;i++) { scanf("%d",&s1[i]); printf("%d ",s1[i]); }
printf("\n");

while(gets(str)!=NULL)
	{
	printf("%s\n",str);
	
	i=0; while( (i<n) && (sscanf(str,"%d",&s2[i])==1) ) i++;
 
	for(i=0;i<n;i++) { printf("%d ",s2[i]); LCS[i][0]=LCS[0][i]=0;  }

	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			{
			if(s1[i-1]==s2[j-1]) LCS[i][j]=1+LCS[i-1][j-1];
			else LCS[i][j]=max(LCS[i-1][j],LCS[i][j-1]);		
			}
printf(":: LCS=%d\n",LCS[n][n]);
	}

return 0;
}

