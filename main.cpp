#include <iostream>
#include <fstream>
using namespace std;
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
void bubbleSort(int arr[],int n)
{
    int flag=0;
    for (int i=0;i<n-1;i++)
    {
        flag=0;
        for (int j=0;j<n-1-i;j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                flag=1;
            }
        }
        if (flag==0)
            break;
    }}
void insertionSort(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        int j=i-1;
        int x=arr[i];
        while(j>=0&&arr[j]>x)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=x;
    }
}
void selectionSort(int arr[],int n)
{
    int i,j,k;
    for (i;i<n-1;i++)
    {
        for (j=k=i;j<n;j++)
        {
            if (arr[j]<arr[k])
                k=j;
        }
        swap(arr[i],arr[k]);
    }
}
int main()
{
    int arr[1000];
    int n;
    ifstream infile("input.txt");
    infile>> n;
    for (int i=0;i<n;i++)
    {
        infile>> arr[i];
    }
    infile.close();
    //insertionSort(arr,n);
    //bubbleSort(arr,n);
    selectionSort(arr,n);
    ofstream outfile("output.txt");
    outfile<<"mang da duoc sap xep la:\n";
    for (int i=0;i<n;i++)
    {
        outfile<<arr[i]<<" ";
    }
    outfile.close();
    return 0;
}