#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y, p;
        cin>>x>>y>>p;
        long long a=1, b=x;
        while(y>0){
            if(y%2==1)
                a=(a*b)%p;
            b=(b*b)%p;
            y/=2;
        }
        cout<<a%p<<endl;
    }
}