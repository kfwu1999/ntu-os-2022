#include "syscall.h"

main() {
    int i;
    for (i = 0; i < 5; ++i) {
        Sleep(300000);
        PrintInt(111111);
    }
    return 0;
}
