// A program to calculate the sum of all elements of an array

#include<iostream>
int main()
{
        std::cout<<"A program to calculate the sum of elements of an array: "<<std::endl;

        int n;
        std::cout<<"Enter the number of terms: ";
        std::cin>>n;

        int arr[n];
        std::cout<<"Enter the terms: ";
        for(int i=0; i<n; i++)
        {
            std::cin>>arr[i];
        }

        int sum = 0;
        for(int i=0; i<n; i++)
        {
            sum += arr[i];
        }

        std::cout<<"The sum is: "<<sum<<std::endl;
    return 0;
}