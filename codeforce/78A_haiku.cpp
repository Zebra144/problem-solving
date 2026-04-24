#include<bits/stdc++.h>
using namespace std;

const int mx =1e5+123;
//int a[mx];

#define endl "\n"
#define optimise() ios_base::sync_with_stdio(0);cin.tie(0);;cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(2);cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a, b, sizeof(a))

bool isVowel(char c){

return (c== 'a'|| c== 'e'||c== 'i'|| c== 'o'||c== 'u');
}


/* Not sure */


int main(){
optimise();

vector<string> v;
for(int i = 0 ;i<3 ;i++){
    string s;
    char c ;
    cin >> c;
    getline(cin,s);
    s=c+s;
    v.push_back(s);
}
int cnt[]={5,7,5};
int p=0;
for(int i=0 ; i<3 ;i++){
        int c=0;
    for(int j=0;j<v[i].size();j++){
        if(isVowel(v[i][j]))c++;
}
    if(c!=cnt[i]) {
        p=0;break;
    }
    else{
       p=1;
    }
}
if(p==1)cout<<"YES"<<endl;
else cout<<"NO"<<endl;


/*
2nd loop ta

for(int i=0 ; i<3 ;i++){
        int c=0;
    for(auto u= v[i){
        if(isVowel(u))c++;
}
    if(c!=cnt[i]) return cout<<"NO"<<endl, 0;
    else{
        return cout<<"YES"<<endl, 0;
    }
}

*/






return 0;
}
