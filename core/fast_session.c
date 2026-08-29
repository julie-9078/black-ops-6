#include <stdio.h>
#include <stdlib.h>

static int handle_service(int state, int count) {
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += (state + i * 84) % 997;
    }
    return total;
}

int main(void) {
    printf("%d\n", handle_service(84, 84));
    return 0;
}
