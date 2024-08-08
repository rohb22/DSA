#include "binary_search.h"

int binarySearchNumber(int arr[], int size ,int target){
    int left = 0; // start of the array
    int right = size - 1; // end of the array

    // Until the left doesn't surpass the right 
    while(left <= right){

        int mid = (left + right) / 2;
        int value = arr[mid];

        if(value== target) {
            // target found return index
            return mid;
        }
        else if (value > target)
        {
            // if the value is bigger than the target we can neglect the previous right part of the array
            right = mid - 1;
        }
        else{

            // if the value is smaller than the target we can neglect the previous left part of the array
            left = mid + 1;
        }
    }
    // target is not in the array
    return -1;
}


int binarySearchString(std::string arr[],int size, std::string target) {
    int left = 0; // start of the array
    int right = size - 1; // end of the array

    // Until the left doesn't surpass the right 
    while(left <= right){

        int mid = (left + right) / 2;
        std::string value = arr[mid];

        if(value== target) {
            // target found return index
            return mid;
        }
        else if (value > target)
        {
            // if the value is bigger than the target we can neglect the previous right part of the array
            right = mid - 1;
        }
        else{

            // if the value is smaller than the target we can neglect the previous left part of the array
            left = mid + 1;
        }
    }
    // target is not in the array
    return -1;   
}


// Same thing but with the use of vector
int binarySearchNumberV(std::vector<int> arr, int target){
    int left = 0;
    int right = arr.size() - 1;

    // Until the left doesn't surpass the right 
    while(left <= right){

        int mid = (left + right) / 2;
        int value = arr[mid];

        if(value== target) {
            // target found return index
            return mid;
        }
        else if (value > target)
        {
            // if the value is bigger than the target we can neglect the previous right part of the array
            right = mid - 1;
        }
        else{

            // if the value is smaller than the target we can neglect the previous left part of the array
            left = mid + 1;
        }
    }
    // target is not in the array
    return -1;
}

// Same thing but with the help of vector
int binarySearchStringV(std::vector<std::string> arr, std::string target){
    int left = 0;
    int right = arr.size() - 1;

    // Until the left doesn't surpass the right 
    while(left <= right){

        int mid = (left + right) / 2;
        std::string value = arr[mid];

        if(value == target) {
            // target found return index
            return mid;
        }
        else if (value > target)
        {
            // if the value is bigger than the target we can neglect the previous right part of the array
            right = mid - 1;
        }
        else{

            // if the value is smaller than the target we can neglect the previous left part of the array
            left = mid + 1;
        }
    }
    // target is not in the array
    return -1;
}