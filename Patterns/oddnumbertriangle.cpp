#include<iostream>
    using namespace std;
    int main(){
        int n;
        cout<<"enter the no. of pattern"<<endl;
        cin>>n;
        // cout<<"enter the no. of columns"<<endl;
        // cin>>columns;
        for(int i=1;i<=n;i=i+2){
            for (int j=1;j<=i;j=j+2){
                cout<<j<<" ";
            }
            cout<<endl;
        }
        return 0;
    }