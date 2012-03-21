///////////////////////////
//ScreJack's solution    //
//kbjtpo@gmail.com       //
//4 (Reverse and add)    //
//vol:100 problem.10018  //
///////////////////////////

#include<iostream>
using namespace std;

long long revers(long long num)
{unsigned int rev=0;
    while(num!=0){rev=rev*10+num%10; num/=10;}
  return rev;
}


int main()
{
 int n;
 cin>>n;
 long long rev=0,num=0;
 int count=0;
 while(n)
    {
         
cin>>num;
rev=0;count=0;

while(num!=revers(num))
  {rev=revers(num);
   num=num+rev;
   count++;
   }
    cout<<count<<" "<<num<<endl;
          n--;         
       }
    return 0;
}
