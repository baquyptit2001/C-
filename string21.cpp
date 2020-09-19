#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<char>st;
        int sum = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]<='9'&&s[i]>='0')
                sum+=s[i]-'0';
            else
                st.push_back(s[i]);
        }
        sort(st.begin(),st.end());
        for(int i=0;i<st.size();i++)
            cout<<st[i];
        cout<<sum<<endl;
    }
    return 0;
}
