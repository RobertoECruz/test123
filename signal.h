#ifndef XV6_SIGNAL
#define XV6_SIGNAL

#define NUMSIG 2

#define SIGFPE 0
#define SIGALRM 1

typedef void (*sighandler_t)(void);

struct {

  int signum;

} siginfo_t;
// You should define anything signal related that needs to be shared between
// kernel and userspace here

// At a minimum you must define the signal constants themselves
// as well as a sighandler_t type.

#endif
