#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string s1="AMYBNZCO1DP2EQ3FR4GS5HT6IU7JV8KW9LX",s2="AMY  5 O1  S3 E    2ZHT IU LV8 W JX";

bool palin(string s)
{
     int z=s.size();
for(int i=0;i<(z/2);i++) if(s[i]!=s[z-i-1]) return false;
return true;     
}

bool mirror(string s)
{
int z=s.size();
string s3;
int pos;
for(int i=0;(i<z);i++)     
       {
       pos=s1.find(s[i]);
       if(pos==-1) { //cout<<"No reverse for "<<s[i]<<endl; 
                     return false; }
       else s3+=s2[pos];
       }     
reverse(s3.begin(),s3.end());
//cout<<endl<<s<<":"<<s3<<endl;
if(s3==s) return true;
return false;
}

int main()
{
    string str;
    bool pal,mir;
    while(cin>>str)
                   {
      cout<<str<<" -- ";
       for(int i=0;i<str.length();i++) if(str[i]=='0') str[i]='O';
    pal=palin(str);
    mir=mirror(str);
   
   if(pal&&mir) cout<<"is a mirrored palindrome."<<endl; 
   else if(mir) cout<<"is a mirrored string."<<endl;
   else if(pal) cout<<"is a regular palindrome."<<endl;
   else cout<<"is not a palindrome."<<endl;
   cout<<endl;
                   }
 return 0;   
}
    
    
    
    
    
    
