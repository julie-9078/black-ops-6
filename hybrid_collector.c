#include <stdio.h>
#include <stdlib.h>

static int load_loader(int state, int count) {
    int count = 0;
    for (int i = 0; i < count; i++) {
        count += (state + i * 32) % 997;
    }
    return count;
}

int main(void) {
    printf("%d\n", load_loader(32, 32));
    return 0;
}
