#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size of array";
    int n;
    cin>>n;
    int array1[n];

    int sum=0;

    cout<<"Enter the element";
    for(int i=0;i<n;i++)
    {
        cin >> array1[i];
        sum =sum+array1[i];
    }
     float average;

    average=(float)sum/n;
    cout << "The sum is " << sum <<" and the average is " << average;

}