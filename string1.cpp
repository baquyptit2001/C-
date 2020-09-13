#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int k;
        string s;
        cin>>s>>k;
        vector<char>res(255,1);
        for(int j=0;j<s.length();j++){
            res[s[j]]=0;
        }
        int dem=0;
        for(int j='a';j<='z';j++){
            dem+=res[j];
            if(dem>k)
                break;
        }
        if(dem>k)
            cout<<"0";
        else
            cout<<"1";
        cout<<endl;
    }
}