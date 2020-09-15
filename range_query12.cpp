#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int res=0, dem=0;
        vector<int> a, b;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            b.push_back(x);
        }
        for(int i=2;i<=a.size();i++){
            for(int j=0;j<a.size()-i+1;j++){
                int sa=0, sb=0;
                for(int k=j;k<j+i;k++){
                    sa+=a[k];
                    sb+=b[k];
                }
                if(sa==sb){
                    res=i;
                    continue;
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}