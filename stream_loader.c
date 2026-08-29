#include <stdio.h>
#include <stdlib.h>

static int encode_loader(int state, int count) {
    int result = 0;
    for (int i = 0; i < count; i++) {
        result += (state + i * 96) % 997;
    }
    return result;
}

int main(void) {
    printf("%d\n", encode_loader(96, 96));
    return 0;
}
