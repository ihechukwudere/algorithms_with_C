#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A[] = {3, 5, 2, 6, 8, 0, 9, 1, 4, 7};
    int len = 10;

    // outer loop: controls the number of passes through the array
    for (size_t i = 0; i < len; i++)
    {
        // Inner loop: does the passes it and swaps the element
        for (size_t j = 0; j < (len - 1); j++)
        {
            // Sorts in ascending order
            //The less than (<) operator could be changed for sort in descending order.
            if(A[j] < A[j + 1])
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
        
    }

    // Print array elements
    for (size_t i = 0; i < len; i++)
        printf("A[%zu] = %d\n", i, A[i]);
    
    
    return 0;
}
