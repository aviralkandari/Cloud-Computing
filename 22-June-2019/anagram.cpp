#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,i,flag=0;
    cin>>n;
    cin>>m;
    if(n!=m)
        cout<<"Not an Anagram";
    else
    {
        char s1[n],s2[m];
        cin>>s1;
        cin>>s2;
        sort(s1,s1+n);
        sort(s2,s2+m);
        for(i=0;i<n;i++)
        {
               if(s1[i]!=s2[i])
               {
                   flag=1;
                   break;
               }
        }
        if(flag==1)
            cout<<"Not Anagram";
        else
            cout<<"Anagram";
    }
}
