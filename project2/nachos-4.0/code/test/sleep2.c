#include "syscall.h"

main() {
    int i;
    for (i = 0; i < 10; ++i) {
        Sleep(100000);
        PrintInt(222222);
    }
    return 0;
}
