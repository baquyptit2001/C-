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
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            res.push_back(x);
        }
        sort(res.begin(),res.end());
        int rep=res[1]-res[0];
        for(int i=2;i<res.size();i++){
            if(res[i]-res[i-1]<rep)
                rep=res[i]-res[i-1];
        }
        cout<<rep<<endl;
    }
    return 0;
}