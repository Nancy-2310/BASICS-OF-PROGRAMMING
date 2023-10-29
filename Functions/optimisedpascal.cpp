#include<iostream>
#include<math.h>
    using namespace std; 
        void pascal(int n){
            for(int i=0;i<=n;i++){
                int curr=1;
                for(int j=0;j<=i;j++){
                cout<<curr<<" ";
                curr=curr*(i-j)/(j+1);   
            }
            cout<<endl;
            }
        }
    int main(){

            int n;
            cin>>n;
            pascal(n);
        return 0;
    }