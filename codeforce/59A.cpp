
#include<bits/stdc++.h>
using namespace std;



#define endl "\n"
#define optimise() ios_base::sync_with_stdio(0);cin.tie(0);;cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(2);cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a, b, sizeof(a))
int main()
{optimise();


string s;
cin>>s;
int cnt=0;
for(int i=0;i<s.size();i++){
    if(isupper(s[i]))
        cnt++;
}
int siz=s.size() / 2;


if(cnt>siz){
   for(auto u:s) {u=toupper(u);
   cout<<u;}
}
else{
     for(auto u:s){ u=tolower(u);
      cout<<u;}
}







        return 0;
}
