//v2-299
//Train swapping

#include<iostream>
using namespace std;

int main()
{
    int arr[51];
    int cases;
    cin>> cases;
    for(int a=0;a<cases;a++)
                                {
      int n,temp,cnt=0;
      cin>>n;
      for(int b=1;b<=n;b++)
        cin>>arr[b];
      
      for(int i=1;i<=n;i++)
      for(int j=i;j<=n;j++)
      if(arr[i]>arr[j])
       {temp=arr[i];arr[i]=arr[j];arr[j]=temp;cnt++;}
      
      cout<<"Optimal train swapping takes "<<cnt<<" swaps.";
      if(a!= cases-1) cout<<endl;        
                         
                              }

return 0;
}






