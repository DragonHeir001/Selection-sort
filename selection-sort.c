#include <stdlib.h>
#include <stdio.h>

void print_array(double* item_array) {
    for (int i = 0; i < 5; i++) {
        printf("%d: %lf\n", i, item_array[i]);
    }
}

int get_min(int index, double* item_array) {
    double min = item_array[index];
    int min_index = index;
    for (int i = index + 1; i <5; i++) {
        if (item_array[i] < min) {
            min = item_array[i];
            min_index = i;
        }
    }
    return min_index;
}

void swap(double* item1, double* item2) {
        double temp = *item1;
        *item1 = *item2;
        *item2 = temp;
}

void sort(double* item_array) {
    for (int i = 0; i <5; i++) {
        swap(&item_array[i], &item_array[get_min(i, item_array)]);
    }
}

int main() {
    double* item_array = malloc(sizeof(double) * 5);
    item_array[0] = 0;
    item_array[1] = 0;
    item_array[2] = 4;
    item_array[3] = 3;
    item_array[4] = 5;
    print_array(item_array);
    sort(item_array);
    printf("\n");
    print_array(item_array);
    free(item_array);
}
