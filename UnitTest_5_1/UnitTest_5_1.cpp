#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5_1/Source.cpp" // Вкажіть точне ім'я теки вашого основного проекту

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51
{
    TEST_CLASS(UnitTest51)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            // Тестові дані: a = 1, b = 2
            // Обчислення вручну: h(1, 2) = (1 + 2 + 1^2 * 2^2) / (1^2 + 2^2) = (1 + 2 + 4) / (1 + 4) = 7 / 5 = 1.4
            double expected = 1.4;
            double actual = h(1.0, 2.0);

            // Перевірка з точністю 0.0001
            Assert::AreEqual(expected, actual, 0.0001);
        }
    };
}