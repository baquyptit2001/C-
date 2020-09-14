#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        for(int m=0;m<s.length();m++){
            int con=1;
            for(int n=0;n<s.length();n++){
                if(s[n]==s[m]&&m!=n){
                    con=0;
                    break;
                }
            }
            if(con)
                cout<<s[m];
        }
        cout<<endl;
    }
    return 0;
}