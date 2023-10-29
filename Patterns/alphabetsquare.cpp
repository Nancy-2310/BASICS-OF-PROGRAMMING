#include<iostream>
    using namespace std;
    int main(){
        int n;
        cout<<"enter the no. of pattern"<<endl;
        cin>>n;
        // cout<<"enter the no. of columns"<<endl;
        // cin>>columns;
        
        for(int i=1;i<=n;i++){
            for (int j=0;j<n;j++){
                cout<<char(j+65)<<" ";
            }
            cout<<endl;
        }
        return 0;
    }