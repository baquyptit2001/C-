#include<iostream>

using namespace std;

int check(int n){
    if(n%100==86)
        return 1;
    return 0;
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        cout<<check(n)<<endl;
    }
    return 0;
}