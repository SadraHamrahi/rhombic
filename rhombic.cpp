#include <iostream>
using namespace std;

int main() 
{
    int a,b;
    cin>>a;
    b=a*2;
    for (int k=1;k<=a*2-1;k++){
        b--;
        if(k<=a){
            if(k==1){
                for (int f=1;f<=a-k;f++){
                    cout <<" ";
                }
                cout<<"*";
                for (int f=1;f<=a*2-3-(a-k)*2;f++){
                    cout <<" ";
                }
            }
            else{
                for (int f=1;f<=a-k;f++){
                    cout <<" ";
                }
                cout<<"*";
                for (int f=1;f<=a*2-3-(a-k)*2;f++){
                    cout <<" ";
                }
                cout<<"*";
            }
            cout<<endl ;
        }else {
            if(k==a*2-1){
                for (int f=1;f<=a-b;f++){
                    cout <<" ";
                }
                cout<<"*";
                for (int f=1;f<=a*2-3-(a-b)*2;f++){
                    cout <<" ";
                }
            }
            else{
                for (int f=1;f<=a-b;f++){
                    cout <<" ";
                }
                cout<<"*";
                for (int f=1;f<=a*2-3-(a-b)*2;f++){
                    cout <<" ";
                }
                cout<<"*";
            }
            cout<<endl ;
        }
    }
    return 0;
}