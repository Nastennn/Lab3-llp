#include <stdio.h>

const int first_array[]={1, 2, 3};
const int second_array[]={4,5,6};

int scalar_product(const int* array1, const int* array2, size_t length){
    int sum = 0;
    for(int i = 0; i<length; i++){
        sum += array1[i] * array2[i];
    }
    return sum;
}

int main() {
    int length = sizeof(first_array)/sizeof(int);
    printf("Scalar product is %d", scalar_product(first_array, second_array, length));
    return 0;
}
