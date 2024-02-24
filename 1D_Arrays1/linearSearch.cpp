// Implementing the linear search algorithm

#include<iostream>
int main()
{
        int n;
        std::cout<<"A program for implementing linear search..."<<std::endl;

        std::cout<<"Enter the number of terms: ";
        std::cin>>n;

        int arr[n];
        std::cout<<"Enter the terms: ";
        for(int i=0; i<n; i++)
        {
            std::cin>>arr[i];
        }

        int se;
        std::cout<<"Enter the term to search: ";
        std::cin>>se;

        for(int i=0; i<n; i++)
        {
            if(arr[i] == se)
            {
                std::cout<<"The index of element: "<<i<<std::endl;
                break;
            }
            else
            {
                continue;
            }
        }
    return 0;
}