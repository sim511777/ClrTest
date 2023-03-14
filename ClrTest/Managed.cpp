#pragma once

#include "Native.h"

using namespace System;

namespace ClrTest {
    public ref class Managed  abstract sealed {
    public:
        static int Add(int a, int b) {
            return Native_Add(a, b);
        }
    };
}

