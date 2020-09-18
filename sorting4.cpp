#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int m, n;
        cin>>m>>n;
        vector<int>r1, r2, res, res2;
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            r1.push_back(x);
            res.push_back(x);
        }
        for(int i=0;i<n;i++){
            int x, con=1;
            cin>>x;
            r2.push_back(x);
            for(int j=0;j<res.size();j++){
                if(x==res[j]){
                    con=0;
                    res2.push_back(x);
                    break;
                }
            }
            if(con)
                res.push_back(x);
        }
        sort(res.begin(),res.end());
        sort(res2.begin(),res2.end());
        for(int i=0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        for(int i=0;i<res2.size();i++)
            cout<<res2[i]<<" ";
        cout<<endl;
    }
    return 0;
}