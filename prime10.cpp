#include<iostream>
#include<cmath>

using namespace std;

int nt(int n){
    if(n<2)
        return 0;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return 0;
    return 1;
}

int tcs(int n){
    int s=0;
    while(n>0){
        s+=n%10;
        n/=10;
    }
    return s;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(nt(n)){
            cout<<"NO"<<endl;
            continue;
        }
        int s=tcs(n), com=0;
        for(int i=2;i<=n&&com<s;i++){
            while(n%i==0&&com<s){
                com+=tcs(i);
                n/=i;
            }
        }
        if(n==1&&com==s)
            cout<<"YES";
        else
            cout<<"NO";
        cout<<endl;
    }
    return 0;
}
