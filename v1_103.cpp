#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;

int main()
{
int k,n,temp;
while(cin>>k>>n)
           {
		vector<int> box[30];
		vector<int> t;
                int ipos[30];
		for(int i=0;i<30;i++) ipos[i]=i;                   

	for(int i=0;i<k;i++)
    		    { 
    	            for(int j=0;j<n;j++)
                	 {
           	     	  cin>>temp; 
                	  box[i].push_back(temp);
                 	  }
     		    sort(box[i].begin(),box[i].end());
     		    } 
               
              for(int a=0;a<k;a++)
                          {
                       for(int b=a+1;b<k;b++)
                          if(box[b][0]<box[a][0]) { t=box[b]; box[b]=box[a]; box[a]=t; 
						    temp=ipos[b]; ipos[b]=ipos[a]; ipos[a]=temp;
						   }
			  }
                 int len[30],prev[30];
              for(int a=0;a<30;a++) {  len[a]=1; prev[a]=-1; }		

              for(int a=1;a<k;a++)                    
                        {
			for(int b=0;b<a;b++)
                               {
				int c=0;
			      for(c=0;(c<n)&&(box[b][c]<box[a][c]);c++);
				if((c==n)&&( (1+len[b])>len[a])) { len[a]=1+len[b]; prev[a]=b; }	
				}			
			}
           int maxlen=len[0],top=0;
             for(int i=1;i<k;i++)
                      if(len[i]>=maxlen) { maxlen=len[i]; top=i; }
              
		vector<int> seq;
               while(top>=0)
			{
                       seq.push_back(ipos[top]);
                       top=prev[top];
			}  

                cout<<maxlen<<endl;
		int z=seq.size();
		for(int h=z-1;h>0;h--) cout<<1+seq[h]<<" ";
		if(z) cout<<1+seq[0]<<endl;

             }
return 0;
}