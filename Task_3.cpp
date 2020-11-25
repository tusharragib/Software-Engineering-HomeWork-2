/*S M Ragib Shahriar Islam
Medical Imaging and Applications(MAIA)

Task-3:
Write a C++ program (using function) to sort 10 integer values.*/

#include<iostream>

int sort_descending(int a[],int s)
{
    for(int i=0; i<s; i++)
    {
        for(int j=0; j<s; j++)
        {
            if (a[i]>a[j])
            {
                int temp_value = a[i];
                a[i] = a[j];
                a[j] = temp_value;
            }
        }
    }
    for(int i=0; i<s; i++)
    {
        std::cout<<a[i]<<"\t";
    }
    return 0;
}

int sort_ascending(int a[],int s)
{
    for(int i=0; i<s; i++)
    {
        for(int j=0; j<s; j++)
        {
            if (a[i]<a[j])
            {
                int temp_value = a[i];
                a[i] = a[j];
                a[j] = temp_value;
            }
        }
    }
    for(int i=0; i<s; i++)
    {
        std::cout<<a[i]<<"\t";
    }
    return 0;
}

int main()
{
    int arr_size;
    std::cout<<"Enter the number of integer values: "<<std::endl;
    std::cin>>arr_size;
    int arr[arr_size];
    std::cout<<"Enter the integer values:"<<std::endl;
    for(int i=0; i<arr_size; i++)
    {
        std::cin>>arr[i];
    }
    std::cout<<"The Descending sorting of the integers:"<<std::endl;
    sort_descending(arr, arr_size);
    std::cout<<"\nThe Ascending sorting of the integers:"<<std::endl;
    sort_ascending(arr, arr_size);

    return 0;
}
