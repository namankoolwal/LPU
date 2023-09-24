#include <iostream>
#include <conio.h>

main()
{
    int LA[] = {1, 3, 5, 7, 8}, i, index = 0, c[10];
    std::cout << "The array elements are \n";
    for (i = 0; i < 5; i++)
    {
        std::cout << "LA[" << i << "]" << LA[i] << "\n";
    }
    int A[] = {10, 12, 13, 14};
    std::cout << "The array elements are: \n";
    for (i = 0; i < 5; i++)
    {
        std::cout << "A[" << i << "]" << A[i] << "\n";
    }
    std::cout << "Merge array is \n";
    for (i = 0; i < 5; i++)
    {
        c[index++] = LA[i];
    }
    for (i = 0; i < 5; i++)
    {
        c[index++] = A[i];
    }
    for (i = 0; i < 10; i++)
    {
        std::cout << "\t" << c[i];
    }
}