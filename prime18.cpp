#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int m, n, a, b, dem=0;
        cin>>m>>n>>a>>b;
        for(int j=(m+(a-(m%a)));j<=n;j+=a)
            if(j%b!=0)
                dem++;
        for(int j=(m+(b-(m%b)));j<=n;j+=b)
            dem++;
        cout<<dem<<endl;
    }
    return 0;
}