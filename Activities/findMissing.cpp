//Program to determine the missing element using summation formula
#include <iostream>
#include <numeric>

using namespace std;

int findMissing(int arr[], int N){
    int n = N + 1; // range is [1,n]
    int totalSum = n * (n + 1) / 2;

    //sum of elements in array
    int arrSum = accumulate(arr, arr + N, 0);
    //missing number
    return totalSum - arrSum;
}

int main(){
    int arr[] = {10, 8, 9, 7, 1, 2, 5, 4, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Missing number: " << findMissing(arr, n) << endl;
    return 0;
}