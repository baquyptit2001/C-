#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>res;
        for(int i=0;i<n-1;i++){
            int x;
            cin>>x;
            res.push_back(x);
        }
        if(res[0]!=1){
            cout<<"1"<<endl;
            continue;
        }
        for(int i=0;i<res.size();i++){
            if(res[i+1]!=res[i]+1){
                cout<<res[i]+1;
                break;
            }
        }
        cout<<endl;
    }
    return 0;
}