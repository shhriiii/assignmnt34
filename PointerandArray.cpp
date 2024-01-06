#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int* ptr=arr;
    cout<<ptr<<endl; //both willl give same address as it store the adress of the first element of the array
    cout<<&arr;
}
