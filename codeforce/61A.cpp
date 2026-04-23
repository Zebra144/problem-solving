#include<bits/stdc++.h>
using namespace std;



#define endl "\n"
#define optimise() ios_base::sync_with_stdio(0);cin.tie(0);;cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(2);cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a, b, sizeof(a))
int main()
{optimise();

string l ;
cin>>l;
    vector<int> v1;

    for (auto u:l) {
        v1.push_back(u - '0');
    }

string r ;
cin>>r;
    vector<int> v2;

    for (auto u:r) {
        v2.push_back(u - '0');
    }
    vector<int>v;

for(int i=0;i<v1.size();i++){
    if(v1[i]-v2[i]==1 || v2[i]-v1[i]==1){
        v.push_back(1);
    }else{
            v.push_back(0);
    }
}
//cout<<endl<<v.size()<<endl;

for(auto u:v)cout<<u;
return 0;
}
