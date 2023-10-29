#include<iostream>
    using namespace std;
    int main(){
        int n;
        cout<<"enter the no. of pattern"<<endl;
        cin>>n;
        int nsp=1;
        for (int j=1;j<=(2*n+1);j++){
                cout<<j;
            }
            cout<<endl;
        for(int i=n;i>0;i--){
            int k=1;
            for (int j=1;j<=i;j++){
                cout<<k;
                k++;
            }
            for (int j=1;j<=nsp;j++){
                cout<<' ';
                k++;
            }
            for (int j=1;j<=i;j++){
                cout<<k;
                k++;
            }
            cout<<endl;
            nsp+=2;
        }
            return 0;
        }