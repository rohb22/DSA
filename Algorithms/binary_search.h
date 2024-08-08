#ifndef BINARY_SEARCH_H 
#define BINARY_SEARCH_H

#include <string>
#include <vector>


// functions declarations
int binarySearchNumber(int arr[], int size,int target);
int binarySearchString(std::string arr[], int size, std::string target);
int binarySearchNumberV(std::vector<int> arr, int target);
int binarySearchStringV(std::vector<std::string> arr, std::string target);

#endif
