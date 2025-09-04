#include<iostream>
using namespace std;
int main(){
    int a[5],i;
    cout<<"Enter elements of array\n";
    for ( i = 0; i < 5; i++)
    {
        cin>>a[i];
    }
    for ( i = 0; i < 5; i++)
    {
        cout<<i+1<<"element is"<<a[i]<<"\n";
    }
    

}