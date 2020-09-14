#include<iostream>
#include<sstream>
#include<string>

using namespace std;

int main(){
    string input;
    getline(cin,input);
    for(int i=0;i<input.length();i++){
        if(input[i]>='A'&&input[i]<='Z')
            input[i]+=32;
    }
    stringstream s(input);
    string sto[100];
    int i=0;
    while(s>>sto[i])
        i++;
    cout<<sto[i-1];
    for(int j=0;j<i-1;j++)
        cout<<sto[j][0];
    cout<<"@ptit.edu.vn";
    return 0;
}