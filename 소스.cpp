#include<iostream>
using namespace std;

struct point
{
	int xp;
	int yp;

	void move(int x, int y)
	{
		xp += x;	//	구조체가 선언되었다고 가정하고 변수를 사용. 구조체의 함수는 구조체에 포함되어 있는 요소이기 때문이다.
		yp += y;
	}

	void addpoint(const point& p)	//	포인터를 쓰는 방법?
	{
		xp += p.xp;
		yp += p.yp;
	}

	void show()
	{
		cout << "[" << xp << ", " << yp << "]" << endl;
	}
};

int main()
{
	point p1 = { 12, 4 };
	point p2 = { 20,30 };
	
	p1.move(-7, 10);
	p1.show();

	p1.addpoint(p2);
	p1.show();
	return 0;
}