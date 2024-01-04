// C Program to Multiply two Matrices by Passing Matrix to a Function 

#include <stdio.h>

void MatrixMult(int*, int*){

}

int main() {
    int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2[3][3] = {{2, 2, 2}, {2, 2, 2}, {2, 2, 2}};
    MatrixMult(arr1, arr2);
    return 0;
}

void MatrixMult(int* matrix1, int* matrix2){
    int i, j;
    for(i=0; i<3; i++){
        for(j=0; j<3; i++){
            printf("%d ", matrix1[i][j]*matrix2[i][j]);
        }
    }   
}