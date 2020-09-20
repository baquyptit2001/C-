#include<iostream>
#include<vector>

using namespace std;

int gcd(int a, int b){
    if(b==0)
        return a;
    return gcd(b, a%b);
}

 long long modulo(int a, int b, int n){
    long long x=1, y=a; 
    while (b > 0) {
        if (b%2 == 1) {
            x = (x*y) % n;
        }
        y = (y*y) % n;
        b /= 2;
    }
    return x % n;
}

int main(){
    int t;
    long long m=1000000007;
    cin>>t;
    while(t--){
        int n;
        unsigned long long mul=1;
       cin>>n;
        vector<unsigned long long> res;
        for(int i=0;i<n;i++){
            unsigned long long x;
            cin>>x;
            mul=((mul%m)*(x%m))%m;
            res.push_back(x);
        }
        long long ucln=res[0];
        for(int i=1;i<res.size();i++){
            ucln=gcd(res[i],ucln);
            if(ucln==1)
                break;
        }
        cout<<modulo(mul,ucln,m)<<endl;
    }
}
