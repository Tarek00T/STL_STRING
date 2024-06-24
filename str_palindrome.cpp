#include<bits/stdc++.h>
using namespace std ;
void solve()
{
    string s,temp;
    cin >>s;
    temp=s;
    reverse(temp.begin(),temp.end());
    if(s==temp)
        cout<<"Palindrome"<<endl;
    else
        cout<<"Not Palindrome"<<endl;
}
int main ()
{
    int t=1;
    //cin >>t;
    while(t--)
    {
        solve();
    }
}


