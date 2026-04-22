#include<bits/stdc++.h>
using namespace std;

const int mx =100+23;
int a[mx];

#define endl "\n"
#define optimise() ios_base::sync_with_stdio(0);cin.tie(0);;cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(2);cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a, b, sizeof(a))
int main(){
optimise();

int n;
int res=0;
int t;
cin>>t;
while(t--){
        cin>>n;


for(int i =1;i<=n;i++)
   cin>> a[i];
int cnt=0;
{
    for(int j=1;j<=n;j++){
        if(a[1]!=a[j]){
            cnt++;
            if(a[j]==a[j+1]){
                res=1;
                break;
            }
else if(cnt==1)
    res =j;
//cout<<res<<"  ->  "<<endl;
    cnt=0;

        }

    }


}
//cout<<res<<"  ->  "<<endl;
 cout<<res<<endl;


}
return 0;
}