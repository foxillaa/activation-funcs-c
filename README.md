# Activation Functions in C

This project is a simple **C program** that implements and evaluates several mathematical functions, including common **activation functions** used in machine learning.

---

## Implemented functions

- **Step function** – returns 0 if `x < 0`, otherwise 1  
- **Sigmoid** – `1 / (1 + exp(-x))`  
- **Hyperbolic tangent (tanh)** – `(exp(x) - exp(-x)) / (exp(x) + exp(-x))`  
- **Gaussian** – `exp(-x²)`  
- **ReLU (Rectified Linear Unit)** – returns 0 if `x <= 0`, otherwise `x`  
- **Custom function** – `0.5 * (x + sqrt(x² + 4))`

---

## Features

- **Automatic mode**: specify start, stop, and step values → the program evaluates functions in the interval.  
- Input validation with error codes.  
- Modular implementation in plain C.  

---

## Build

The project uses **CMake**.  

```bash
mkdir build
cd build
cmake ..
cmake --build .
