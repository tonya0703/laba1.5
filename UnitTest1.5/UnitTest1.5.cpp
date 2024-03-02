#include "pch.h"
#include "CppUnitTest.h"
#include "../Project1.5/Number.h"
#include "../Project1.5/Real.h"
#include "../Project1.5/Number.cpp"
#include "../Project1.5/Real.cpp"
#include "../Project1.5/Main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest15
{
	TEST_CLASS(UnitTest15)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Number n;
			n.Init(2);

			Real r;
			r.Init(n);

			double p = r.power(n, 2);

			Assert::AreEqual(4, p, 0.0);
		}
	};
}
