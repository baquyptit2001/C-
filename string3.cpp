#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        long long res=0, ress=0;
        long long k=0;
        reverse(s.begin(),s.end());
        for(int j=0;j<s.length();j++){
            if(s[j]=='1'){
                if(j==0)
                    res+=1;
                else{
                if(j%4==0)
                    res+=6;
                if(j%4==1)
                    res+=2;
                if(j%4==2)
                    res+=4;
                if(j%4==3)
                    res+=8;
                }
            }
        }
        if(res%5==0)
            cout<<"Yes";
        else
            cout<<"No";
        cout<<endl;
    }
    return 0;
}