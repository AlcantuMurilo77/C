#include <stdio.h>

int main() {
    // Declare and initialize an array of 5 integers
    int grades[5] = {85, 90, 78, 92, 88};

    // Print each element using a for loop
    for (int i = 0; i < 5; i++) {
        printf("grades[%d] = %d\n", i, grades[i]);
    }

    // Modify an element: update the value at index 2 to 100
    grades[2] = 100;
    printf("\nUpdated grade at index 2 to 100:\n");
    printf("grades[2] = %d\n", grades[2]);

    // Calculate the average of the array values
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += grades[i];
    }
    float average = sum / 5.0;
    printf("\nAverage grade: %.2f\n", average);

    // Note: C does not perform bounds checking.
    // Accessing grades[99] would cause undefined behavior.

    // Print memory addresses of each array element
    printf("\nMemory addresses of each element:\n");
    for (int i = 0; i < 5; i++) {
        printf("&grades[%d] = %p\n", i, (void*)&grades[i]);
    }

    return 0;
}
