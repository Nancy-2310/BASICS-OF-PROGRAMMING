#include<iostream>
    using namespace std;
    int main(){
        int n,power;
        cout<<"enter the number"<<endl;
        cin>>n;
        int n1=n;
        cout<<"  enter the power"<<endl;
        cin>>power;
        for(int i=0;i<power;i++){
            if(i==0){
                n=n1;
            }
            else
            n=n1*n;
        }
        cout<<n<<endl;
        return 0;
    }