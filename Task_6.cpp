/*S M Ragib Shahriar Islam
Medical Imaging and Applications(MAIA)

Task_6:
Write a program to accept five integer values from keyword.
The five values will be stored in an array using a pointer. Then print the elements of the array on the screen.
*/

#include<iostream>

int main()
{
    int values[5];
    int* ptr[5];

    for(int i=0; i<5; i++)
    {
        ptr[i] = &values[i];
    }

    for(int i=0; i<5; i++)
    {
        std::cout<<"Enter Value_"<<i+1<<std::endl;
        std::cin>>*ptr[i];
    }
    std::cout<<"\nThe stored array is the following:\t";
    for(int i=0; i<5; i++)
    {
        std::cout<<*ptr[i]<<"\t";
    }
    return 0;
}
