#pragma once

#ifdef IP_EXPORTS
#define CLRTEST2_NATIVE_API extern "C" __declspec(dllexport)
#else
#define CLRTEST2_NATIVE_API extern "C" __declspec(dllimport)
#endif

CLRTEST2_NATIVE_API int Native2_Add(int a, int b);

