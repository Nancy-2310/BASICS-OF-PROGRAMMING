#include<iostream>
    using namespace std;
    int main(){
        int marks;
        cout<<"enter the marks"<<endl;
        cin>>marks;
        if(marks>=91 and marks <=100){
            cout<<"excellent"<<endl;
        }
        else if(marks>=81 and marks <=90){
            cout<<"very good"<<endl;
        }
        else if(marks>=71 and marks <=80){
            cout<<"good"<<endl;
        }
        else if(marks>=61 and marks <=70){
            cout<<"can do better"<<endl;
        }
        else if(marks>=51 and marks <=60){
            cout<<"average"<<endl;
        }
        else if(marks>=41 and marks <=50){
            cout<<"below average"<<endl;
        }
        else 
            cout<<"fail"<<endl;
        return 0;
    }