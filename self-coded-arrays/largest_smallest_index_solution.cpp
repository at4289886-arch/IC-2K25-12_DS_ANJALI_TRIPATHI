//find largest and smallest no. in an array with thier index.
#include <iostream>
#include <climits>
using namespace std;

int main() 
{
    int num[7]={1,2,3,4,5,6,7};
    int smallest=INT_MAX;
    int minindex=0;
    int largest=INT_MIN;
    int maxindex=0;
    for(int i=0;i<7;i++){
        if(num[i]<smallest){
            smallest=num[i];
            minindex=i;
            
        }
        if(num[i]>largest){
            largest=num[i];
            maxindex=i;
            
        }
    }
    cout<<"smallest number:"<<smallest<<endl<<"at index:"<< minindex<<endl;
    cout<<"largest number:"<<largest<<endl<<"at index:"<<maxindex<<endl;
    return 0;
}


/* OUTPUT OF THIS CODE
smallest number:1
at index:0
largest number:7
at index:6
*/


