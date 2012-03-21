#include<iostream>
using namespace std;
int main()
{
static long long uc[26],lc[26];
char ch;
while(cin.get(ch))
{
    
  if(ch>=65 && ch<= 90) uc[ch-65]++; 
  else if(ch>=97 && ch<=122) lc[ch-97]++;
  else if(ch==10 || ch==13)
             {  
long long max=lc[0];
for(int i=0;i<26;i++)
{
        if(lc[i]>max) max=lc[i];
        if(uc[i]>max) max=uc[i];
        }               
 
 for(int a=0;a<26;a++)
{ if(uc[a]==max) cout<<char('A'+a);uc[a]=0;}
 
 for(int a=0;a<26;a++)
{ if(lc[a]==max) cout<<char('a'+a);lc[a]=0;}

cout<<" "<< max<<endl;
            }
}
return 0;
}        
