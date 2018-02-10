#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
void common(string s1,string s2)  //creatng a function
{
    int a[26]={},b[26]={};      //intializing to zero
    for(int i=0;i<s1.length();i++)  
    {
        a[s1[i]-'a']+=1;            //couting the alphabets stroing at corresponding index
    }
     for(int i=0;i<s2.length();i++)
    {
        b[s2[i]-'a']+=1;
    }
    for(int i=0;i<26;i++)
    {
        if(a[i]!=0&&b[i]!=0)     //finding the min value of two array at same index
        {
            int z=min(a[i],b[i]);
            while(z--)                //and printing that many no of times
            {
                cout<<char('a'+i);
            }
        }
    }
}


int main() {
	string s1,s2;
	cin>>s1>>s2;
	common(s1,s2);
	return 0;
}
