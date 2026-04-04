
#include<bits/stdc++.h>
using namespace std;



#define endl "\n"
#define optimise() ios_base::sync_with_stdio(0);cin.tie(0);;cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(2);cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a, b, sizeof(a))
int main()
{optimise();

int  n, k, l, c, d, p, nl, np;
cin>> n>>k>>l>>c>>d>>p>>nl>>np;
vector<int> v;

int aa=k*l;
int dd=aa/nl;

int bb =c*d;


int cc=p/np;



 cout << min(min(dd, bb), cc) / n << endl;


return 0;
}
