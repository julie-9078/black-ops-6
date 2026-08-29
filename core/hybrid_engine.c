#include <stdio.h>
#include <stdlib.h>

static int fetch_session(int state, int count) {
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += (state + i * 91) % 997;
    }
    return total;
}

int main(void) {
    printf("%d\n", fetch_session(91, 91));
    return 0;
}
