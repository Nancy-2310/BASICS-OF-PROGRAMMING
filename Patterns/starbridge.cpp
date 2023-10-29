#include<iostream>
    using namespace std;
    int main(){
        int n;
        cout<<"enter the no. of pattern"<<endl;
        cin>>n;
        int nsp=1;
        int nst=n;
        for (int j=1;j<=(2*n+1);j++){
                cout<<"*";
            }
            cout<<endl;
        for(int i=1;i<=n;i++){
            for (int j=1;j<=nst;j++){
                cout<<"*";
            }
            for (int k=1;k<=nsp;k++){
                cout<<' ';
            }
            for (int k=1;k<=nst;k++){
                cout<<'*';
            }
            cout<<endl;
            nst--;
            nsp+=2;
        }
            return 0;
        }