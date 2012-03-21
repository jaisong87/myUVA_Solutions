#include<stdio.h>
#include<string>
#include<iostream>
#define MAX 15
using namespace std;

int main()
{
int p[MAX],n,i,j,k,temp,temp_k;
long m[MAX][MAX];
string best[MAX][MAX];
int count=0;

while(scanf("%d",&n)!=EOF)
         {
	 if(n==0) break;
	 count++;
	 cout<<"Case "<<count<<": ";
         scanf("%d",&p[0]);
         for(i=1;i<n;i++) scanf("%d %d",&p[i],&p[i]);
         scanf("%d",&p[n]);
         
	if(n==1) cout<<"(A1)"<<endl;
	else 
		{                  
         //for(i=0;i<=n;i++) printf("%d ",p[i]); printf("\n");  
         for(i=n;i>0;i--)
              for(j=i;j<=n;j++)
                     {
                 if(i==j) 
 			{ m[i][j]=0;
			best[i][j]="A";
			if(i<10) best[i][j]+=('0'+i);	
			else {
                 best[i][j]+=('0'+(i/10)); best[i][j]+=('0'+(i%10)); 
                 }
            
            }
                 else {
                     k=i;  temp_k=i;        
                     m[i][j]=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];                     
                     while(k<j) {  
                                temp=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
                                if(temp<m[i][j]) 
						{
						m[i][j]=temp;
						temp_k=k;
						}
				k++;
				}
				best[i][j]=("("+best[i][temp_k]+" x "+best[temp_k+1][j]+")"); 
			}     
                     }        
        /*
	printf("Result\n");
	for(i=n;i>0;i--)
		{
		for(j=i;j<=n;j++)
			printf("%d ",m[i][j]);
		printf("\n");
		} 
	*/
	cout<<best[1][n]<<endl;
		}
	}

return 0;
}



