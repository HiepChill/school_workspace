//#include <iostream>
//using namespace std;
//
//struct node
//{
//	int elem;
//	node *next;
//};
//
//struct List
//{
//	node *head;
//};
//
//void themdau(List &list, int e)
//{
//	node *v = new node;
//	v->elem = e;
//	v->next = NULL;
//	if (list.head == NULL)
//		list.head = v;
//	else
//	{
//		v->next = list.head;
//		list.head = v;
//	}
//}
//
//void themcuoi(List &list, int e)
//{
//	node *v = new node;
//	v->elem = e;
//	v->next = NULL;
//	if (list.head == NULL)
//		list.head = v;
//	else
//	{
//		node *p = list.head;
//		while(p->next != NULL)
//			p = p->next;
//		p->next = v;
//	}
//}
//
//void nhap(List &list)
//{
//	int n;
//	do
//	{
//		cout<<"Cho n = ";
//		cin>>n;
//	}
//	while (n<5);
//	int x = 0, a;
//	while (x<n)
//	{
//		cout<<"Nhap phan tu: ";
//		cin>>a;
//		themcuoi(list,a);
//		x++;
//	}
//}
//
//void xuat(List list)
//{
//	cout<<"In danh sach:";
//	node *p = list.head;
//	while(p!= NULL)
//	{
//		cout<<" "<<p->elem;
//		p = p->next;
//	}
//}
//
//void xoacuoi(List &list)
//{
//	cout<<endl<<"Hay xoa phan tu o cuoi danh sach!";
//	node *p = list.head;
//	while(p->next->next != NULL)
//		p = p->next;
//	p->next = NULL;
//	cout<<endl;
//	xuat(list);
//}
//
//void themx(List &list)
//{
//	int x;
//	cout<<"\nCho x = ";
//	cin>>x;
//	cout<<"Hay them x vao dau danh sach!\n";
//	themdau(list,x);
//	xuat(list);
//}
//
//void insochan(List list)
//{
//	node *p = list.head;
//	cout<<"\nIn so chan trong danh sach:";
//	while(p!= NULL)
//	{
//		if (p->elem % 2 == 0)
//			cout<<" "<<p->elem;
//		p = p->next;
//	}
//	cout<<endl;
//}
//
//int main()
//{
//	List list;
//	list.head = NULL;
//	nhap(list);
//	xuat(list);
//	xoacuoi(list);
//	themx(list);
//	insochan(list);
//	return 0;
//}
//	



#ifdef __APPLE_CC__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

// Clears the current window and draws a triangle.
void display() {

  // Set every pixel in the frame buffer to the current clear color.
  glClear(GL_COLOR_BUFFER_BIT);

  // Drawing is done by specifying a sequence of vertices.  The way these
  // vertices are connected (or not connected) depends on the argument to
  // glBegin.  GL_POLYGON constructs a filled polygon.
  glBegin(GL_POLYGON);
    glColor3f(1, 0, 0); glVertex3f(-0.6, -0.75, 0.5);
    glColor3f(0, 1, 0); glVertex3f(0.6, -0.75, 0);
    glColor3f(0, 0, 1); glVertex3f(0, 0.75, 0);
  glEnd();

  // Flush drawing command buffer to make drawing happen as soon as possible.
  glFlush();
}

// Initializes GLUT, the display mode, and main window; registers callbacks;
// enters the main event loop.
int main(int argc, char** argv) {

  // Use a single buffered window in RGB mode (as opposed to a double-buffered
  // window or color-index mode).
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

  // Position window at (80,80)-(480,380) and give it a title.
  glutInitWindowPosition(80, 80);
  glutInitWindowSize(400, 300);
  glutCreateWindow("A Simple Triangle");

  // Tell GLUT that whenever the main window needs to be repainted that it
  // should call the function display().
  glutDisplayFunc(display);

  // Tell GLUT to start reading and processing events.  This function
  // never returns; the program only exits when the user closes the main
  // window or kills the process.
  glutMainLoop();
}
