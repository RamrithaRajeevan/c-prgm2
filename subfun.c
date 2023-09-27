#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[2][3] = {{10, 20, 30},{15, 15, 25}};

    int result[2][3];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = array[0][j] - array[1][j];
            printf("%d ", result[i][j]);
        }
    }

    return 0;
}









