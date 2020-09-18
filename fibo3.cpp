#include<iostream>
#include<vector>

using namespace std;

int check(unsigned long long n){
    if(n==0||n==1)
        return 1;
    unsigned long long f0=0, f1=1, tmp;
    while(f0+f1<n){
        tmp=f0;
        f0=f1;
        f1=f0+tmp;
    }
    if(f0+f1==n)
        return 1;
    return 0;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<unsigned long long> res;
        while(n--){
            unsigned long long x;
            cin>>x;
            if(check(x))
                res.push_back(x);
        }
        for(int i=0;i<res.size();i++)   
            cout<<res[i]<<" ";
        cout<<endl;
    }
    return 0;
}
