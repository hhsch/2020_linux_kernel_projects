#ifndef COP6400_TAGS_H
#define COP6400_TAGS_H

// Syscall numbers
#define SYS_set_tag 335
#define SYS_get_tag 336
#define SYS_set_level_alloc 337
#define SYS_get_level_alloc 338

// Tag elements
#define COP6400_TAG_MSB 0x80000000
#define COP6400_TAG_BITMAP 0x7ffffffc
#define COP6400_TAG_LEVEL 0x3

// Declarations
int get_tag(int pid);
int set_tag(int pid, int new_tag);
int set_alloc(int level, int new_allocation);
int get_alloc(int level);

#endif /* COP6400_TAGS_H */
