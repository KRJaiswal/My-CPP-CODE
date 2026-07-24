#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size of array";
    int n;
    cin>>n;
    int array1[n];

    

    cout<<"Enter the element";
    for(int i=0;i<n;i++)
    {
        cin >> array1[i];
    }

    for(int j=0;j<n/2;j++)
    {
        int temp;
        temp=array1[j];
        array1[j]=array1[n-1-j];
        array1[n-1-j]=temp;
    }
    
    cout<< "Element with reverse order " << "\n";
    for(int i=0;i<n;i++)
    {
        cout << array1[i]<<"\n";
    }

}