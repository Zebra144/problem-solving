
#include<bits/stdc++.h>
using namespace std;

const int mx =100+123;
int a[mx];

#define endl "\n"
#define optimise() ios_base::sync_with_stdio(0);cin.tie(0);;cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(2);cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a, b, sizeof(a))
int main(){
optimise();
int n;
cin>>n;
for(int i=1;i<=n;i++){
        cin>>a[i];
}



int odd=0;
int even = 0;
int p,q;

for(int i=1;i<=n;i++){
     if(a[i]%2==0){
        even++;


    }
    if(a[i]%2!=0){
        odd++;



    }
}

if(even>1){

for(int i=1;i<=n;i++){

    if(a[i]%2!=0){
        cout <<i<<endl;
}}}
if(odd>1){

for(int i=1;i<=n;i++){


    if(a[i]%2==0){
        cout <<i<<endl;
}
}}
return 0;
}

