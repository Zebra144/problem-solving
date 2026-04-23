#include<bits/stdc++.h>
using namespace std;



#define endl "\n"
#define optimise() ios_base::sync_with_stdio(0);cin.tie(0);;cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(2);cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a, b, sizeof(a))
int main()
{
    optimise();


    int n ;
    cin>> n;
    vector<int >v;

    for(int i=0; i<n*3; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }


    int sum=0;
    for(int i=0; i<v.size(); i=i+3)
    {
        sum+=v[i];

    }
    if(sum!=0)
    {
        cout<<"NO"<<endl;
        return 0;
    }

    sum=0;
    for(int i=1; i<v.size(); i=i+3)
    { sum+=v[i];
    }
    if(sum!=0)
    {
        cout<<"NO"<<endl;
        return 0;
    }

    sum=0;
    for(int i=2; i<v.size(); i=i+3)
    {
        sum+=v[i];
    }
    if(sum!=0)
    {
        cout<<"NO"<<endl;
        return 0;
    }


    if(sum==0 )cout<<"YES"<<endl;
    else
        return 0;
}
