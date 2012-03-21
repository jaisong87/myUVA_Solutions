#include<iostream>
#include<string>
#include<vector>
using namespace std;

string rev(string x)
       {
       string x1;
       int l=x.length();
       int i=0;
       while(i<l && x[l-i-1]=='0') i++;
       while(i<l) { x1+=x[l-i-1]; i++; }
       if(x1.length()==0) x1+='0';
       return x1;
       }
       
string sub(string s) //substract n-rev(n) n is greater
      {
      int l=s.length();
      string s2;    
      int borrow,digit;
      borrow=digit=0;
      for(int i=0;i<l;i++)
              {
              digit=s[l-i-1]-s[i]-borrow;
              if(digit<0) { borrow=1; digit+=10; }
                else borrow=0;
              s2+=('0'+digit);  
              } 
      string s3;
      int j=0;
      l=s2.length();
      while( (j<l) && (s2[l-j-1]=='0') ) j++; 
      while(j<l) { s3+=s2[l-j-1]; j++; }
      if(s3.length()==0) s3+='0'; 
      return s3;
      }

void arr(string &s)
{
int l=s.length();
    char ch;
    for(int i=0;i<l;i++)
            for(int j=i;j<l;j++)
                    if(s[j]>s[i]) { ch=s[i]; s[i]=s[j]; s[j]=ch;  }
    return;            
}      

int cmp(vector<string> v,string a)
    {
    int z=v.size();
    for(int i=0;i<z;i++) if(v[i].compare(a)==0) return 0;
    return 1;
    }
int main()
{
    string a;
    while(cin>>a)
                                 {
                                 vector<string> v;
                                  if(a.compare("0")!=0)
                                                       {
                                        cout<<"Original number was "<<a<<endl;
                                        arr(a);
                                        cout<<a<<" - "<<rev(a)<<" = "<<sub(a)<<endl;
                                        a=sub(a);
                                        while(cmp(v,a)==1)
                                                          {
                                        //cout<<"Pushing:"<<a<<":"<<cmp(v,a)<<endl;
                                        v.push_back(a);                   
                                        arr(a);
                                        //cout<<a<<":"<<cmp(v,a)<<endl;
                                        cout<<a<<" - "<<rev(a)<<" = "<<sub(a)<<endl;
                                        a=sub(a);
                                                          }
                                   /*                        
                                   for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
                                   cout<<endl;
                                   */
                                   }
                 else goto end;
                 cout<<"Chain length "<<v.size()+1<<endl<<endl;
                 a="";
                  }
                  end:

    return 0;
}
