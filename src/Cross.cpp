#include"dot.h"
#include"line.h"
#include"Cross.h"
#include<cstdlib>
#include<vector>
#include<fstream>
//#define random()(rand()%200001-100000)
using namespace std;


ifstream infile;
ofstream outfile;

int main(int argc,const char* argv[])
{
	infile.open(argv[2], ios::in);
	outfile.open(argv[4], ios::out);
	
	int N;
	infile >> N;
	char type;
	long long x1, y1, x2, y2;
	vector<line> lines;
	while (N--) {
		infile >> type;
		if (type == 'L') {
			infile >> x1 >> y1 >> x2 >> y2;
			line L(x1, y1, x2, y2);
			lines.push_back(L);
		}
		
	}
	Cross* cross = new Cross();
	outfile << cross->getDifCrossDotsNum(lines)<< endl;
	delete cross;
	return 0;
	
	/*测试数据生成
	for (int i = 0; i < 1000; i++) {
		outfile << "L " << random() << " " << random() << " " << random() << " " << random() << endl;
	}
	*/
}
long long Cross::getDifCrossDotsNum(vector<line> lines)
{
	
	
	for (unsigned int i = 0; i < lines.size() - 1; i++) {
		for (unsigned int  j = i + 1; j < lines.size(); j++) {
			dot* d = lines[i].cross(lines[j]);
			if (d != NULL) {
				dots.insert(*d);
				delete d;
			}
		}
	}
	
	return dots.size();
}