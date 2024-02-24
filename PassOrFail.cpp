/*
    In C++, array is a collection of values of similar type. i.e, integer array, character array, etc.

*/
/*
Ques: Given an array of marks of students, if the
mark of any student is less than 35 print its roll
number. [roll number here refers to the index of the
array.]
*/

#include<iostream>
int main()
{
        std::cout<<"A program for detecting if a student has failed."<<std::endl;
        // taking array input
        int n;
        std::cout<<"Enter the number of terms: ";
        std::cin>>n;

        int arr[n];
        std::cout<<"Enter the terms: ";
        for(int i=0; i<n; i++)
        {
            std::cin>>arr[i];
        }

        std::cout<<"The entered array is: ";
        for(int j=0; j<n; j++)
        {
            std::cout<<arr[j]<<" ";
        }

        //checking the array
        std::cout<<std::endl;
        for(int i=0; i<n; i++)
        {
            if(arr[i] <35)
            {
                std::cout<<"Roll No: "<<i<<std::endl;
            }
            else
            {
                continue;
            }
        }

    /*
        The sizeOf operator can be used to determine the length of the array 
    */
        int k = sizeof(arr)/sizeof(arr[0]);
        
        std::cout<<k<<std::endl;

        std::cout<<sizeof(arr)<<std::endl; // each array element takes up 4 bytes.

        // memory allocation of arrays
        /*
            In C++, arrays are stored in contiguous memory locations. We can prove this by using pointers and references
        */
       for(int i = 0; i<n; i++)
       {
            std::cout<<&arr[i]<<std::endl;
       }
    return 0;
}