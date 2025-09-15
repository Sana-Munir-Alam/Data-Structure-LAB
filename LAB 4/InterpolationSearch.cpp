#include <iostream>
using namespace std;
  
int InterpolationSearch(int Array[], int Size, int Value){
    int Low = 0;
    int High = (Size - 1);
    // Since Array is sorted the element has to be present within that range to be found
    while (Low <= High && Value >= Array[Low] && Value <= Array[High]){
        if (Low == High){
            if (Array[Low] == Value){
                return Low;             // Value Found
            }
            return -1;                  // Value Not Found
        }
        // Estimate the Position
        int pos = Low + (Value - Array[Low]) *(High - Low)/(Array[High] - Array[Low]);

        // Condition of target found
        if (Array[pos] == Value){
            return pos;
        } else if (Array[pos] < Value){  // If Value is greater, Value is in upper part
            Low = pos + 1;
        } else {                        // If Value is lesser, Value is in the Lower part
            High = pos - 1;
        }
    }
    return -1;
}
  
// Main function
int main(){
    int Array[] = {10, 12, 13, 16, 18, 19, 20, 21, 22, 23, 24, 33, 35, 42, 47};
    int Size = sizeof(Array)/sizeof(Array[0]);
  
    int Value1 = 18; // Element to be searched exist
    int Value2 = 67; // Element to be searched DOESNT exist
    
    // Printing Array
    cout << "Array: {";
    for (int i = 0; i < Size; i++){
        cout << Array[i] << ", ";
    }
    cout << "}\n\nFirst Value to be Searched: " << Value1;
    // Searching for that Value
    int Result = InterpolationSearch(Array, Size, Value1);
    if (Result != -1) cout << "\nElement found at Index: " << Result;
    else cout << "\nElement not found.";

    cout << "\n\nSecond Value to be Searched: " << Value2;
    // Searching for that Value
    Result = InterpolationSearch(Array, Size, Value2);
    if (Result != -1) cout << "\nElement found at Index: " << Result;
    else cout << "\nElement not found.";

    return 0;
}
