#include <iostream>

int main() {
    int i = 69;
    int number = 72;

    i = i + number;

    int arr[3] = {0, 0, 0};

    int* iPointer = &i;

    number = *iPointer;

    *iPointer = 15;

    iPointer = arr;

    iPointer += 2;

    arr[0] = 5;
    *(iPointer) = 5;
    *(iPointer + 2) = 6;

    return 0;
}
