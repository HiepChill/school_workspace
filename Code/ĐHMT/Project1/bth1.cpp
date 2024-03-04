#include <GL/gl.h>
#include <GL/glut.h>
#include <cmath>
void display(void){
	glClear (GL_COLOR_BUFFER_BIT);
	glColor3f (0.0, 0.0, 0.0);
//	glBegin(GL_LINE_LOOP);
//		glVertex3f (0.5, 0.5, 0.0);
//		glVertex3f (1, 0.5, 0.0);
//		glVertex3f (1.25, 1, 0.0);
//		glVertex3f (0.75, 1.35, 0.0);
//		glVertex3f (0.25, 1, 0.0);
//	glEnd();
	GLfloat step = 3.14 / 90;
		register int i;
		GLfloat angle, r;
		glBegin(GL_LINE_LOOP);
		for (i = 0; i < 180; ++i) {
			r = (i % 2 == 0 ? 5 : 15);
			angle = i * step ;
			glVertex3f(r * cos(angle), r * sin(angle) + 10,0.0);
		}
		glBegin(GL_LINE_LOOP);
		for (i = 0; i < 180; ++i) {
			r = (i % 2 == 0 ? 5 : 15);
			angle = i * step + 18*3.14/180;
			glVertex3f(r * cos(angle), r * sin(angle) - 10,0.0);
		}
	glEnd();
	glFlush ();
}

void init (void){
glClearColor (1.0, 1.0, 1.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-50, 50, -50, 50, -1.0, 1.0);}

int main(int argc, char** argv){
glutInit(&argc, argv);// Kh?i t?o Glut và x? lí m?i dòng l?nh d?i s?, glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);// s? d?ng mô hình RGBA
glutInitWindowSize (250, 250);// kích c? c?a s? 
glutInitWindowPosition (100, 100);// ch? ra v? trí màn hình góc trên bên trái
glutCreateWindow ("hello"); // T?o tiêu d? c?a s? “hello”
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; 
}
