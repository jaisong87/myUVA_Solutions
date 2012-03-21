#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;

int main()
{
    long long y=4,x=2;
    long double num1=0.0,time; 
    int count=0;
    for(y=4;count<10;y++)
    {   
        if((2*x*x)<((y+1)*y)) x++;
        if((2*x*x)==(y*(y+1)))  {
                                //if(count>0) printf("\n"); 
                                printf("%10ld",x);printf("%10ld\n",y); count++;
				y*=4; x*=4; 
				}
    }
    return 0;
}

