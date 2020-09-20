#include<iostream>

using namespace std;

int gcd(int a, int b){
    if(b==0)
        return a;
    return gcd(b, a%b);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b, m, n;
        cin>>m>>n>>a>>b;
        int lcm=a*b/gcd(a,b);
        int res=n/a+n/b-m/a-m/b-n/lcm+m/lcm;
        if(m%a==0)
            res++;
        if(m%b==0)
            res++;
        if(m%b==0&&m%a==0)
            res--;
        cout<<res<<endl;
    }
    return 0;
}
