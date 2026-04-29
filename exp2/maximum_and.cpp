#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;

    int arr[100];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxAND = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int currentAND = arr[i] & arr[j];
            if(currentAND > maxAND){
                maxAND = currentAND;
            }
        }
    }
    cout<<"Maximum AND value among any two elements is: "<<maxAND<<endl;
}
