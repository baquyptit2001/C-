#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<int>res;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            res.push_back(x);
        }
        for(int i=0;i<res.size();i++){
            if(res[i]==k){
                cout<<i+1;
                break;
            }
        }
        cout<<endl;
    }
    return 0;
}