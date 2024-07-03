#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                // swap values in array
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
// method to display the sorted array
void printArray(int arr[], int size){
    for(int i = 0; i < size; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {45, 34, 46, 78, 120, 15, 67};
    // define the length of array
    int n = sizeof(arr)/sizeof(arr[0]);
    
    bubbleSort(arr, n);
    cout << "Sorted Array: ";
    printArray(arr, n);
    return 0;
}