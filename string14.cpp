#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string input;
        cin.ignore();
        getline(cin,input);
        stringstream str(input);
        int dem=0;
        string tmp[100];
        while(str>>tmp[dem])
            dem++;
        cout<<dem<<endl;
    }
    return 0;
}