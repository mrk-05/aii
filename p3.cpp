//.Implement Greedy search algorithm for any of the following application:

#include <iostream>
using namespace std;


void selectionsort(int arr[],int n);


int main()
{
    int i,x,n;
    cout<<"Enter The Size Of Array \n";
    cin>>n;
    int arr[n];
    cout<<"Enter The Element Of Array \n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selectionsort(arr,n);




    return 0;
}




void selectionsort(int arr[],int n)
{
    int i,j,temp,min;
  
    for(i=0;i<n-1;i++)
    {
  min=i;
        for(j=i+1;j<n;j++)
        {
         if(arr[j]<arr[min])
         {
          min=j;
         }
 }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp; 
    }
    
    cout<<"\nSORTED ARRAY IN ASCENDING ORDER \n\n";
  
for(i=0;i<n;i++) 
   {
    cout<<arr[i]<<" ";
   }


cout<<"\n\nSORTED ARRAY IN DESCENDING ORDER \n"<<endl;
  
for(i=n-1;i>=0;i--) 
   {
    cout<<arr[i]<<" ";
   }
}




