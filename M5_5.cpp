//Write a program to implement hashing with linear probing.
#include <stdio.h>

int main() {
    int size, n, key, index;
    printf("Enter hash table size: ");
    scanf("%d", &size);

    int hash[size];
    for (int i = 0; i < size; i++)
        hash[i] = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &key);
        index = key % size;
        while (hash[index] != -1)
            index = (index + 1) % size;
        hash[index] = key;
    }

    printf("Hash Table:\n");
    for (int i = 0; i < size; i++)
        printf("%d ", hash[i]);

    return 0;
}

