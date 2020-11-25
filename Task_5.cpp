/*S M Ragib Shahriar Islam
Medical Imaging and Applications(MAIA)

Task_5:
Pointer : max value

By using C++ pointer, write a C++ program to find the max of an integral data set.
The program will ask the user to input the number of data values in the set and each value.
Then your program will show the max of the data set. See example below.
Your C++ program will use a function that accepts the array of data values and its size.
The return from the function is the pointer that points to the max value.

  Enter number of data values: 3
  Enter value 1: 21
  Enter value 2: 12
  Enter value 3: 4
  The max is 21.
*/

#include<iostream>

int max_value(int a[], int s)
{
    int max_value = a[0];
    for(int i=0; i<s; i++)
    {
        if(a[i]>max_value)
        {
            max_value = a[i];
        }
        else
        {

        }
    }
    int* ptr_max_value = &max_value;
    return *ptr_max_value;
}

int main()
{
    int num_value;
    std::cout<<"Insert the number of the values:"<<std::endl;
    std::cin>>num_value;
    int arr[num_value];
    std::cout<<"Insert the values: "<<std::endl;
    for(int i=0; i<num_value; i++)
    {
        std::cout<<"Enter value_"<<i+1<<" = ";
        std::cin>>arr[i];
    }
    std::cout<<"\nThe maximum value is = "<<max_value(arr, num_value);

    return 0;
}
