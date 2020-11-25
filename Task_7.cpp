/*S M Ragib Shahriar Islam
Medical Imaging and Applications(MAIA)

Task_7:
Write a C++ function to sort an array of ten integer values in ascending order.

The function will accept two arguments-- a pointer that points to the array and the array size.
The function returns a pointer that points to the sorted array.
*/

#include<iostream>

int* sort_ascending(int* ar, int s1)
{
    int* a  = ar;
    int temp_value;
    for(int i=0;i<s1;i++)
        {
            for(int j=0;j<s1;j++)
            {
                if(a[i]<ar[j])
                {
                    temp_value=a[i];
                    a[i]=ar[j];
                    ar[j]=temp_value;
                }
                else
                {

                }
            }
        }
    return a;
}

int main()
{
    int s;
    std::cout<<"Please input the array size:"<<std::endl;
    std::cin>>s;
    int arr [s];
    for(int i=0; i<s; i++)
    {
        arr[i]=rand()%300;
    }
    std::cout<<"The Randomely generated array of numbers:\n";
    for(int i=0; i<s; i++)
    {
        std::cout<<arr[i]<<"\t";
    }

    sort_ascending(arr,s);
    std::cout<<"\nThe Ascending ordered array is: \n";
    for(int i=0;i<s;i++)
        std::cout<<arr[i]<<"\t";

    return 0;
}
