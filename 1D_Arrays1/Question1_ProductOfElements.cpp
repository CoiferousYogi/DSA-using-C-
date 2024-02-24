/*
    Calculate the product of all the elements in the given array.
*/ 

#include<iostream>
int main()
{
        std::cout<<"A program to find the product of all elements in an array: "<<std::endl;
        
        int n;
        std::cout<<"Enter the number of terms: ";
        std::cin>>n;

        int arr[n];
        std::cout<<"Enter the terms: ";
        for(int i=0; i<n; i++)
        {
            std::cin>>arr[i];
        }

        // calculating product
        int prod = 1;
        for(int i=0; i<n; i++)
        {
            prod *= arr[i];
        }

        std::cout<<"Product is: "<<prod<<std::endl;
    return 0;
}

