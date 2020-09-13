#include<iostream>
#include<math.h>

using namespace std;

int nt(int n){
    if(n<2)
        return n;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return 0;
    return 1;
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        cout<<"1 ";
        for(int j=2;j<=n;j++){
            if(nt(j)){
                cout<<j<<" ";
                continue;
            }
            if(j%2==0){
                cout<<"2 ";
                continue;
            }
            for(int k=3;k<=j/2;k+=2){
                if(j%k==0){
                    cout<<k<<" ";
                    break;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}