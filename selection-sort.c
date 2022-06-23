#include <stdlib.h>
#include <stdio.h>

int main() {
    int* item_array = malloc(sizeof(int) * 5);
    item_array[0] = 0;
    item_array[1] = 0;
    item_array[2] = 4;
    item_array[3] = 3;
    item_array[4] = 5;
    for (int i = 0; i < 5; i++) {
        if (item_array[i] == 0 || item_array[i] == 5) {
            printf("i: %d\n", i);
        }
    }
    free(item_array);
}
