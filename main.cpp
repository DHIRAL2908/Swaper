#include <iostream>
#include <windows.h>

using namespace std;

int verifylen(int a)
{
    if(a<0){
            cout<<"Invalid input, please enter a digit greater than 0..."<<endl;
            system("EXIT");
    }
}
int verify(int b)
{
    if(b>9 || b<0){
            cout<<"Invalid input, please enter a digit greater than 0 and less than 10..."<<endl;
            system("EXIT");
        }
}
int main()
{
    int y;
    cout<<"Please enter the length of the no.: ";
    cin>>y;
    verifylen(y);
    int a=y-1;
    int x[a];
    cout<<"Please enter the no. with digits separated by pressing enter/return key. :"<<endl;
    for(int d=0;d<=a;d++){
        cin>>x[d];
        verify(x[d]);
    }
    cout<<"You have entered this no.: ";
        for(int d=0;d<=a;d++){
        cout<<x[d];
    }

    //Start the swapping...
    for(int i=0;i<=a/2;i++){
        int temp;
        temp=x[a-i];
        x[a-i]=x[i];
        x[i]=temp;
    }
    //End the swapping...
    cout<<endl<<"The reversed no. is: ";
        for(int d=0;d<=a;d++){
        cout<<x[d];
    }cout<<endl;

     system("PAUSE");
}
