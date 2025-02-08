# Scientific Calculator

## Overview
This project is a simple scientific calculator implemented in C. It supports basic arithmetic operations, trigonometric functions, and advanced mathematical computations such as power, logarithm, and factorial calculations. The project follows a modular approach, where each feature is implemented in a separate file for better code organization and maintainability.

## Features
- **Arithmetic Operations**: Addition, Subtraction, Multiplication, Division
- **Trigonometric Functions**: Sine, Cosine, Tangent
- **Advanced Mathematical Functions**:
  - Power function
  - Square root
  - Factorial calculation
  - Logarithm (base 10 and natural log)

## Project Structure
```
scientific-calculator/
│── src/
│   ├── main.c           # Main entry point of the program
│   ├── arithmetic.c     # Implementation of arithmetic functions
│   ├── trig.c           # Implementation of trigonometric functions
│   ├── math_utils.c     # Implementation of advanced math functions
│
│── include/
│   ├── arithmetic.h     # Header file for arithmetic functions
│   ├── trig.h           # Header file for trigonometric functions
│   ├── math_utils.h     # Header file for advanced math functions
│
│── README.md           # Project documentation
│── Makefile            # Compilation instructions
```

## How to Build and Run
### Prerequisites
- GCC compiler
- Make (optional, for easier compilation)

### Compilation
To compile the program manually, run:
```sh
gcc -o calculator src/main.c src/arithmetic.c src/trig.c src/math_utils.c -lm
```
Alternatively, if a `Makefile` is provided, simply run:
```sh
make
```

### Running the Calculator
After compiling, run the executable:
```sh
./calculator
```

## Contribution
If you would like to contribute to this project, feel free to submit pull requests. Any improvements, bug fixes, or additional mathematical functions are welcome!

## License
This project is open-source and available under the MIT License.

