//Decoder
#include<iostream>
using namespace std;

int main()
{char s[100];
while(cin>>s)
             {
             for(int i=0;i<strlen(s);i++)
             s[i]=s[i]-7;
             cout<<s<<endl;
             }
             return 0;
}
