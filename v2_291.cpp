#include<iostream>
#include<vector>
#include<string>
using namespace std;
/*
v0-1r2
v1-1r3
v2-1r5
v3-2r3
v4-2r5
v5-3r4
v6-3r5
v7-4r5
*/

void santa(string s,int count,vector<int> v,int &tot)
{
    
if(count>=8) { cout<<s<<endl; tot++; }     
    else
        { 
        int l=s.length();
        int n=s[l-1]-'0';
        if(n==1) 
                 {
                 if(v[0]==0) { vector<int> v1=v; v1[0]=1; santa(s+"2",count+1,v1,tot); }
                 if(v[1]==0) { vector<int> v1=v; v1[1]=1; santa(s+"3",count+1,v1,tot); }
                 if(v[2]==0) { vector<int> v1=v; v1[2]=1; santa(s+"5",count+1,v1,tot); }
                 }  
        if(n==2) 
                 {
                 if(v[0]==0) { vector<int> v1=v; v1[0]=1; santa(s+"1",count+1,v1,tot); }
                 if(v[3]==0) { vector<int> v1=v; v1[3]=1; santa(s+"3",count+1,v1,tot); }
                 if(v[4]==0) { vector<int> v1=v; v1[4]=1; santa(s+"5",count+1,v1,tot); }
                 }  
       if(n==3) 
                 {
                 if(v[1]==0) { vector<int> v1=v; v1[1]=1; santa(s+"1",count+1,v1,tot); }
                 if(v[3]==0) { vector<int> v1=v; v1[3]=1; santa(s+"2",count+1,v1,tot); }
                 if(v[5]==0) { vector<int> v1=v; v1[5]=1; santa(s+"4",count+1,v1,tot); }
                 if(v[6]==0) { vector<int> v1=v; v1[6]=1; santa(s+"5",count+1,v1,tot); }
                 }  
       if(n==4) 
                 {
                 if(v[5]==0) { vector<int> v1=v; v1[5]=1; santa(s+"3",count+1,v1,tot); }
                 if(v[7]==0) { vector<int> v1=v; v1[7]=1; santa(s+"5",count+1,v1,tot); }
                 }  
       if(n==5) 
                 {
                 if(v[2]==0) { vector<int> v1=v; v1[2]=1; santa(s+"1",count+1,v1,tot); }
                 if(v[4]==0) { vector<int> v1=v; v1[4]=1; santa(s+"2",count+1,v1,tot); }
                 if(v[6]==0) { vector<int> v1=v; v1[6]=1; santa(s+"3",count+1,v1,tot); }
                 if(v[7]==0) { vector<int> v1=v; v1[7]=1; santa(s+"4",count+1,v1,tot); }
                 }  
                  
        }
return;
}

int main()
{   vector<int> v;
int tot=0;
for(int i=0;i<8;i++) v.push_back(0);
santa("1",0,v,tot);
//cout<<"Total:"<<tot<<endl;
//system("pause");
return 0;    
}
