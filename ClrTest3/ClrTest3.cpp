#pragma once

#include "Native.h"

using namespace System;

namespace ClrTest3 {
    public ref class Managed3 abstract sealed {
    public:
        static int Add(int a, int b) {
            return Native3_Add(a, b);
        }
    };
}


