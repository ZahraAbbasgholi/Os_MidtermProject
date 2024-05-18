#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[])
{
    int state = -1; // Default: show all states
    int pid = -1;   // Default: show all PIDs
    if (argc > 1)
        state = atoi(argv[1]);
    if (argc > 2)
        pid = atoi(argv[2]);
    ps(state, pid);
    exit();
}