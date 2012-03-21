#include<iostream>
#include<string>
using namespace std;


int main()
{
string s1="BFPV",s2="CGJKQSXZ",s3="DT",s4="L",s5="MN",s6="R";
string s;

       while(cin>>s)
                    {
                    string soundex;
                    char last='0';
                    for(int a=0;a<s.size();a++)
                            {
                        if(s1.find(s[a])!=-1)       { if(last!='1')  soundex+="1"; last='1'; }
                        else if(s2.find(s[a])!=-1)  { if(last!='2')  soundex+="2"; last='2'; }
                        else if(s3.find(s[a])!=-1)  { if(last!='3')  soundex+="3"; last='3'; }
                        else if(s4.find(s[a])!=-1)  { if(last!='4')  soundex+="4"; last='4'; }
                        else if(s5.find(s[a])!=-1)  { if(last!='5')  soundex+="5"; last='5'; }
                        else if(s6.find(s[a])!=-1)  { if(last!='6')  soundex+="6"; last='6'; }
                        else last='0'; 
                            }                                         
                    cout<<soundex<<endl;
                    }
return 0;
}

