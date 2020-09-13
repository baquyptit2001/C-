#include<iostream>
#include<math.h>

using namespace std;

int nt(int n){
    if(n<2)
        return 0;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return 0;
    return 1;
}

int check(int n){
    int dem=0;
    int k=n;
    for(int i=2;i<=k/2;i++){
        if(n%i==0){
            n/=i;
            dem++;
        }
        if(n%i==0)
            return 0;
        if(dem==3&&n==1)
            return 1;
        if(dem==3&&n!=1)
            return 0;
    }
    return 0;
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        if(nt(n)){
            cout<<"0"<<endl;
            continue;
        }
        cout<<check(n);
        cout<<endl;
    }
}