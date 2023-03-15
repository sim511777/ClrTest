#pragma once

#include "Native.h"

using namespace System;

namespace ClrTest2 {
    public ref class Managed2 abstract sealed {
    public:
        static int Add(int a, int b) {
            return Native2_Add(a, b);
        }
    };
}


