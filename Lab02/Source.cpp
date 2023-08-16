#include <windows.h>
#include <glut.h>
#include <math.h>

void drawCloud() {
    glLoadIdentity();
    glBegin(GL_POLYGON);
    glColor3ub(173.0f, 216.0f, 230.0f);
    float angle10;
    for (int i = 0; i < 360; i++)
    {
        angle10 = i * 3.1416 / 180;
        glVertex2f(-0.05 + 0.8 * cos(angle10), 2.25 + 0.2 * sin(angle10));
    }
    glEnd();

}



void drawGrass(float x, float y, float scale) {
    glBegin(GL_TRIANGLES);
    glColor3f(0.0, 0.5, 0.0);

    for (int i = 0; i < 8; i++) {
        glVertex3f((-0.5 + i) * scale + x, 0.0f + y, 0.0f);
        glVertex3f((0.5 + i) * scale + x, 0.0f + y, 0.0f);
        glVertex3f((0.0 + i) * scale + x, 0.5 + y, 0.0f);
    }

    glEnd();
}

void drawTrain() {
    // First Square 
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-1.0f - 0.5f, -0.3f + 0.2f);
    glVertex2f(-0.5f - 0.5f, -0.3f + 0.2f);
    glVertex2f(-0.5f - 0.5f, 0.3f + 0.2f);
    glVertex2f(-1.0f - 0.5f, 0.3f + 0.2f);
    glEnd();

    // First Rectangle (between First and Second Square)
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.5f - 0.5f, -0.05f + 0.2f);
    glVertex2f(-0.25f - 0.5f, -0.05f + 0.2f);
    glVertex2f(-0.25f - 0.5f, 0.05f + 0.2f);
    glVertex2f(-0.5f - 0.5f, 0.05f + 0.2f);
    glEnd();

    // Second Square 
    glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-0.25f - 0.5f, -0.3f + 0.2f);
    glVertex2f(0.25f - 0.5f, -0.3f + 0.2f);
    glVertex2f(0.25f - 0.5f, 0.3f + 0.2f);
    glVertex2f(-0.25f - 0.5f, 0.3f + 0.2f);
    glEnd();

    // Second Rectangle (between Second and Third Square)
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.25f - 0.5f, -0.05f + 0.2f);
    glVertex2f(0.5f - 0.5f, -0.05f + 0.2f);
    glVertex2f(0.5f - 0.5f, 0.05f + 0.2f);
    glVertex2f(0.25f - 0.5f, 0.05f + 0.2f);
    glEnd();

    // Third Square 
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0.5f - 0.5f, -0.3f + 0.2f);
    glVertex2f(1.0f - 0.5f, -0.3f + 0.2f);
    glVertex2f(1.0f - 0.5f, 0.3f + 0.2f);
    glVertex2f(0.5f - 0.5f, 0.3f + 0.2f);
    glEnd();

    // Third Rectangle (between Third and Fourth Square)
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(1.0f - 0.5f, -0.05f + 0.2f);
    glVertex2f(1.25f - 0.5f, -0.05f + 0.2f);
    glVertex2f(1.25f - 0.5f, 0.05f + 0.2f);
    glVertex2f(1.0f - 0.5f, 0.05f + 0.2f);
    glEnd();

    // Fourth Square 
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(1.25f - 0.5f, -0.3f + 0.2f);
    glVertex2f(1.75f - 0.5f, -0.3f + 0.2f);
    glVertex2f(1.75f - 0.5f, 0.3f + 0.2f);
    glVertex2f(1.25f - 0.5f, 0.3f + 0.2f);
    glEnd();

    glFlush();
}

void drawMountain(float x, float y) {
    glBegin(GL_TRIANGLES);
    glColor3f(0.6, 0.4, 0.2);
    glVertex3f(-1 + x, 0 + y, 0);
    glVertex3f(1 + x, 0 + y, 0);
    glVertex3f(0 + x, 1 + y, 0);
    glEnd();
}

void drawEngine() {
    // roof
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.5f, 0.5f);
    glVertex2f(-1.6f , -0.1f + 0.6f);
    glVertex2f(-0.9f , -0.1f + 0.6f);
    glVertex2f(-0.9f , 0.05f + 0.6f);
    glVertex2f(-1.6f , 0.05f + 0.6f);
    glEnd();

    // front square
    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.0f, 0.5f);
    glVertex2f(-1.22f - 0.5f, -0.3f + 0.2f);
    glVertex2f(-1.0f - 0.5f, -0.3f + 0.2f);
    glVertex2f(-1.0f - 0.5f, 0.3f + 0.0f);
    glVertex2f(-1.22f - 0.5f, 0.3f + 0.0f);
    glEnd();
    
// window
    glBegin(GL_QUADS);
    glColor3ub(173.0f, 216.0f, 230.0f);
    glVertex2f(-1.15f , -0.3f + 0.4f);
    glVertex2f(-1.35f , -0.3f + 0.4f);
    glVertex2f(-1.35f ,  0.4f);
    glVertex2f(-1.15f , 0.4f);
    glEnd();
};

