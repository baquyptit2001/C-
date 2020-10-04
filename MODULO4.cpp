//coded by EnBiKiu<3

#include<iostream>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n, k, res=0;
		cin>>n>>k;
		if(n<k){
			res=(n+1)*(n/2);
			if(n%2!=0){
				res+=(n/2)+1;
			}
			if(res==k)
                cout<<"1";
            else
                cout<<"0";
            cout<<endl;
			continue;
		}
		if(k==0){
			cout<<"0"<<endl;
			continue;
		}
		long long tinh=k*((k-1)/2);
		if(k%2==0){
			tinh+=((k)/2);
		}
		if(k==2){
			tinh=1;
		}
		res=tinh*(n/k);
		long long sto=n-(n/k)*k;
		if(sto!=0){
			res+=(sto+1)*(sto/2);
			if(sto%2!=0){
					res+=((sto/2)+1);
			}
		}
		if(res==k)
            cout<<"1";
        else
            cout<<"0";
        cout<<endl;
	}
	return 0;
}
