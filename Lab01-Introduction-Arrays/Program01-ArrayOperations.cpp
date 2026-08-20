// array operation
#include <iostream>
using namespace std;
int main() {
   int arr[100], size, element, position;
   // **1. Array Creation**
   cout << "Enter the size of the array: ";
   cin >> size;
   cout << "Enter " << size << " elements: ";
   for (int i = 0; i < size; i++) {
       cin >> arr[i];
   }
   // **2. Traversing the Array**
   cout << "Array elements are: ";
   for (int i = 0; i < size; i++) {
       cout << arr[i] << " ";
   }
   cout << endl;
   // **3. Insertion Operation**
   cout << "Enter the element to insert: ";
   cin >> element;
   cout << "Enter the position to insert (1-based index): ";
   cin >> position;
   if (position > 0 && position <= size + 1) {
       for (int i = size; i >= position; i--) {
           arr[i] = arr[i - 1];
       }
       arr[position - 1] = element;
       size++;
       cout << "Array after insertion: ";
       for (int i = 0; i < size; i++) {
           cout << arr[i] << " ";
       }
       cout << endl;
   } else {
       cout << "Invalid position!" << endl;
   }
   // **4. Deletion Operation**
   cout << "Enter the position to delete (1-based index): ";
   cin >> position;
   if (position > 0 && position <= size) {
       for (int i = position - 1; i < size - 1; i++) {
           arr[i] = arr[i + 1];
       }
       size--;
       cout << "Array after deletion: ";
       for (int i = 0; i < size; i++) {
           cout << arr[i] << " ";
       }
       cout << endl;
   } else {
       cout << "Invalid position!" << endl;
   }
   return 0;
}

// output of this code
Enter the size of the array: 10
Enter 10 elements: 12 23 34 45 56 67 78 89 95 39
Array elements are: 12 23 34 45 56 67 78 89 95 39 
Enter the element to insert: 25
Enter the position to insert (1-based index): 3
Array after insertion: 12 23 25 34 45 56 67 78 89 95 39 
Enter the position to delete (1-based index): 4
Array after deletion: 12 23 25 45 56 67 78 89 95 39 
