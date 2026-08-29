#include <stdio.h>
#include <stdlib.h>

static int encode_router(int state, int count) {
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += (state + i * 88) % 997;
    }
    return total;
}

int main(void) {
    printf("%d\n", encode_router(88, 88));
    return 0;
}
