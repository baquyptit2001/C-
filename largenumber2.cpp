#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s1, s2, n1, n2;
        cin>>s1>>s2;
        int num1[1000], num2[1000];
        n1=(s1.length()>s2.length()) ? s1:s2;
        n2=(s1.length()>s2.length()) ? s2:s1;
        for(int i=n1.length()-1;i>=0;i--){
            num1[n1.length()-1-i]=n1[i]-'0';
        }
        for(int i=n2.length()-1;i>=0;i--){
            num2[n2.length()-1-i]=n2[i]-'0';
        }
        for(int i=n2.length();i<n1.length();i++)
            num2[i]=0;
         int du=0;
         int res[1000];
         for(int i=0;i<n1.length();i++){
             int cong=((num1[i])+(num2[i])+du)%10;
             du=(num1[i]+num2[i]+du)/10;
             res[i]=cong;
         }
        int n=n1.length();
        if(du!=0){
        	res[n1.length()]=du;
        	n++;
        }
        for(int i=n-1;i>=0;i--)
            cout<<res[i];
        cout<<endl;
    }
    return 0;
}
