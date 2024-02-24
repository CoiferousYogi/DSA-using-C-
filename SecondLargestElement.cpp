// Finding the 2nd largest element in a given array.

#include<iostream>
int main()
{
        std::cout<<"A program to find the 2nd largest element in a given array."<<std::endl;

        int n;
        std::cout<<"Enter the size of the array: ";
        std::cin>>n;

        int arr[n];
        std::cout<<"Enter the terms of the array: ";
        for(int i=0; i<n; i++)
        {
            std::cin>>arr[i];
        }

        // finding the max
        int fmax = INT32_MIN;
        for(int i=0; i<n; i++)
        {
            if(arr[i] > fmax)
            {
                fmax = arr[i];
            }
        }

        // finding the second biggest element
        int smax = INT32_MIN;
        for(int i=0; i<n; i++)
        {
            if(arr[i] > smax && arr[i] != fmax)
            {
                smax = arr[i];
            }
        }

        std::cout<<"Second largest element: "<<smax<<std::endl;

        // Another way of implementation using sort
        // Step 1: Sorting the array using in-built sort function
        //arr.sort();


    return 0;
}