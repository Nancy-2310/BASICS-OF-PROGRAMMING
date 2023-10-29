#include<iostream>
    using namespace std;
    int main(){
        int n;
        cout<<"enter the no. of pattern"<<endl;
        cin>>n;
        int x=1;
        // for(int i=1;i<=n;i++){
        //     for (int j=1;j<=i;j++){
        //         cout<<x<<" ";
        //         if(x==1) x=0;
        //         else x=1;
        //     }
            for(int i=1;i<=n;i++){
            for (int j=1;j<=i;j++){
                if((i+j)%2==0) cout<<1<<" ";
                else cout<<0<<" ";
            }
            cout<<endl;
        }
        return 0;
    }