void drawSun() {
    glLoadIdentity();
    glBegin(GL_POLYGON);
    glColor3ub(255.0f, 255.0f, 128.0f);
    float angle10;
    for (int i = 0; i < 360; i++)
    {
        angle10 = i * 3.1416 / 180;
        glVertex2f(1.4 + 0.2 * cos(angle10), 2.25 + 0.2 * sin(angle10));
    }
    glEnd();
}

void drawTrack() {
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.5f - 2.5f, -0.04f -0.2f);
    glVertex2f(-0.099f - 0.5f, -0.04f - 0.2f);
    glVertex2f(-0.099f - 0.5f, 0.04f - 0.2f);
    glVertex2f(0.5f - 2.5f, 0.04f - 0.2f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(2.0f, -0.04f - 0.2f);
    glVertex2f(-0.099f - 0.5f, -0.04f - 0.2f);
    glVertex2f(-0.099f - 0.5f, 0.04f - 0.2f);
    glVertex2f(2.0f , 0.04f - 0.2f);
    glEnd();
}

void drawWheels() {
    glLoadIdentity();
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++)
    {
        float angle10;
        angle10 = i * 3.1416 / 180;
        glVertex2f(0.1 + 0.07 * cos(angle10), -0.12 + 0.07 * sin(angle10));

    }
    glEnd();

    glLoadIdentity();
    glBegin(GL_POLYGON);
    glColor3ub(0.0f, 0.0f, 0.0f);
    for (int i = 0; i < 360; i++)
    {
        float angle10;
        angle10 = i * 3.1416 / 180;
        glVertex2f(0.4 + 0.07 * cos(angle10), -0.12 + 0.07 * sin(angle10));

    }
    glEnd();

    glLoadIdentity();
    glBegin(GL_POLYGON);
    glColor3ub(0.0f, 0.0f, 0.0f);
    for (int i = 0; i < 360; i++)
    {
        float angle10;
        angle10 = i * 3.1416 / 180;
        glVertex2f(0.85+ 0.07 * cos(angle10), -0.12 + 0.07 * sin(angle10));

    }
    glEnd();
    glLoadIdentity();
    glBegin(GL_POLYGON);
    glColor3ub(0.0f, 0.0f, 0.0f);
    for (int i = 0; i < 360; i++)
    {
        float angle10;
        angle10 = i * 3.1416 / 180;
        glVertex2f(1.15 + 0.07 * cos(angle10), -0.12 + 0.07 * sin(angle10));

    }
    glEnd();
    glLoadIdentity();
    glBegin(GL_POLYGON);
    glColor3ub(0.0f, 0.0f, 0.0f);
    for (int i = 0; i < 360; i++)
    {
        float angle10;
        angle10 = i * 3.1416 / 180;
        glVertex2f(-1.10 + 0.07 * cos(angle10), -0.12 + 0.07 * sin(angle10));

    }
    glEnd();
    glLoadIdentity();
    glBegin(GL_POLYGON);
    glColor3ub(0.0f, 0.0f, 0.0f);
    for (int i = 0; i < 360; i++)
    {
        float angle10;
        angle10 = i * 3.1416 / 180;
        glVertex2f(-1.4 + 0.07 * cos(angle10), -0.12 + 0.07 * sin(angle10));

    }
    glEnd();
    glLoadIdentity();
    glBegin(GL_POLYGON);
    glColor3ub(0.0f, 0.0f, 0.0f);
    for (int i = 0; i < 360; i++)
    {
        float angle10;
        angle10 = i * 3.1416 / 180;
        glVertex2f(-0.65 + 0.07 * cos(angle10), -0.12 + 0.07 * sin(angle10));

    }
    glEnd();
    glLoadIdentity();
    glBegin(GL_POLYGON);
    glColor3ub(0.0f, 0.0f, 0.0f);
    for (int i = 0; i < 360; i++)
    {
        float angle10;
        angle10 = i * 3.1416 / 180;
        glVertex2f(-0.35 + 0.07 * cos(angle10), -0.12 + 0.07 * sin(angle10));

    }
    glEnd();
}

void display() {
    glClearColor(0.4f, 0.4f, 1.0f, 1.0f); // Light blue background color
    glClear(GL_COLOR_BUFFER_BIT);

    for (int i = 0; i < 4; i++) {
        drawGrass(-2.5 + i * 2.0, -1, 0.4);
    }
    drawMountain(-1.5, 1);
    drawMountain(0, 1);
    drawMountain(1.5, 1);
    drawTrain();
    drawEngine();
    drawSun();
    drawCloud();
    drawTrack();
    drawWheels();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    int windowWidth = 600;
    int windowHeight = 600;
    glutInitWindowSize(windowWidth, windowHeight);

    glutCreateWindow("OpenGL Window");

    glViewport(0, 0, windowWidth, windowHeight);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-2.0, 2.0, -1.5, 2.5, -1.0, 1.0);
    glMatrixMode(GL_MODELVIEW);

    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
