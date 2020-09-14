#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>res;
        int rep=-1;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            res.push_back(x);
        }
        for(int i=0;i<res.size();i++){
            for(int j=0;j<i;j++){
                if(res[j]==res[i]){
                    rep=res[i];
                    break;
                }
            }
            if(rep!=-1)
                break;
        }
        cout<<rep<<endl;
    }
    return 0;
}
