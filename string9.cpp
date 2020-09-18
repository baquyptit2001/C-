#include<iostream>
#include<sstream>
#include<string>

using namespace std;

int st2n(string s){
    stringstream sso;
    int n;
    sso<<s;
    sso>>n;
    return n;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s, sto;
        cin>>s;
        int max=0;
        for(int i=0;i<s.length();i++){
            if((s[i]>'9'||s[i]<'0')&&(s[i-1]>='0'&&s[i-1]<='9')){
                if(max<st2n(sto))
                    max=st2n(sto);
                sto.clear();
            }
            if(s[i]>='0'&&s[i]<='9')
                sto+=s[i];
        }
        if(sto.length()!=0)
            if(st2n(sto)>max)
                max=st2n(sto);
        cout<<max<<endl;
    }
    return 0;
}
