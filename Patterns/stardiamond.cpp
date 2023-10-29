#include<iostream>
    using namespace std;
    int main(){
        int n;
        cout<<"enter the no. of pattern"<<endl;
        cin>>n;
        int nsp=n-1;
        int nst=1;

        for(int i=1;i<=(2*n-1);i++){

            for (int j=1;j<=nsp;j++){
                cout<<" ";
            }
            for (int k=1;k<=nst;k++){
                cout<<'*';
            }
            if(i>=n){
                nsp++;
                nst=nst-2;
            }
            else{
                nsp--;
                nst=nst+2;
            }
            cout<<endl;
            }
            return 0;
        }
        