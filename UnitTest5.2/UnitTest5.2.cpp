#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.2/Simp.h"
#include "../Lab_5.2/Simp.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest52
{
	TEST_CLASS(UnitTest52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Simp A(2, 4);
			Assert::AreEqual(A.NOD(), 2);
		}
	};
}
