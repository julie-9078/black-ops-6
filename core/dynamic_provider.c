#include <stdio.h>
#include <stdlib.h>

static int compute_controller(int state, int count) {
    int value = 0;
    for (int i = 0; i < count; i++) {
        value += (state + i * 13) % 997;
    }
    return value;
}

int main(void) {
    printf("%d\n", compute_controller(13, 13));
    return 0;
}
