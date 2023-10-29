#include<iostream>
    using namespace std;
    int main(){
        int n;
        cout<<"enter the no. of terms"<<endl;
        cin>>n;
        int sum=0;
        // for(int i=0;i<=n;i++){
        //     if(i%2!=0){
        //         sum=sum+i;
        //     }
        //     else{
        //         sum=sum-i;
        //     }
        // }
        if(n%2==0) sum=-(n/2);
        else sum=n+(-(n/2));
        cout<<sum<<endl;
        return 0;
    }