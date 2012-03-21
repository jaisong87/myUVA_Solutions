#include<iostream>
#include<string>
using namespace std;

int val(string s)
{
int v=0;
for(int i=s.size()-1;i>=0;i--)
        {
        if( (s[i]>='0') && (s[i]<='9') ) { v*=10; v+=s[i]-'0'; }
        }    
    return v;
}

int main()
{
 string s;
 string temp;   
    while(cin>>temp)
                    {
                    string r;
                    if(val(temp)>0)
                            {
                            if(temp[0]=='-') { r+='-'; temp=temp.substr(1,temp.size()-1); }
                            if(temp!="1") r+=temp;
                          r+="x^8";  
                            }
    for(int i=7;i>=0;i--)
            {
            cin>>temp;
            if(val(temp)>0)
                         {
                         if(r.size()) { r+=" ";  
                                        if(temp[0]=='-') { r+="- "; 
                                          temp=temp.substr(1,temp.size()-1); 
                                          if(temp!="1" || (!i))  r+=temp;                                           
                                          }
                                        else { r+="+ "; 
                                               if(temp!="1" || (!i))  r+=temp; 
                                              }
                                        if(i) r+="x"; 
                                        if(i>1) { r+="^" ;r+='0'+i; }                         
                                            }
                         else { 
                              if(temp[0]=='-') { r+='-'; temp=temp.substr(1,temp.size()-1); }
                               if(temp!="1" || (!i) ) r+=temp;
                              if(i) r+="x"; 
                              if(i>1) { r+="^"; r+='0'+i; }   
                              }
                         
                         }
            }
            if(!r.size()) r+="0";
            cout<<r<<endl;
                    }
    return 0;
}
