#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    while(count!=n)
    {
        double tot;
        int *score,sum=0;
        double avg=0.0,p;
        cin>>tot;
        sum=0;
        int n=int(tot);
        score=new int[n];
        for(int i=0;i<tot;i++)
        {
                cin>>score[i];
                sum+=score[i];
        }
        //cout<<"Total is "<<tot<<endl;
        //cout<<"sum is:"<<sum<<endl;
        double above=0;
        avg=double(sum/tot);  
         for(int i=0;i<tot;i++)
        { if(score[i]>avg) above++;
          }
        //cout<<"Above is "<<above<<endl;
        p=((above/tot)*100);
        printf("%.3lf%%\n",p);
       count++;
       delete score;
       }
 return 0;
 } 
