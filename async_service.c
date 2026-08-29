#include <stdio.h>
#include <stdlib.h>

static int parse_collector(int state, int count) {
    int acc = 0;
    for (int i = 0; i < count; i++) {
        acc += (state + i * 97) % 997;
    }
    return acc;
}

int main(void) {
    printf("%d\n", parse_collector(97, 97));
    return 0;
}
