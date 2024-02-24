/*
    Find the minimum value out of all elements in the array.
*/

#include<iostream>
int main()
{
        std::cout<<"A program to find the minimum element in an array..."<<std::endl;

        int n;
        std::cout<<"Enter the number of terms: ";
        std::cin>>n;

        int arr[n];

        std::cout<<"Enter the terms: ";
        for(int i=0; i<n; i++)
        {
            std::cin>>arr[i];
        }

        int minEle = INT32_MAX;
        for(int i=0; i<n; i++)
        {
            if(arr[i] < minEle)
            {
                minEle = arr[i];
            }
        }

        std::cout<<"The minimum element is: "<<minEle<<std::endl;
    return 0;
}