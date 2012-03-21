#include<iostream>
#include<vector>
using namespace std;

void permut(vector<int> v,vector<int> v1,bool &line)
{ 
int z=v.size();     
int z1=v1.size();
    if(z1>=6)  
               {
		if(line==true)  cout<<endl; 
               for(int i=0;i<5;i++)
                       cout<<v[v1[i]]<<" ";
                       cout<<v[v1[5]];     
			line=true;
                    }
    else {
int flag=0;
for(int i=0;i<z;i++)
 {
        
 flag=0;
 for(int j=0;j<z1;j++)
     if(v1[j]==i) flag=1;
     
     if( (flag==0) && (z1==0|| (v1[z1-1]<i) )) { vector<int> v2=v1; v2.push_back(i); permut(v,v2,line); }
 }
         }
return;
}

int main()
{
 int count=0;
 int k,n;
 while(cin>>k)
              {
               if(count>0) cout<<endl;           
              if(k==0) break;
              else if(count>0) cout<<endl;
              vector<int> v;
              for(int i=0;i<k;i++)
                      {  cin>>n; v.push_back(n); }
          vector<int> v1;
              bool line=false;
              permut(v,v1,line);  
               count++;
             }  
    //cout<<endl;
return 0;    
}

