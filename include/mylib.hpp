#pragma once
#define k 6
typedef double matr[k][k], vekt[k];
__declspec(dllexport) void elem_Matr(matr c);
__declspec(dllexport) void elem_Vect(matr c, vekt v);
__declspec(dllexport) double calculate(matr c);