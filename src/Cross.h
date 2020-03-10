#pragma once
#include"line.h"
#include<vector>
using namespace std;
class Cross
{
public:
	vector<dot> dots;
	long long getDifCrossDotsNum(vector<line> lines);
};