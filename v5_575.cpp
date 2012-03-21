//////////////////////////
//ScrewJack's solution  //
//4 (Skew Binary)       //
//vol:5 problem.575     // 
//kbjtpo@gmail.com      //
//////////////////////////


#include<iostream>
#include<cmath>
using namespace std;

int pow(int a,int b)
{int r=1,num=a;
while(r!=b) {num*=a;r++;}
   return num; 
    
}
int main()
{
    int num=0;
    char n[32];
    while(cin>>n)
    {
    if((strlen(n)==1)&&n[0]=='0') break;
    else
          {int l=strlen(n);
              num=0;                    
              for(int i=l-1;i>=0;i--)
              if(n[i]!='0') num+=(pow(2,l-i)-1)*(n[i]-'0');                     
                                  
                                  }
    cout<<num<<endl;
    
    
    }
    
    return 0;
}
