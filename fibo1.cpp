#include<iostream>

using namespace std;

long long mod=1000000007;

long long fibo(int n){
    if(n==0||n==1)
        return n;
    int f0=0, f1=1, dem=1, tmp;
    while(dem<n){
        tmp=f0%mod;
        f0=f1%mod;
        f1=(tmp+f0)%mod;
        dem++;
    }
    return f1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<fibo(n)<<endl;;
    }
    return 0;
}