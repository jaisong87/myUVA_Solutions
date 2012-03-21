#include<iostream>
using namespace std;

int main()
{
 long long a,b;
 int carry=0,carry_cnt=0;
 while(cin>>a>>b)
 {if((a==0)&&(b==0)) break;
  carry_cnt=0;carry=0;
  while((a>0)||(b>0))
   { 
    // cout<<a<<":"<<b<<":"<<carry<<":"<<carry_cnt<<endl; 
     carry=(carry+a%10+b%10)/10;
     a/=10;b/=10;
     if(carry==1) carry_cnt++; 
     }  
         // c[0]=carry+'0';
    if(carry_cnt!=0)     cout<<carry_cnt;                             
    else cout<<"No";        
    cout<<" carry operation";
    if(carry_cnt>1) cout<<"s";
    cout<<"."<<endl;
}
    
    return 0;
}
