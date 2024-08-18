#include "heapSort.h"
#include <iostream>


// Or you can simply use std::swap but nah
void swap(int arr[], int pos1, int pos2){

    // Assign one of the values to a temporary variable
    int tmp = arr[pos1];

    // Change the value of the array that you created a temporary copy to the value of other array
    arr[pos1] = arr[pos2];

    // Change the value of the other array to the copy
    arr[pos2] = tmp;

    return;
}


// This heapify the array making sure that the highest value in the array will be the first element hence called max heap 
void heapify(int arr[], int N, int i){

    // Assume that the largest value is the ith index given
    int largest = i;
    
    // Assign the left and right child indeces of the ith index
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    // if there is a left child, and its greater than the value of the assumed largest value then set the largest index to be the left index
    if (left < N && arr[left] > arr[largest]){
        largest = left;
    }

    // if there is a right child, and its greater than the value of the assumed largest value then set the largest index to be the right index
    if (right < N && arr[right] > arr[largest]){
        largest = right;
    }

    // Check if there is changes in the largest index, if there is it means we need to switch the previous largest to new largest
    if (largest != i) {
        swap(arr, largest, i);

        // Using recursion we need to fix the affected subtree, basically when we change positions we need to take account the lower depth childrens 
        // making sure that the parents are always greater than the child
        heapify(arr, N, largest);
    }

    return;
}   

// The main function that basically sort the array
void heapSort(int arr[], int N) {

    // heapify the array starting at the lower bound which we can get by N / 2 ( there is -1 because of 0 indexing) 
    // basically heapify until the largest number is at the start of the array
    for (int i = (N/2) - 1; i >= 0; i--){
        heapify(arr, N, i);
    }

    // This is where we take off the first element which is in this case will be the largest because of the previous process
    // We switch it to the last element in the array
    // We loop until there is only one element that is not heapify it means that all elements are sorted so it's safe to assume that the last element is the lowest value
    for (int i = N - 1; i > 0; i--){
        swap(arr, 0, i);

        // This heapify the array excluding the last element, because its already the largest we just need to sort the remaining ones
        heapify(arr, i, 0);
    }


}

// Just a utility function for debugging and reading the array
void printArray(int arr[], int N){
    for(int i = 0; i < N; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}


int main(void){
    int arr[] = {2, 10, 8, 6, 1, 7, 12};
    int size = sizeof(arr) / sizeof(int);
    std::cout << "Unsorted Array: ";
    printArray(arr,size);
    heapSort(arr, size);
    std::cout << "Sorted Array: ";
    printArray(arr,size);
}