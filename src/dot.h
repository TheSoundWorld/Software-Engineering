#pragma once
#include<set>
class dot {
public:
	long long x_top;
	long long x_bottom;
	long long y_top;
	long long y_bottom;

	dot(long long x_top, long long x_bottom, long long y_top, long long y_bottom);
		
	
	
	bool operator <(const  dot& d)const;

};