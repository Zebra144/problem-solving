
#include<bits/stdc++.h>
using namespace std;



#define endl "\n"
#define optimise() ios_base::sync_with_stdio(0);cin.tie(0);;cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(2);cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a, b, sizeof(a))
int main()
{optimise();

vector<long long >v;
for(int i=0;i<4;i++){
    long long a;cin>>a;
    v.push_back(a);
}
sort(v.begin(),v.end());
long long sz=unique(v.begin(),v.end())-v.begin();
cout<<4-sz<<endl;

return 0;
}
