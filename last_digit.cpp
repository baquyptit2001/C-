#include<iostream>

using namespace std;

int xu_ly(int n){
    int s=0;
    while(n!=0){
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
        while(n>=10){
            n=xu_ly(n);
        }
        cout<<n<<endl;
    }
}
