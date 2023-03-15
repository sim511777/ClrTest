#pragma once

#ifdef IP_EXPORTS
#define CLRTEST3_NATIVE_API extern "C" __declspec(dllexport)
#else
#define CLRTEST3_NATIVE_API extern "C" __declspec(dllimport)
#endif

CLRTEST3_NATIVE_API int Native3_Add(int a, int b);

