#include<iostream>
    using namespace std;
    int main(){
        int n;
        cout<<"enter the no. of pattern"<<endl;
        cin>>n;
        int nsp=n-1;
        int nst=1;
        for(int i=1;i<=n;i++){
            for (int j=1;j<=(n-i);j++){
                cout<<" ";
            }
            for (int k=1;k<=nst;k++){
                cout<<"*";
            }
            nsp--;
            nst+=2;
            cout<<endl;
        }
        return 0;
    }