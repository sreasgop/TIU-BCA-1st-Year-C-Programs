// C Program to Access Elements of an Array Using Pointer

#include <stdio.h>
int main() {
    int arr[5] = {5, 10, 15, 20, 25}, i;
    int* point = &arr[0];

    for(i=0; i<5; i++){
        printf("%d ", *(point+i));
    }
    return 0;
}