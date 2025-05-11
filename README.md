# Raytracer

A simple C++ raytracer that outputs a gradient image in the PPM format. This is the first step toward building a full raytracing renderer, inspired by *Ray Tracing in One Weekend* by Peter Shirley.

## Project Overview

This project generates a 256x256 pixel image with a horizontal and vertical color gradient. It's a minimal starting point for experimenting with computer graphics and ray tracing algorithms in pure C++.

The output format is PPM (Portable Pixmap), which is human-readable and easy to write during early stages of development.

## Directory Structure

.

├── .gitignore # Ignores build files, temporary files, etc.

├── LICENSE # Project license (e.g., MIT)

├── README.md # This file

├── main.cpp # Core renderer logic



## Build Instructions

### Prerequisites

- A C++17-compatible compiler (`g++`, `clang++`, etc.)
- [CMake](https://cmake.org/) (optional, recommended for larger builds)
- Git

---

### Using g++

To build and run the program directly:

```bash
g++ main.cpp -o raytracer
./raytracer > image.ppm
```
>>>Using CMake
Recommended if you're planning to expand this project.
```bash
cmake -B build
cmake --build build
./build/raytracer > image.ppm
```

>>>Future Improvements
Add vector math utilities (vec3.h)
Implement ray generation and hit detection
Add spheres, materials, and camera logic
Output to other formats using libraries like stb_image

License
This project is licensed under the MIT License. See the LICENSE file for details.
