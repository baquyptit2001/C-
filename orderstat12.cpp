#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int>res;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            if(x>0)
                res.push_back(x);
        }
        sort(res.begin(),res.end());
        if(res[0]!=1){
            cout<<"1"<<endl;
            continue;
        }
        for(int j=1;j<res.size();j++){
            if(res[j]-res[j-1]>1){
                cout<<res[j-1]+1;
                break;
            }
            if(j==res.size()-1)
                cout<<res[res.size()-1]+1;
        }
        cout<<endl;
    }
    return 0;
}