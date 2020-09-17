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
        while(n--){
            int x;
            cin>>x;
            res.push_back(x);
        }
        sort(res.begin(),res.end());
        int m=0, k=res.size()-1;
        for(int i=0;i<res.size();i++){
            if(i%2==1)
                cout<<res[m++]<<" ";
            else
                cout<<res[k--]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
