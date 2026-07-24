#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size of array";
    int n;
    cin>>n;
    int array1[n];

    

    cout<<"Enter the element";
    for(int i=0;i<n-1;i++)
    {
        cin >> array1[i];
    }


    int num;
    cout<< "Enter the element to insert";
    cin>> num;

    int pos;
    cout<<"Enter the position";
    cin>>pos;

    for(int i=n-2;i>=pos-1;i--)
    {
        array1[i+1]=array1[i];
    }
    
    array1[pos-1]=num;


    cout<<"After inserting";
    for(int k=0;k<n;k++)
    {
        cout<<array1[k];
    }

}