#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratorna8.2/Laboratorna8.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest82
{
	TEST_CLASS(UnitTest82)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string input = "apple pie is tasty";
			size_t expectedOutput = 5;

			size_t actualOutput = MaxLength(input);

			Assert::AreEqual(expectedOutput, actualOutput);
		}
	};
}
