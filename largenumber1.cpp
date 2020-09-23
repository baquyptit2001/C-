//coded by EnBiKiu<3

#include<iostream>
#include<vector>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s1, s2, n1, n2;
		cin>>s1>>s2;
		if(s1.length()==s2.length()){
			for(int i=0;i<s1.length();i++){
				if(s1[i]!=s2[i]){
					if(s1[i]>s2[i]){
						n1=s1;
						n2=s2;
					}
					else{
						n1=s2;
						n2=s1;
					}
					break;
				}
			}
		}
		else{
		n1 = (s1.length()>s2.length()) ? s1:s2;
		n2 = (s1.length()>s2.length()) ? s2:s1;
		}
		int num1[1000], num2[1000];
		for(int i=n1.length()-1;i>=0;i--){
			num1[n1.length()-1-i]=n1[i]-'0';
		}
		for(int i=n2.length()-1;i>=0;i--){
			num2[n2.length()-1-i]=n2[i]-'0';
		}
		for(int i=n2.length();i<n1.length();i++)
			num2[i]=0;
		int res[1000];
		int du1=0, du2=0;
		for(int i=0;i<n1.length();i++){
			du2=0;
			if(num1[i]<num2[i]){
				num1[i]+=10;
				du2=1;
			}
			res[i]=num1[i]-num2[i]-du1;
			if(res[i]<0){
				res[i]+=10;
				du2++;
			}
			du1=du2;
		}
		for(int i=n1.length()-1;i>=0;i--)
			cout<<res[i];
		cout<<endl;
	}
	return 0;
}
