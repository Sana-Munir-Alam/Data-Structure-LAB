#include <iostream>

using namespace std;

int main(){
    int array[10] = {14, 12, 1, 4, 2, 4, 5, 21, 17, 6};
    int Min = array[0];     // Storing the initial value to use it as a comparison
    // Finding the Minimum Value in the Array
    for (int i = 0; i < 10; i++){
        if(array[i] < Min){
            Min = array[i];
        }
    }
    // Printing Array
    cout << "Array: ";
    for (int i = 0; i < 10; i++){
        cout << array[i] << " ";
    }
    // Printing Minimum Value
    cout << "\nMinimum Value: " << Min << endl;

    // Selection Sort
    int Size = 10;   // Array Size
    // for (int i = 0 ; i < Size-1; i++){
    //     int MinIndex = i;   // This stores 
    //     for (int j = i+1; j < Size; j++){
    //         if(array[j] < array[MinIndex]){
    //             MinIndex = j;
    //         }
    //     }
    //     // Method 1 of Swapping
    //     // swap(array[i], array[MinIndex]);
    //     // Method 2 of Swapping
    //     int Temp = array[i];
    //     array[i] = array[MinIndex];
    //     array[MinIndex] = Temp;
    //     cout << "\nSwapping Array: ";
    //     for (int i = 0; i < 10; i++){
    //         cout << array[i] << " ";
    //     }
    // }
    // Printing Array
    // cout << "\n\nSorted Array: ";
    // for (int i = 0; i < 10; i++){
    //     cout << array[i] << " ";
    // }

    // Insertion Sort
    for(int i = 1; i < Size; i++){
        int key = array[i];
        int j = i - 1; // Compare with previous values this helps know that the whole LHS is sorted

        while(j >= 0 && array[j] > key){
            array[j+1] = array[j];
            j--;
            cout << "\nSWHILE ARRAY: ";
        for (int i = 0; i < 10; i++){
            cout << array[i] << " ";
        }
        }
        array[j+1] = key;
        cout << "\n\nSwapping Array: ";
        for (int i = 0; i < 10; i++){
            cout << array[i] << " ";
        }
    }
    cout << "\n\nSorted Array: ";
    for (int i = 0; i < 10; i++){
        cout << array[i] << " ";
    }
    return 0;
}
