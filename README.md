# PRNG-D-32: A Fast, Statistically-Strong Pseudo-Random Number Generator 🎲

![PRNG-D-32](https://img.shields.io/badge/PRNG-D--32-v1.0.0-blue.svg) ![GitHub Releases](https://img.shields.io/github/release/Nxvexn/prng-d-32.svg) ![License](https://img.shields.io/badge/license-MIT-green.svg)

Welcome to the PRNG-D-32 repository! This project offers a high-performance, statistically-strong pseudo-random number generator (PRNG) that produces 32-bit integers. With a minimum period of \(2^{128}\), it ensures a vast range of randomness suitable for various applications.

## Table of Contents

- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Performance](#performance)
- [Contributing](#contributing)
- [License](#license)
- [Releases](#releases)

## Features

- **Fast Generation**: PRNG-D-32 is optimized for speed, making it ideal for applications requiring rapid random number generation.
- **Statistical Strength**: The algorithm ensures a high level of randomness, suitable for cryptographic applications and simulations.
- **32-bit Output**: It generates 32-bit integers, a common requirement in many programming tasks.
- **Long Period**: With a minimum period of \(2^{128}\), it provides a vast sequence of random numbers before repeating.

## Installation

To get started with PRNG-D-32, clone the repository to your local machine:

```bash
git clone https://github.com/Nxvexn/prng-d-32.git
cd prng-d-32
```

### Dependencies

Ensure you have the following dependencies installed:

- A C++ compiler (e.g., GCC or Clang)
- CMake for building the project

### Build the Project

After cloning the repository, build the project using CMake:

```bash
mkdir build
cd build
cmake ..
make
```

## Usage

To use the PRNG-D-32, include the header file in your project:

```cpp
#include "prng_d_32.h"
```

### Example Code

Here is a simple example of how to use the PRNG-D-32:

```cpp
#include <iostream>
#include "prng_d_32.h"

int main() {
    PRNGD32 prng; // Create an instance of the PRNG
    prng.seed(12345); // Seed the generator

    for (int i = 0; i < 10; ++i) {
        std::cout << prng.generate() << std::endl; // Generate random numbers
    }

    return 0;
}
```

### Seeding

To ensure different sequences of random numbers, always seed the generator before use. You can use any integer value as a seed.

## Performance

PRNG-D-32 is designed for high performance. Here are some benchmarks:

- **Random Number Generation Speed**: The generator can produce thousands of random numbers per second, depending on the hardware.
- **Statistical Tests**: The generated numbers pass various statistical tests, including the Diehard tests and the NIST test suite.

## Contributing

We welcome contributions to improve PRNG-D-32. To contribute:

1. Fork the repository.
2. Create a new branch for your feature or bug fix.
3. Make your changes and commit them.
4. Push your branch and submit a pull request.

## License

PRNG-D-32 is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Releases

To download the latest version of PRNG-D-32, visit the [Releases](https://github.com/Nxvexn/prng-d-32/releases) section. Download the appropriate file and execute it to get started.

For the latest updates and releases, you can also check the [Releases](https://github.com/Nxvexn/prng-d-32/releases) section.

## Conclusion

Thank you for checking out PRNG-D-32! We hope you find it useful for your random number generation needs. If you have any questions or suggestions, feel free to open an issue in the repository. Happy coding!