#include "pch.h"
#include "CppUnitTest.h"
#include "../PR05.5/FileName.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest055
{
    TEST_CLASS(UnitTest055)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            int expected = 6;
            int actual = C(4, 2);
            Assert::AreEqual(expected, actual);
        }
    };
}