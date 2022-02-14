#include <unistd.h>
#include "tags.h"

int get_tag(int pid) {
  int tag = syscall(SYS_get_tag, pid); 

  if (tag < 0)
    return -1; // error

  return tag; 
}

int set_tag(int pid, int new_tag) {
  int err = syscall(SYS_set_tag, pid, new_tag);

  if (err < 0)
    return -1; // error

  return new_tag;
}

int set_alloc(int level, int new_allocation) {
  int err = syscall(SYS_set_level_alloc, level, new_allocation);

  if (err < 0)
    return -1; // error

  return new_allocation;
}

int get_alloc(int pid) {
  int alloc = syscall(SYS_get_level_alloc, pid); 

  if (alloc < 0)
    return -1; // error

  return alloc; 
}


