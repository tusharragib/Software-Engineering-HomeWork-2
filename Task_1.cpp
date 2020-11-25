/*S M Ragib Shahriar Islam
Medical Imaging and Applications(MAIA)

Task_1:
Calculator menu.
MENU
          1. Add
          2. Subtract
          3. Multiply
          4. Divide
          5. Modulus
Enter your choice: 1
Enter your two numbers: 12 15
Result: 27

Continue? y

The program also asks the user to decide whether he/she wants to continue the operation. If he/she input ‘y’, the program will prompt the user to choose the operation gain. Otherwise, the program will terminate.*/


#include<iostream>

double add(double a, double b)
{
    return a+b;
}

double subtract(double a, double b)
{
    return a-b;
}

double multiplication(double a, double b)
{
    return a*b;
}

double division(double a, double b)
{
    return a/b;
}

int mod(int a, int b)
{
    return a%b;
}

int main()
{
    char cont = 'y';
    do
    {
        int op;
        std::cout<<"Calculator Menu:\nFor Addition, Enter: 1\nFor Subtraction, Enter: 2\nFor Multiplication, Enter: 3\nFor Division, Enter: 4\nFor Modulus Enter: 5\n"<<std::endl;
        std::cout<<"Enter your desired Operation: "<<std::endl;
        std::cin>>op;

        switch(op)
        {
            case(1):
            {
                double num_1;
                double num_2;
                std::cout<<"Enter two numbers to perform addition."<<std::endl;
                std::cin>>num_1;
                std::cin>>num_2;
                std::cout<<"The Addition result is = "<<add(num_1,num_2)<<std::endl;
                break;
            }
            case(2):
            {
                double num_1;
                double num_2;
                std::cout<<"Enter the Minuend & Subtrahend to perform Subtraction."<<std::endl;
                std::cin>>num_1;
                std::cin>>num_2;
                std::cout<<"The Subtraction result is = "<<subtract(num_1,num_2)<<std::endl;
                break;
            }
            case(3):
            {
                double num_1;
                double num_2;
                std::cout<<"Enter two numbers to perform multiplication."<<std::endl;
                std::cin>>num_1;
                std::cin>>num_2;
                std::cout<<"The Multiplication result is = "<<multiplication(num_1,num_2)<<std::endl;
                break;
            }
            case(4):
            {
                double num_1;
                double num_2;
                std::cout<<"Enter the Dividend & the Divisor to perform Division."<<std::endl;
                std::cin>>num_1;
                std::cin>>num_2;
                std::cout<<"The division result is = "<<division(num_1,num_2)<<std::endl;
                break;
            }
            case(5):
            {
                double num_1;
                double num_2;
                std::cout<<"Enter the Dividend & the Divisor to perform Modulus."<<std::endl;
                std::cin>>num_1;
                std::cin>>num_2;
                std::cout<<"The Modulus result is = "<<mod(num_1,num_2)<<std::endl;
                break;
            }
        }
        std::cout<<"To continue the operation press 'y', or to exit enter any key"<<std::endl;
        std::cin>>cont;
    }while(cont == 'y');
    return 0;
}
