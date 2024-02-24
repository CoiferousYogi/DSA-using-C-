/*
    Given an array, predict if the array contains duplicates or not.
*/

#include<iostream>
int main()
{
        int n;
        std::cout<<"A program to check if an array contains duplicates."<<std::endl;

        std::cout<<"Enter the number of terms: ";
        std::cin>>n;

        int arr[n];
        std::cout<<"Enter the terms: ";
        for(int i=0; i<n; i++)
        {
            std::cin>>arr[i];
        }

        // checking for duplicates
        bool check = false;
        for(int i=0; i<n; i++)
        {
           for(int j=i+1; j<n; j++)
           {
                if(arr[i] == arr[j])
                {
                    check=true;
                    break;
                }
           }
        }

        if(check == true)
        {
            std::cout<<"Array contains duplicates";
        }
        else
        {
            std::cout<<"No duplicates found";
        }
    return 0;
}