#include <iostream>
#include <io.h>
#include <time.h>
#include <fstream>
#include <iomanip>
#include "Array.h"

int main(){
    ofstream myfile; // Output File to export results into an excel Spreadsheet
    int size = 0; // The size of the array
    Array<int> B; // Create an Array Object using default constructor
    srand (time(NULL)); // For random number generator
    myfile.open("Results.csv"); // open the output file

    if (myfile.is_open()) { // make sure file is opened correctly
        myfile << std::fixed; // fix a decimal position

        for (int i = 0; i < 1; i++){ // For 100 tests
            cout << i << endl; // shows percentage of progress through the sort
            //size = 10;
            //size = 1000;
            //size = 10000;
           // size = 100000;
           // size = 1000000;

           // B.orderArr(size); // Make a random sorted array in ascending order
            //B.randArr(size); // Make a completely random array
            //B.inverseArr(size); // make an array in reverse
            //B.almostOrder(size); // Make a 10% shuffled array at position 90-100%

            const clock_t begin_time = clock(); // Start the clock to capture time for each iteration

            //B.insertionSort(); // call insertion sort
            //B.selectionSort(); // call selection sort
            //B.bubbleSort(); // call bubble sort
            //B.quickSort(B.arr, 0, size - 1); // call quick sort
           // B.mergeSort(B.arr, 0, size -1); // call merge sort

            myfile << float( clock () - begin_time ) /  CLOCKS_PER_SEC << endl; // feed the sort time into an output file
        }
        myfile.close(); // close the file
    }
    return 0;
}

