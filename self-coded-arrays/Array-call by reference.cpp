//array by call by reference
#include <iostream>
using namespace std;
void myArray( int arr[],int size){
    for(int i=0;i<size;i++){
        arr[i]=arr[i]*2;
    }
}
int main() 
{
   int arr[]={1,2,3,4,5,6,7,8,9};
   int size=9;
   myArray(arr,size);

   for(int i=0;i<size;i++){
    cout<<arr[i]<<""<<endl;
   }
   return 0;
}
// output of this code
2
4
6
8
10
12
14
16
18
  
