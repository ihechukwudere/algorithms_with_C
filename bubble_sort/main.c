#include <stdio.h>
#include <stdbool.h>

void bubble_sort(int A[], int len);

int main(int argc, char const *argv[])
{
    int A[] = {3, 5, 2, 6, 8, 0, 9, 1, 4, 7};
    int len = 10;
    bubble_sort(A, len);
    // Print array elements
    for (size_t i = 0; i < len; i++)
        printf("A[%zu] = %d\n", i, A[i]);
    return 0;
}

void bubble_sort(int A[], int len)
{
    bool swapped = false;
    int i = 0;
   // outer loop: controls the number of passes through the array
    do
    {
        swapped = false;
        // Inner loop: does the passes it and swaps the element
        for (size_t j = 0; j < (len - 1 - i); j++)
        {
            // Sorts in ascending order
            //The less than (<) operator could be changed for sort in descending order.
            if(A[j] < A[j + 1])
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                swapped = true;
            }
        }
        i++;
    } while (swapped);
    
}
