#include<iostream>

using namespace std;

string fibo(unsigned long long n){
    if(n==0||n==1)
        return "YES";
    unsigned long long f0=0, f1=1, tmp;
    while(f0+f1<n){
        tmp=f0;
        f0=f1;
        f1=tmp+f0;
    }
    if(f0+f1==n)
        return "YES";
    return "NO";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        unsigned long long n;
        cin>>n;
        cout<<fibo(n)<<endl;
    }
    return 0;
}
