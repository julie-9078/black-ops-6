#include <stdio.h>
#include <stdlib.h>

static int load_factory(int state, int count) {
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += (state + i * 66) % 997;
    }
    return total;
}

int main(void) {
    printf("%d\n", load_factory(66, 66));
    return 0;
}
