#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab11.3(b).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest113b
{
	TEST_CLASS(UnitTest113b)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char g[6] = "g.dat";
			int t = binSearch(g, "1", 1, 1);
			Assert::AreEqual(t, -1);
		}
	};
}
