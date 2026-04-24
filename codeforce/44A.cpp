#include<bits/stdc++.h>
using namespace std;

const int mx =1e5+123;
int a[mx];

#define endl "\n"
#define pb "push_back"
#define optimise() ios_base::sync_with_stdio(0);cin.tie(0);;cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(2);cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a, b, sizeof(a))
int main(){
optimise();

int n;
cin>>n;
vector<pair<string,string>> v(n);
for(int i=0;i<n;i++){
    cin>>v[i].first >>v[i].second;
}
sort(v.begin(),v.end());
int sz =unique(v.begin(),v.end())-v.begin();
cout<<sz<<endl;
return 0;
}
