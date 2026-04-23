
#include<bits/stdc++.h>
using namespace std;



#define endl "\n"
#define optimise() ios_base::sync_with_stdio(0);cin.tie(0);;cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(2);cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a, b, sizeof(a))
int main()
{
    optimise();
string s;
cin>>s;
for(int i=0;i<s.size() ;i++){



   if(s[i]=='-'&& s[i+1]=='-'){
        cout<<'2' ;
        i++;

    }
    else if(s[i]=='.' ){
        cout<<'0';

    }
   else {
         cout<<'1';
        i++;

    }




}

cout<<endl;
        return 0;
}
