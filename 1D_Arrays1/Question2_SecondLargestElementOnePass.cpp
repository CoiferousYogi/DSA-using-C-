/*
    Find the second largest element in the given Array in one pass.
*/

#include<iostream>
int main()
{
        std::cout<<"A program to find the 2nd largest element in an array in 1 pass..."<<std::endl;
        
        int n;
        std::cout<<"Enter the number of terms: ";
        std::cin>>n;

        int arr[n];
        std::cout<<"Enter the terms: ";
        for(int i=0; i<n; i++)
        {
            std::cin>>arr[i];
        }

        int smaxVal = INT32_MIN;
        int maxVal = INT32_MIN;

        for(int i=0; i<n; i++)
        {
            if(arr[i] > maxVal)
            {
                // swap values of maxVal and smaxVal
                smaxVal = maxVal;
                maxVal = arr[i];
            }
            else if((arr[i] != maxVal) && (arr[i] > smaxVal))
            {
                smaxVal = arr[i];
            }
        }

        if(smaxVal == INT32_MIN)
        {
            std::cout<<"No second max exists"<<std::endl;
        }
        else
        {
            std::cout<<"Second Max = "<<smaxVal<<std::endl;
        }
    return 0;
}