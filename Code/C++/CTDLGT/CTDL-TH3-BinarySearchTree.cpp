
// Thuc hanh cay nhi phan tim kiem

#include <iostream>
#include <string>

using namespace std;

// Kieu cua cac nut tren cay (chua thong tin ve mot sinh vien).
struct Node
{
	int maSV;	  // Ma sinh vien
	string hoTen; // Ho ten sinh vien
	Node *left;	  // Con tro toi nut con trai
	Node *right;  // Con tro toi nut con phai
};

// Cay nhi phan tim kiem (chua thong tin sinh vien)
struct SVTree
{
	Node *root; // Con tro toi nut goc cua cay
};

// Ham khoi tao cay (ban dau cay rong)
void treeInit(SVTree &tree);

// Ham huy (xoa het cac nut tren cay)
void treeDestroy(SVTree &tree);

// Kiem tra cay co rong hay khong
bool treeIsEmpty(SVTree &tree);

// Xoa het cac nut tren cay
void treeMakeEmpty(SVTree &tree);

// Xoa rong cay (t la goc cua cay)
void treeMakeEmpty(Node *&t);

// Chen mot sinh vien moi vao cay
void treeInsert(SVTree &tree, int maSV, string hoTen);

// Chen mot sinh vien moi vao cay (t la goc cua cay)
void treeInsert(int maSV, string hoTen, Node *&t);

// Tim sinh vien theo ma SV
Node *treeSearch(SVTree &tree, int maSV);

// Tim sinh vien theo ma SV (t la goc cua cay)
Node *treeSearch(int maSV, Node *t);

// YEU CAU THUC HANH
//   1. Khai bao cac ham duyet cay theo thu tu truoc, giua va sau
//   2. Khai bao cac ham dem so nut, so nut la va so nut co du 2 con

// VIET CODE CUA BAN O DAY
// ...
void duyettruoc(Node *&t)
{
	cout << t->maSV << " " << t->hoTen << endl;
	if (t->left != NULL)
		duyettruoc(t->left);
	if (t->right != NULL)
		duyettruoc(t->right);
}
void duyettruoc(SVTree &tree)
{
	if (tree.root != NULL)
		cout << "Duyet truoc: ";
	duyettruoc(tree.root);
}
void duyetsau(Node *&t)
{
	if (t->left != NULL)
		duyetsau(t->left);
	if (t->right != NULL)
		duyetsau(t->right);
	cout << t->maSV << " " << t->hoTen << endl;
}
void duyetsau(SVTree &tree)
{
	if (tree.root != NULL)
		cout << "Duyet sau: ";
	duyetsau(tree.root);
}
void duyetgiua(Node *&t)
{
	if (t->left != NULL)
		duyetgiua(t->left);

	cout << t->maSV << " " << t->hoTen << endl;

	if (t->right != NULL)
		duyetgiua(t->right);
}
void duyetgiua(SVTree &tree)
{
	if (tree.root != NULL)
		cout << "duyet giua: " << endl;
	duyetgiua(tree.root);
}

int dem = 0, dem2 = 0, dem3 = 0;
void demnut(Node *&t)
{
	dem++;
	if (t->left == NULL && t->right == NULL)
		dem2++;
	if (t->left != NULL && t->right != NULL)
		dem3++;
	if (t->left != NULL)
		demnut(t->left);
	if (t->right != NULL)
		demnut(t->right);
}
int main()
{
	SVTree tree;
	int c1 = 0, c2 = 0;
	treeInit(tree);

	// YEU CAU THUC HANH
	//   1. Viet code chen chen 7-8 sinh vien vao cay
	//   2. Viet code tim sinh vien theo ma sinh vien:
	//       - Neu tim thay, in ho ten sinh vien len man hinh
	//       - Neu khong tim thay, thong bao khong tim duoc
	//   3. Viet code duyet cay theo thu tu truoc, giua va sau
	//   4. Viet code dem so nut, so nut la va so nut co du 2 con
	//   5. Viet code xoa rong cay
	//   6. Viet code kiem tra xem cay da rong hay chua

	// VIET CODE CUA BAN O DAY
	// ...

	treeInsert(tree, 10, "Hoang");
	treeInsert(tree, 2, "Hue");
	treeInsert(tree, 35, "Duy");
	treeInsert(tree, 47, "Duong");
	treeInsert(tree, 25, "Huong");
	treeInsert(tree, 65, "Tuan");
	treeInsert(tree, 17, "Long");
	treeInsert(tree, 80, "An");
	treeInsert(tree, 69, "Duc");

	cout << "Ma sinh vien muon tim: ";
	int fd;
	cin >> fd;
	if (treeSearch(tree, fd) != NULL)
		cout << "Ho ten sinh vien muon tim:" << treeSearch(tree, fd)->hoTen;
	else
		cout << "Khong co sinh vien muon tim";
	cout << endl;

	duyettruoc(tree);
	duyetsau(tree);
	duyetgiua(tree);

	demnut(tree.root);
	cout << "So nut cua cay la:" << dem << endl
		 << "So la cua cay:" << dem2 << endl
		 << "So nut co du 2 con:" << dem3 << endl;
	treeMakeEmpty(tree);
	if (treeIsEmpty(tree) == true)
		cout << "Cay rong";
	treeDestroy(tree);

	return 0;
}

void treeInit(SVTree &tree)
{
	tree.root = NULL;
}

void treeDestroy(SVTree &tree)
{
	treeMakeEmpty(tree);
}

bool treeIsEmpty(SVTree &tree)
{
	return (tree.root == NULL);
}

void treeMakeEmpty(SVTree &tree)
{
	treeMakeEmpty(tree.root);
}

void treeMakeEmpty(Node *&t)
{
	if (t == NULL) // Cay da rong roi thi thoat ra
		return;

	treeMakeEmpty(t->left);	 // Xoa rong cay con trai
	treeMakeEmpty(t->right); // Xoa rong cay con phai
	delete t;				 // Xoa nut goc
	t = NULL;				 // Khi cay rong thi phai cho t bang NULL
}

void treeInsert(SVTree &tree, int maSV, string hoTen)
{
	treeInsert(maSV, hoTen, tree.root);
}

void treeInsert(int maSV, string hoTen, Node *&t)
{
	if (t == NULL) // Cay dang rong thi nut moi se thanh nut goc
	{
		t = new Node;
		t->maSV = maSV;
		t->hoTen = hoTen;
		t->left = NULL;
		t->right = NULL;
	}
	else if (maSV < t->maSV)
		treeInsert(maSV, hoTen, t->left);
	else if (maSV > t->maSV)
		treeInsert(maSV, hoTen, t->right);
	else
		; // Ma SV da ton tai, khong lam gi ca
}

Node *treeSearch(SVTree &tree, int maSV)
{
	return treeSearch(maSV, tree.root);
}

Node *treeSearch(int maSV, Node *t)
{
	if (t == NULL)
		return NULL;

	if (maSV < t->maSV)
		return treeSearch(maSV, t->left);
	else if (maSV > t->maSV)
		return treeSearch(maSV, t->right);
	else
		return t;
}

// YEU CAU THUC HANH
//   1. Dinh nghia cac ham duyet cay theo thu tu truoc, giua va sau
//   2. Dinh nghia cac ham dem so nut, so nut la va so nut co du 2 con

// VIET CODE CUA BAN O DAY
// ...
