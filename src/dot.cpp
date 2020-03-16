#include"dot.h"

using namespace std;

dot::dot(long long x_top, long long x_bottom, long long y_top, long long y_bottom) {
	this->x_top = x_top;
	this->x_bottom = x_bottom;
	this->y_top = y_top;
	this->y_bottom = y_bottom;
}

bool dot::operator<(const  dot& d)const
{

	if (x_top * d.x_bottom != x_bottom * d.x_top) {
		return x_top * d.x_bottom < x_bottom * d.x_top;
	}
	else {
		return y_top * d.y_bottom < y_bottom * d.y_top;
	}
	
}