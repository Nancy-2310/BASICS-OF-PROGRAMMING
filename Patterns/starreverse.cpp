#include<iostream>
    using namespace std;
    int main(){
        int n;
        cout<<"enter the no. of pattern"<<endl;
        cin>>n;
        // cout<<"enter the no. of columns"<<endl;
        // cin>>columns;
        for(int i=1;i<=n;i++){
            for (int j=0;j<(n+1)-i;j++){
                cout<<'*'<<" ";
            }
            cout<<endl;
        }
        return 0;
    }