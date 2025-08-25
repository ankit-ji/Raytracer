#include <GL/glut.h>
#include <vector>
#include <iostream>

// forward declaration of your existing render() function
std::vector<unsigned char> render(int width, int height);

int width = 800;
int height = 600;
std::vector<unsigned char> pixels;

void display() {
    if (pixels.empty()) {
        pixels = render(width, height);
    }

    glClear(GL_COLOR_BUFFER_BIT);
    glDrawPixels(width, height, GL_RGB, GL_UNSIGNED_BYTE, pixels.data());
    glutSwapBuffers();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(width, height);
    glutCreateWindow("Ray Tracing Viewer");

    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
