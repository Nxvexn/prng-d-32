#ifndef PRNG_D_32_H
#define PRNG_D_32_H

#include <stdint.h>

struct prng_d_32_s {
  uint32_t a;
  uint32_t b;
  uint32_t c;
  uint32_t d;
  uint32_t e;
};

uint32_t prng_d_32(struct prng_d_32_s *s);

#endif
