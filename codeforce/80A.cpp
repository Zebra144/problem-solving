
#include<bits/stdc++.h>
using namespace std;



#define endl "\n"
#define optimise() ios_base::sync_with_stdio(0);cin.tie(0);;cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(2);cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a, b, sizeof(a))
int main()
{optimise();

int n,m;
cin >>n>>m;
vector<int>v;
int count;
for(int i=2;i<m;i++){
    if(m%i==0){
        cout<<"NO"<<endl;
    return 0;
    }
}
for(int j = 1;j<=m;j++){

         count = 0;

         for(int i=2;i<=j/2;i++){
             if(j%i==0){
                 count++;
                 break;
             }
        }

         if(count==0 && j!= 1)
             v.push_back(j);
    }
v.pop_back();
if(v.back()==n){
    cout<<"YES"<<endl;
}
else    cout<<"NO"<<endl;

return 0;
}
