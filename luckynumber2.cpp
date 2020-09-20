#include<iostream>

using namespace std;

long long tcs(string s){
    long long sum=0;
    for(int i=0;i<s.length();i++){
        sum+=s[i]-'0';
    }
    if(sum%9==0)
        return 1;
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s=="0"){
            cout<<"0"<<endl;
            continue;
        }
        cout<<tcs(s)<<endl;
    }
    return 0;
}
