#include<iostream>
#include<vector>
#include<algorithm>

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
        sort(res.begin(),res.end());
        for(int i=res.size()-1;i>=res.size()-k;i--)
            cout<<res[i]<<" ";
        cout<<endl;
    }
    return 0;
}