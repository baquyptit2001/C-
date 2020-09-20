#include<iostream>
#include<cmath>

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
    while(t--){
        long long l, r;
        cin>>l>>r;
        long long i=sqrt(l)+1;
        int dem=0;
        if(sqrt(l)*sqrt(l)==l)
            i--;
        if(l<=4&&r>=4){
            dem=1;
            i=3;
        }
        for(i;i<=sqrt(r);i+=2)
            if(nt(i))
                dem++;
        cout<<dem<<endl;
    }
    return 0;
}
