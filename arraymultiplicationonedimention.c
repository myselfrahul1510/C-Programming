#include<stdio.h>

int main(int argc, char const *argv[])
{
    int arr1[4], arr2[4], result[4];
    
    // Taking input for the first array
    printf("Enter elements for the first array:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr1[i]);
    }

    // Taking input for the second array
    printf("Enter elements for the second array:\n");
    for (int j = 0; j < 4; j++)
    {
        printf("Enter element %d: ", j+1);
        scanf("%d", &arr2[j]);
    }

    // Multiplying corresponding elements from both arrays
    for (int t = 0; t < 4; t++)
    {
        result[t] = arr1[t] * arr2[t];
    }

    // Printing the result array
    printf("Resultant array after element-wise multiplication:\n");
    for (int k = 0; k < 4; k++)
    {
        printf("%d ", result[k]);
    }
    printf("\n");
    
    return 0;
}
