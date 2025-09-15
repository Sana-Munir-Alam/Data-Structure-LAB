#include <iostream>
using namespace std;

int BinarySearch(int *Array, int Value, int Size) {
    int LB = 0;
    int HB = Size - 1;
    while (LB <= HB) {
        int Mid = LB + (HB - LB) / 2;

        if (Array[Mid] == Value){         // Check if Value is present at Mid
            return Mid;                 // VALUE FOUND
        } else if (Array[Mid] < Value) {  // If Value greater, ignore left half
            LB = Mid + 1;
        } else{                         // If Value is smaller, ignore right half
            HB = Mid - 1;
        }
            
    }
    // If the Value was not found than return -1
    return -1;
}

int main() {
    int Array[5] = { 2, 3, 4, 10, 40 };
    int Size = 5;
    int Value1 = 10;
    int Value2 = 76;
   
    // Printing Array
    cout << "Array: {";
    for (int i = 0; i < Size; i++){
        cout << Array[i] << ", ";
    }
    cout << "}\n\nFirst Value to be Searched: " << Value1;
    // Searching for that Value
    int Result = BinarySearch(Array, Value1, Size);
    if(Result == -1) cout << "\nElement is not present in Array";
    else cout << "\nElement Found at Index: " << Result;

    cout << "}\n\nSecond Value to be Searched: " << Value2;
    // Searching for that Value
    Result = BinarySearch(Array, Value2, Size);
    if(Result == -1) cout << "\nElement is not present in Array";
    else cout << "\nElement Found at Index: " << Result;
    return 0;
}
