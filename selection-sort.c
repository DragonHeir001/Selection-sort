#include <stdlib.h>
#include <stdio.h>

void print_array(double* item_array) {
    for (int i = 0; i < 5; i++) {
        printf("%d: %lf\n", i, item_array[i]);
    }
}

void swap(double* item1, double* item2) {
        double temp = *item1;
        *item1 = *item2;
        *item2 = temp;
}

int main() {
    double* item_array = malloc(sizeof(double) * 5);
    item_array[0] = 0;
    item_array[1] = 0;
    item_array[2] = 4;
    item_array[3] = 3;
    item_array[4] = 5;
    print_array(item_array);
    printf("\n");
    swap(&item_array[0], &item_array[3]);
    print_array(item_array);
    free(item_array);
}
