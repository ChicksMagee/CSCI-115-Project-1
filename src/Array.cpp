// Compiler would complain every time we tried to put our Array source code in a .cpp file so we had to put everything into the header file. We think this is a CODE_BLOCKS specific problem.
/*
#include <iostream>
#include <cstdlib>
#include "Array.h"

using namespace std;

template <typename T>
Array<T>::Array(){ // Default Constructor
}

template <typename T>
Array<T>::Array(int length){ // Copy Constructor given a size
   sizeOfArr = length;
 arr = new int[sizeOfArr];
 for(int i =0;i<sizeOfArr;i++){
    arr[i]=i; // sets each position equal to current i value
 }
}

template <typename T>
Array<T>::~Array(){ // Deconstructor
}

template<typename T>
void Array<T>::orderArr(int length){ // Creates a random sorted array in ascending order
    sizeOfArr = length;
    arr = new int[sizeOfArr];
    int value = 0, finalVal = 0;

    for(int i=0; i<length;i++){
      value = rand()/1000;
       finalVal = finalVal + value;
       arr[i] = finalVal; // Adda a random higher value in each position for more variance in array values
    }
}

template<typename T>
void Array<T>::randArr(int length){ // Creates a Random Array
    sizeOfArr = length;
    arr = new int[sizeOfArr];

    for(int i=0; i<sizeOfArr;i++){
     arr[i] = rand()/1000;
    }
}

template <typename T>
void Array<T>::inverseArr(int length){ // Creates a reverse order array by calling orderArr and then reversing the values
 orderArr(length);
 sizeOfArr = length;
 int temp;

 for(int i=0; i<sizeOfArr/2;i++)
 {
 temp = arr[i];
 arr[i] = arr[sizeOfArr-i-1];
 arr[sizeOfArr-i-1] = temp;
 }
}

template<typename T>
void Array<T>::almostOrder(int length){ // Creates a 10% shuffled array by shuffling the positions in the 90-100% positions
    sizeOfArr = length;
    arr = new T [sizeOfArr];
    int i = 0;
    for(i=0; i<(sizeOfArr*90)/100;i++){ // creates a sorted 90% array
      arr[i] = i;
    }
    for(int j=((sizeOfArr*90)/100);j<sizeOfArr;j++){ // creates random values for the 90-100% positions
        int value = rand()/1000;
       int finalVal = i + value;
         arr[j] = finalVal;
    }
}

template <typename T>
void Array<T>::displayArr(){ // displays the contents of the array
    for(int i=0;i<sizeOfArr;i++){
        cout<<arr[i]<<", ";
    }
}

template <typename T>
void Array<T>::swapping(T*A,int i, int j ){ // Swaps the values in the i and j position in the array
    int temp = A[i];
    A[i]= A[j];
    A[j] = temp;
}

template <typename T>
void Array<T>::insertionSort(){ // sorts the array using Insertion Sort Implementation
for(int i=1; i<sizeOfArr;i++){
    int current = arr[i];
    int k;
    for(k = i-1; k>=0 && arr[k] > current;k--){
        arr[k+1] = arr[k];
    }
    arr[k+1] = current;
    }
}

template <typename T>
void Array<T>::selectionSort(){ // sorts the array using Selection Sort Implementation
for(int index=0;index<sizeOfArr;index++){
    double min = arr[index];
    int minIndex =index;
    for(int j=index+1; j<sizeOfArr;j++){
        double temp = arr[j];
        if(temp<min){
             min = temp;
             minIndex = j;
            }
        }
        if(min<arr[index]){
            swapping(arr,minIndex,index);
        }
    }
}

template <typename T>
void Array<T>::bubbleSort(){ // Sorts the array by bubbling up the higher values into their correct position
    for(int i=0;i<sizeOfArr;i++){
        for(int j=0;j<sizeOfArr-1;j++){
            if(arr[j]>arr[j+1])
                swapping(arr,j,j+1);
            }
        }
}

template<typename T>
T Array<T>::partition(T * A,int StartIndx,int endIndx){ // Partitions the array and returns a pivot point in the array
for(int i = StartIndx; i < endIndx; i++){
    if(A[i] <= A[endIndx]){
    swapping(A,i,StartIndx);
    StartIndx++;
 }
}
 swapping(A,StartIndx,endIndx);
 return StartIndx;
}

template<typename T>
T Array<T>::quickSort(T *A,int Left,int Right){ // Sorts the array using Quick Sort Implementation
     if(Left<Right){
        int pivot= partition(A,Left,Right);
        quickSort(A,Left,pivot-1);
        quickSort(A,pivot+1,Right);
    }
}

template<typename T>
void Array<T>::merge(T *arr, int leftBottom, int leftTop, int rightBottom, int rightTop){ // merges the divided array elements back into one array
 int length = rightTop-leftBottom+1;
 T *temp = new T[length];
 int left = leftBottom;
 int right = rightBottom;
 for (int i = 0; i < length; ++i) {
 if (left > leftTop)
 temp[i] = arr[right++];
 else if (right > rightTop)
 temp[i] = arr[left++];
 else if (arr[left] <= arr[right])
 temp[i] = arr[left++];
 else
 temp[i] = arr[right++];
 }
 for (int i=0; i< length; ++i)
 arr[leftBottom++] = temp[i];
}

template<typename T>
void Array<T>::mergeSort(T *arr, int left, int right){ // Sorts the array using Merge Sort Implementation
if(left >= right) return;
else {
 int mid = (left + right)/2;
 mergeSort(arr, left, mid);
 mergeSort(arr, mid+1, right);
 merge(arr, left,mid,mid+1,right);
 }
}
*/
