#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string in;
        cin>>in;
        int res=0;
        for(int i=0;i<in.length();i++){
            for(int j=i;j<in.length();j++){
                if(in[j]==in[i])
                    res++;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}