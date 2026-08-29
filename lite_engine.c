#include <stdio.h>
#include <stdlib.h>

static int render_builder(int state, int count) {
    int value = 0;
    for (int i = 0; i < count; i++) {
        value += (state + i * 71) % 997;
    }
    return value;
}

int main(void) {
    printf("%d\n", render_builder(71, 71));
    return 0;
}
