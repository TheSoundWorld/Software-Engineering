#include "pch.h"
#include "CppUnitTest.h"
#include"../RG_Person_Project/dot.h"
#include"../RG_Person_Project/line.h"
#include"../RG_Person_Project/Cross.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			dot* d1 = new dot(1, 2, 1, 2);
			dot* d2 = new dot(2, 4, 2, 4);
			Assert::IsFalse(d1->operator <(*d2));
		}
		TEST_METHOD(TestMethod2)
		{
			line* l1 = new line(100000, 0, 0, 100000);
			line* l2 = new line(-100000, 0, 0, -100000);
			Assert::IsNull(l1->cross(*l2));
		}
		TEST_METHOD(TestMethod3)
		{
			line l1(1, 1, 2, 3);
			line l2(2, 3, 4, 5);
			line l3(7, 4, 3, 1);
			vector<line> lines;
			lines.push_back(l1);
			lines.push_back(l2);
			lines.push_back(l3);
			Cross* cross = new Cross();
			Assert::AreEqual(cross->getDifCrossDotsNum(lines),long long(3));
			
		}
		TEST_METHOD(TestMethod4)
		{
			line l1(1, 1, 2, 3);
			vector<line> lines;
			lines.push_back(l1);			
			Cross* cross = new Cross();
			Assert::AreEqual(cross->getDifCrossDotsNum(lines), long long(0));

		}

		TEST_METHOD(TestMethod5)
		{
			line l1(100000, 0, 0, 100000);
			line l2(-100000, 0, 0, 100000);
			line l3(-100000, 0, 0, -100000);
			line l4(100000, 0, 0, -100000);
			vector<line> lines; 
			lines.push_back(l1);
			lines.push_back(l2);
			lines.push_back(l3);
			lines.push_back(l4);
			Cross* cross = new Cross();
			Assert::AreEqual(cross->getDifCrossDotsNum(lines), long long(4));

		}
	};
}
