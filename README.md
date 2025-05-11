# 🌈 Ray Tracer - First PPM Renderer

This is my implementation of the first step in building a ray tracer, based on *"Ray Tracing in One Weekend"* by Peter Shirley.

It generates a simple 256x256 PPM image with a red-green gradient and writes it to `image.ppm` using standard output.

---

## 📷 Output Sample

The output is a `.ppm` file (ASCII format, P3) that displays a smooth gradient from black (top-left) to yellow (bottom-right).

## 📁 Structure

raytracer/
├── main.cpp # Core rendering logic (outputs to stdout)
├── README.md # Project info
└── .gitignore # Build + output ignores


---

## ⚙️ Build & Run

### 🔧 Compile (Linux/Mac)

g++ -o image main.cpp
 
▶️ Run and generate image
./image > image.ppm

🪟 On Windows
Using CMD:
g++ -o image.exe main.cpp
image.exe > image.ppm

🖼️ Viewing the Output
You can open image.ppm with:

GIMP

IrfanView

ImageMagick (display image.ppm)

Online PPM viewer tools

🛣️ Next Steps
This is just the beginning. Future commits will include:

Ray generation

Sphere intersection

Surface normals

Materials, lighting, reflections, and more

📚 Reference
This project is based on the excellent book:

📖 Ray Tracing in One Weekend

🧑‍💻 Author
Ankit – CSE Student, MVJCE
