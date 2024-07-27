#include <iostream>
using namespace std;

int main()
{
    cout<<"Input size of array:\t";
    int n;
    cin>> n;
    cout<<endl;
    int arr[n];
    float sum = 0;
    cout<<"Input integers of array:\n";
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
        sum = sum+arr[i];
    }

    cout<< sum/n;
}
