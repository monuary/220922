#include<iostream>
using namespace std;

struct point
{
	int xp;
	int yp;

	void move(int x, int y)
	{
		xp += x;	//	����ü�� ����Ǿ��ٰ� �����ϰ� ������ ���. ����ü�� �Լ��� ����ü�� ���ԵǾ� �ִ� ����̱� �����̴�.
		yp += y;
	}

	void addpoint(const point& p)	//	�����͸� ���� ���?
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