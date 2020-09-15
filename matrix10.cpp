#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int h, c;
        cin>>h>>c;
        int a[100][100], b[100][100]={0};
        for(int i=0;i<h;i++)
            for(int j=0;j<c;j++){
                cin>>a[i][j];
                if(a[i][j]==1){
                    for(int m=0;m<c;m++)
                        b[i][m]=1;
                    for(int m=0;m<h;m++)
                        b[m][j]=1;
                }
            }
        for(int i=0;i<h;i++){
            for(int j=0;j<c;j++){
                cout<<b[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}