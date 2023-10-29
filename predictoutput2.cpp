#include<iostream>
    using namespace std;
    int main(){
        int num1=5, num2=4,num3=3;
        if(num1 >num2 && num1>num3) cout<<"number1"<<endl;
        else if(num2 >num1 && num2>num3) cout<<"number2"<<endl;
        else{
            cout<<"number3"<<endl;
        }
        return 0;
    }