////////////////////
//v100-1 0038     //
//Jolly numbers   //
////////////////////
#include<iostream>
using namespace std;

int main()
{int n=0;
int arr[3003];
    while(cin>>n)
    {
        if(n<1) {cout<<"Not jolly\n";}         
        else {
      int a1,a2;int flag=0;
      
      for(int x=0;x<n;x++)
      arr[x]=1;
      cin>>a1;
      int index;
      
              for(int a=1;a<n;a++)
              {cin>>a2;
              if(a2>a1) index=(a2-a1);
              else index=(a1-a2);
              if(index<n) arr[index]=0;
             
              a1=a2;
              
              }
              
      for(int i=1;i<n;i++)
      if(arr[i]!=0){flag=1;}
      
      if(flag==1) cout<<"Not jolly\n";
      else cout<<"Jolly\n";
         }
    }
    return 0;
}
