#include<iostream>
#include<math.h>

using namespace std;

int nt(long long n){
    if(n<2)
        return 0;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return 0;
    return 1;
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n;
        cin>>n;
        if(n<4){
            cout<<"0"<<endl;
            continue;
        }
        int dem=1;
        for(long long j=3;j*j<=n;j+=2){
            if(nt(j))
                dem++;
        }
        cout<<dem<<endl;
    }
    return 0;
}