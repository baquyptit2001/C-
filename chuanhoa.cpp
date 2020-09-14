#include<iostream>
#include<sstream>
#include<string>

using namespace std;

int main(){
    string input;
    getline(cin,input);
    for(int i=0;i<input.length();i++)
        if(input[i]>='A'&&input[i]<='Z')
            input[i]+=32;
    int i=0;
    string store[100];
    stringstream s(input);
    while(s>>store[i])
        i++;
    for(int j=0;j<i-1;j++){
        store[j][0]-=32;
        cout<<store[j];
        if(j!=i-2)
            cout<<" ";
    }
    for(int j=0;j<store[i-1].length();j++)
        store[i-1][j]-=32;
    cout<<", "<<store[i-1];
}