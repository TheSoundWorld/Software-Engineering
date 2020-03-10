#include"line.h"
#include<cstdio>
using namespace std;

line::line(long long x1, long long y1, long long x2, long long y2) {
	A = y2 - y1;
	B = x1 - x2;
	C = x2 * y1 - x1 * y2;
}
dot* line::cross(line l) {
	long long D = A * l.B - B * l.A;
	long long x_top = B * l.C - C * l.B;
	long long y_top = l.A * C - A * l.C;
	dot* cross_dot = NULL;
	if (D != 0)cross_dot = new dot(x_top, D, y_top, D);
	return cross_dot;
}