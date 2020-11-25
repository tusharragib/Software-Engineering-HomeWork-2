/*S M Ragib Shahriar Islam
Medical Imaging and Applications(MAIA)

Task-2:
Write a C++ program that will prompt the user to input ten integer values

The program will display the smallest and greatest of those values. It also displays the value that occurs the most.*/

#include<iostream>

int minimum(int arr[], int s)
{
    int min_value = arr[0];
    for(int i=0; i<10; i++)
    {
        if(arr[i]<min_value)
        {
            min_value = arr[i];
        }
        else
        {

        }
    }
    return min_value;
}

int maximum(int arr[], int s)
{
    int max_value = arr[0];
    for(int i=0; i<10; i++)
    {
        if(arr[i]>max_value)
        {
            max_value = arr[i];
        }
        else
        {

        }
    }
    return max_value;
}

int mode(int arr[], int s)
{
    int mode=0;
    int mode_freq=0;
    for(int i=0;i<10;i++)
    {
        int temp_mode = arr[i];
        int tempMode_freq = 0;
        for(int j=0;j<10;j++)
            {
                if(arr[i]==arr[j])
                {
                    tempMode_freq++;
                }
                else
                {

                }
                if(tempMode_freq>mode_freq)
                {
                    mode = temp_mode;
                    mode_freq = tempMode_freq;
                }
                else
                {

                }
            }
    }
    return mode;
}

int main()
{
    int arr[10];
    std::cout<<"Enter 10 integer values: "<<std::endl;
    for(int i=0; i<10; i++)
    {
        std::cin>>arr[i];
    }
    std::cout<<"\nThe Smallest value: "<<minimum(arr, 10)<<std::endl;
    std::cout<<"The Greatest value: "<<maximum(arr, 10)<<std::endl;
    std::cout<<"The value occurred most: "<<mode(arr, 10)<<std::endl;

    return 0;
}
