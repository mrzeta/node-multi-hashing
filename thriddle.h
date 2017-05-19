#ifndef thriddle_H
#define thriddle_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

void thriddle_hash(const char* input, char* output, uint32_t len);

#ifdef __cplusplus
}
#endif

#endif
