#include<iostream>
#include<math.h>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        long long even=0, odd=0;
        reverse(s.begin(),s.end());
        for(int j=0;j<s.length();j+=2){
            even+=(s[j]-48);
        }
        for(int j=1;j<s.length();j+=2){
            odd+=(s[j]-48);
        }
        if((abs(even-odd))%11==0)
            cout<<"1";
        else
            cout<<"0";
        cout<<endl;
    }
    return 0;
}