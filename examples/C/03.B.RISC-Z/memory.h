#ifndef __MEMORY_H__
#define __MEMORY_H__

#include "misc.h"

#define TEXT_SIZE (1 << 14)
#define TEXT_OFFSET 0

#define DATA_SIZE (1 << 14)
#define DATA_OFFSET 0x10000000

#define STACK_SIZE (1 << 14)
#define STACK_OFFSET 0x7FFFFF00

/**
 * @brief ...
 *
 * @param ...
 */
void *mem_access(rz_address_t addr);

#endif // MEMORY_H__
