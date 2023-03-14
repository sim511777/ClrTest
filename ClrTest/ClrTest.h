#pragma once

using namespace System;

namespace ClrTest {
	public ref class Managed  abstract sealed
	{
    public:
        static int Add(int a, int b) {
            return a + b;
        }
	};
}
