
#include<bits/stdc++.h>
using namespace std;

const int mx =1e5+123;
int a[mx];

#define endl "\n"
#define optimise() ios_base::sync_with_stdio(0);cin.tie(0);;cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(2);cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a, b, sizeof(a))
int main(){
optimise();


string a,b;
cin>>a>>b;

for(int i =0 ;i < a.size();i++)
{

    if(a[i]>=(char)'a' && a[i]<=(char)'z'  ){
       a[i]= toupper(a[i]);
    }

}
for(int i =0 ;i < b.size();i++)
{

    if(b[i]>=(char)'a' && b[i]<=(char)'z'  ){
       b[i]= toupper(b[i]);
    }

}
if(a<b){
  cout<<"-1"<<endl;
}else if(a>b){
  cout<<"1"<<endl;
}else{
cout<<"0"<<endl;
}
return 0;
}


