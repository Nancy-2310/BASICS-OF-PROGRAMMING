#include<iostream>
    using namespace std;
    int main(){
        int rows,columns;
        cout<<"enter the no. of rows"<<endl;
        cin>>rows;
        cout<<"enter the no. of columns"<<endl;
        cin>>columns;
        for(int i=0;i<rows;i++){
            for (int j=1;j<=columns;j++){
                cout<<j;
            }
            cout<<endl;
        }
        return 0;
    }