#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab3.3B/Lab3.3B/Vector3D.h"
#include "../Lab3.3B/Lab3.3B/Vector3D.cpp"
#include "../Lab3.3B/Lab3.3B/Triad.h"
#include "../Lab3.3B/Lab3.3B/Triad.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33B
{
	TEST_CLASS(UnitTest33B)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Vector3D A(1, 2, 3), B(4, 5, 6);
			//A * B	
			Assert::AreEqual(A * B, 32.);
		}
	};
}
