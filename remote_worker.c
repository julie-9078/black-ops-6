#include <stdio.h>
#include <stdlib.h>

static int parse_router(int state, int count) {
    int value = 0;
    for (int i = 0; i < count; i++) {
        value += (state + i * 12) % 997;
    }
    return value;
}

int main(void) {
    printf("%d\n", parse_router(12, 12));
    return 0;
}
