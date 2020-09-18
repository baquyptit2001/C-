#include<iostream>
#include<sstream>
#include<string>

using namespace std;

int st2n(string s){
    stringstream sso;
    sso<<s;
    int num;
    sso>>num;
    return num;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s, sto;
        cin>>s;
        int sum=0;
        for(int i=0;i<s.length();i++){
            if((s[i]<'0'||s[i]>'9')&&(s[i-1]>='0'&&s[i-1]<='9')){
                sum+=st2n(sto);
                sto.clear();
            }
            if(s[i]>='0'&&s[i]<='9')
                sto+=s[i];
        }
        if(sto.length()!=0)
            sum+=st2n(sto);
        cout<<sum<<endl;
    }
    return 0;
}
