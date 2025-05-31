#include "prng_d_32.h"

uint32_t prng_d_32(struct prng_d_32_s *s) {
  uint32_t block = s->b + s->e;

  s->a++;

  if (s->a < 1) {
    s->c += s->e;
    s->d ^= s->b;
    s->b += s->c;
    s->e ^= s->d;
    return block;
  }

  s->b = ((s->b << 17) | (s->b >> 15)) ^ s->d;
  s->d += 1111111111;
  s->e = (block << 13) | (block >> 19);
  return block;
}
