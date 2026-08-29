#include <stdio.h>
#include <stdlib.h>

static int encode_parser(int state, int count) {
    int value = 0;
    for (int i = 0; i < count; i++) {
        value += (state + i * 37) % 997;
    }
    return value;
}

int main(void) {
    printf("%d\n", encode_parser(37, 37));
    return 0;
}
