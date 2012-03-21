#include<iostream>
#define MAX 10
using namespace std;

int main()
{
int count,n,i,j,k,l,flag;
char mines[MAX][MAX],ch,mine2[MAX][MAX];

cin>>count;

while(count>0)
		{
		count--;
		cin>>n;
		flag=0;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				mines[i][j]=0;

		//cout<<"Input:\n";
		for(i=0;i<n;i++)
				{
				
			for(j=0;j<n;j++)
				{
				cin>>ch; //cout<<ch; 
				if(ch=='*')
					{
					for(k=-1;k<=1;k++)
						for(l=-1;l<=1;l++)
							{
			if( ((i+k)>=0) && ((i+k)<n) &&  ((j+l)>=0) && ((j+l)<n) && mines[i+k][j+l]!='*')		
										mines[i+k][j+l]++;
							}	
					mines[i][j]='*';
					}
				   }
				}
		//cout<<"Output:\n";
		flag=0;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				{
				cin>>mine2[i][j];
				if(mine2[i][j]=='x' && mines[i][j]== '*' ) flag=1; 
				}
	   if(flag==0)
		    {
		for(i=0;i<n;i++)
			{
			for(j=0;j<n;j++)
				{
			 if(mine2[i][j]=='x')  if(mines[i][j]=='*') cout<<'*';
						else cout<<int(mines[i][j]);
			 else cout<<'.';		
				}
			cout<<endl;
			}	
		    }
		else
			{
			for(i=0;i<n;i++)
				{
				for(j=0;j<n;j++)
					if(mines[i][j]=='*') cout<<'*';
				        else if(mine2[i][j]=='x') cout<<int(mines[i][j]);
					else cout<<'.';
						     	
				cout<<endl;   
				}	
			}
		if(count>0) cout<<endl;
		}
return 0;
}

