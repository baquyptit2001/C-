#include<iostream>
#include<math.h>

using namespace std;

long long gcd(long long a, long long b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int nt(int n){
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
    while(t--){
        int x;
        cin>>x;
        int dem=0;
        for(int i=1;i<x;i++){
            if(gcd(i,x)==1)
                dem++;
        }
        cout<<nt(dem)<<endl;
    }
}