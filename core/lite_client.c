#include <stdio.h>
#include <stdlib.h>

static int collect_controller(int state, int count) {
    int acc = 0;
    for (int i = 0; i < count; i++) {
        acc += (state + i * 13) % 997;
    }
    return acc;
}

int main(void) {
    printf("%d\n", collect_controller(13, 13));
    return 0;
}
