#include<iostream>
using namespace std;

int main(){
    int arr[5]={4,2,7,1,9};
    int min=arr[0], second=min;

    for(int i=1;i<5;i++){
        if(arr[i]<min){
            second=min;
            min=arr[i];
        }
        else if(arr[i]<second && arr[i]!=min){
            second=arr[i];
        }
    }

    cout<<"Second smallest = "<<second;
}
