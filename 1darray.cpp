#include <iostream>
using namespace std;
//This program finds maximum,minimum,sum,and counts positive,negative,even,odd elements of an array
int main() {

    int arr[] = {10, -5, 20, 7, -2, 15, 8};
    int n = 7;

    int maximum = arr[0];
    int minimum = arr[0];
    int sum = 0;

    int positive = 0;
    int negative = 0;
    int even = 0;
    int odd = 0;

    for(int i = 0; i < n; i++) {

        // Maximum
        if(arr[i] > maximum) {
            maximum = arr[i];
        }

        // Minimum
        if(arr[i] < minimum) {
            minimum = arr[i];
        }

        // Sum
        sum = sum + arr[i];

        //  check Positive and Negative number
        if(arr[i] >= 0)
            positive++;
        else
            negative++;

        //check even or odd
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Maximum Element = " << maximum << endl;
    cout << "Minimum Element = " << minimum << endl;
    cout << "Sum = " << sum << endl;
    cout << "Positive Elements = " << positive << endl;
    cout << "Negative Elements = " << negative << endl;
    cout << "Even Elements = " << even << endl;
    cout << "Odd Elements = " << odd << endl;

    return 0;
}   
