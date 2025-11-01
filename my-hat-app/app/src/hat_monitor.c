#include <stdio.h>
#include <time.h>

int main(void) {
    time_t t = time(NULL);
    char buf[64];
    struct tm *g = gmtime(&t);
    if (g) strftime(buf, sizeof(buf), "%Y-%m-%dT%H:%M:%SZ", g);
    printf("PoC hat monitor build successful! timestamp=%s\n", buf);
    return 0;
}
