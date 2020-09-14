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
        if(k<res[0]||k>res[res.size()-1]){
            cout<<"-1"<<endl;
            continue;
        }
        int dem=0;
        for(int i=0;i<res.size();i++){
            if(res[i]==k)
                dem++;
            if(res[i]>k)
                break;
        }
        if(dem==0){
            cout<<"-1"<<endl;
            continue;
        }
        cout<<dem<<endl;
    }
    return 0;
}