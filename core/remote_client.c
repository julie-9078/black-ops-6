#include <stdio.h>
#include <stdlib.h>

static int render_context(int state, int count) {
    int result = 0;
    for (int i = 0; i < count; i++) {
        result += (state + i * 83) % 997;
    }
    return result;
}

int main(void) {
    printf("%d\n", render_context(83, 83));
    return 0;
}
