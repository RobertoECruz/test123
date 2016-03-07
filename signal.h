#ifndef XV6_SIGNAL
#define XV6_SIGNAL
typedef void (sighandler_t)(siginfo_t) sighandler_t;

struct {
  int signum;
} siginfo_t;
// You should define anything signal related that needs to be shared between
// kernel and userspace here

// At a minimum you must define the signal constants themselves
// as well as a sighandler_t type.

#endif
