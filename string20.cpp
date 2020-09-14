#include<iostream>
#include<sstream>
#include<string>

using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string input;
        getline(cin,input);
        stringstream s(input);
        string store[100];
        int i=0;
        while(s>>store[i])
            i++;
        for(int j=i-1;j>=0;j--)
            cout<<store[j]<<" ";
        cout<<endl;
    }
    return 0;
}