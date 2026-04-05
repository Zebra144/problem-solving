
#include<bits/stdc++.h>
using namespace std;



#define endl "\n"
#define optimise() ios_base::sync_with_stdio(0);cin.tie(0);;cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(2);cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a, b, sizeof(a))
int main()
{
    optimise();


    int arr[5][5];
    
    int brr[3][3];
    mem(arr,0);

    for(int i=1;i<4;i++){
        for(int j=1;j<4;j++){
            cin>>arr[i][j];
        }
    }


int cnt = 0;
    for(int i=1;i<4;i++){

        for(int j=1;j<4;j++){
           cnt=arr[i][j]+arr[i+1][j]+arr[i-1][j]+arr[i][j+1]+arr[i][j-1];
           //cout<<i<<j<<"->"<<cnt<<endl;
    if(cnt%2==0){
        brr[i-1][j-1]=1;
    }else{
    brr[i-1][j-1]=0;
    }
        cnt = 0;}
    }




 for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<brr[i][j];
        }
 cout<<endl;
    }



        return 0;
}
