#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<int>res, abso;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            res.push_back(x);
            abso.push_back(abs(k-x));
        }
        sort(abso.begin(),abso.end());
        vector<int>ans;
        int j=0;
        for(int i=0;i<abso.size();i++){
            for(int j=0;j<res.size();j++){
                int con=0;
                if(abs(res[j]-k)==abso[i]){
                    con=1;
                    for(int l=0;l<ans.size();l++){
                        if(ans[l]==j){
                            con=0;
                            break;
                        }
                    }
                }
                if(con){
                    cout<<res[j]<<" ";
                    ans.push_back(j);
                    continue;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
