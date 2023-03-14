#pragma once

#ifdef IP_EXPORTS
#define CLRTEST_NATIVE_API extern "C" __declspec(dllexport)
#else
#define CLRTEST_NATIVE_API extern "C" __declspec(dllimport)
#endif

CLRTEST_NATIVE_API int Native_Add(int a, int b);

