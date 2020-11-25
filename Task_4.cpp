/*S M Ragib Shahriar Islam
Medical Imaging and Applications(MAIA)

Task_4:
Pascal triangle

This is another classic C++ exercise about using two-dimensional array of C++.
By using two-dimensional array, write C++ program to display a table that represents a Pascal triangle of any size.
In Pascal triangle, the first and the second rows are set to 1.
Each element of the triangle (from the third row downward) is the sum of the element directly above it and the element to the left of the element directly above it.
See the example Pascal triangle(size=5) below:
1
1	1
1	2	1
1	3	3	1
1	4	6	4	1
*/

#include<iostream>

int pascal_triangle(int tr_size)
{
int arr[tr_size][tr_size];
arr[0][0] = 1;
std::cout<<"The Pascal Triangle of size "<<tr_size<<" is given below:"<<std::endl;
std::cout<<arr[0][0]<<std::endl;
for(int i=0; i<tr_size-1; i++)
{
    arr[i+1][0] = 1;
    std::cout<<arr[i+1][0]<<"\t";
    for(int j=0; j<i; j++)
    {
        arr[i+1][j+1] = arr[i][j]+arr[i][j+1];
        std::cout<<arr[i+1][j+1]<<"\t";
    }
    arr[i+1][i+1] = 1;
    std::cout<<arr[i+1][i+1]<<std::endl;
}
return 0;
}

int main()
{
    int triangle_size;
    std::cout<<"Please enter the Pascal Triangle Size:"<<std::endl;
    std::cin>>triangle_size;
    pascal_triangle(triangle_size);

    return 0;
}
