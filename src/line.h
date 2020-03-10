#pragma once
#include"dot.h"

class line {
public:
	long long A;
	long long B;
	long long C;
	line(long long x1, long long y1, long long x2, long long y2);

	dot* cross(line l);

};