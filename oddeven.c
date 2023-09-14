#include<stdio.h>

int main() {
    // table size
    int tSize;

    // scan for table size
    printf("Enter table size: ");
    scanf("%d", &tSize);

    //arrays
    int nums[tSize];
    int even[tSize];
    int odd[tSize];

    // empty even and odd arrays
    for (int w = 0; w < tSize; w++) {
        even[w] = '\0';
        odd[w] = '\0';
    }
    
    // scan for numbers
    for (int i = 0; i < tSize; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    // check if odd or even
    for (int y = 0; y < tSize; y++) {
        if (nums[y] % 2 == 0) {
            even[y] = nums[y];
        } else if (nums[y] % 2 != 0) {
            odd[y] = nums[y];
        } else {
            printf("\nerr");
            return 1;
        }
    }

    // print even numbers
    printf("Even numbers: ");
    for (int o = 0; o < tSize; o++) {
        // rm empty spaces in array
        if (even[o] != '\0') {
            printf(" %d ", even[o]);
        } else {
            even[o] == '\0';
        }
    }

    // print odd numbers
    printf("\nOdd numbers: ");
    for (int z = 0; z < tSize; z++) {
        // rm empty spaces in array
        if (odd[z] != '\0') {
            printf(" %d ", odd[z]);
        } else {
            odd[z] == '\0';
        }
    }
    
}