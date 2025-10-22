#include<iostream>
using namespace std;

int main()
{
        //reverse an array//
      int arr{}={1,2,3,4,5};

      int n=sizeof(arr)/sizeof(arr[0]);
      int start=0;
      int end=n-1;
      
      
      for(int i=0;i<n/2;i++)
      {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
      }
      // find min and max in an array//
      int arr1[]={3,5,1,8,2};
      int min=arr1[0];
      int max=arr1[0];
      int size=sizeof(arr1)/sizeof(arr1[0]);
      for(int i=1;i<size;i++)
      {
            if(arr1[i]<min)
                  min=arr1[i];
            if(arr1[i]>max)
                  max=arr1[i];
      }
      cout<<"Min element is: "<<min<<endl;
      cout<<"Max element is: "<<max<<endl;
      return 0;
}     

// Find Second Largest Element
int arr2[]={3,5,1,8,2};
int second_max=INT_MIN;
int max=INT_MIN;
for(int i=0;i<sizeof(arr2)/sizeof(arr2[0]);i++)
{
      if(arr2[i]>max)
      {
            second_max=max;
            max=arr2[i];
      }
      else if(arr2[i]>second_max && arr2[i]<max)
      {
            second_max=arr2[i];
      }
}
cout<<"Second largest element is: "<<second_max<<endl;
