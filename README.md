# PRNG D 32

It's a fast, statistically-strong PRNG with 32-bit integers and a minimum period of 2¹²⁸.

`prng_d_32()` is the randomization function that generates a 32-bit, pseudorandom, unsigned integer.

It accepts the following argument.

1. `s` is the pointer that contains the state. Each state integer must be initialized with any combination of values.

It's in the same class as any Xoroshiro/Xorshift/Xoshiro algorithm that uses 32-bit integers.

It has a minimum period of 2¹²⁸ without broken cycles.

It has an approximated maximum period of 2¹⁶⁰, although no cycle is guaranteed to reach a full period of 2¹⁶⁰.

Assigning `0` to `a` and incrementing `d` by `1` behaves as an interdimensional jump function that starts a different cycle with a period of 2¹²⁸.

Zeroland escapes quickly after generating 3 subsequent numbers.

It's the fastest 32-bit PRNG that generates numbers individually, has a period of at least 2¹²⁸ and passes statistical tests in `stdin32` PractRand with TBs of numbers.

I welcome submissions of algorithms in the same class that challenge the aforementioned claim.

As an obligatory disclaimer, it's not a CSPRNG for use in cryptography.
