#include<iostream>
using namespace std;

int main(){
    int arr[5]={4,2,7,1,9};
    int min=arr[0], max=arr[0];

    for(int i=1;i<5;i++){
        if(arr[i]<min) min=arr[i];
        if(arr[i]>max) max=arr[i];
    }

    cout<<"Difference = "<<max-min;
}
