// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {

  double res = 1;
  for (int i = 0; i < n; i++)
    res *= value;
  return res;
}

uint64_t fact(uint16_t n) {

  uint64_t res = 1;
  while (n) {
    res *= n;
    n--;
  }
  return res;
}

double calcItem(double x, uint16_t n) {

  double res = pown(x, n) / fact(n);
  return res;
}

double expn(double x, uint16_t count) {

  double ex = 1;
  for (int i = 1; i <= count; i++)
    ex += calcItem(x, i);
  return ex;
}

double sinn(double x, uint16_t count) {

  double sinx = 0;
  for (int i = 1; i <= count; i += 1)
    sinx += (pown(-1, i - 1) * calcItem(x, 2 * i - 1));
  return sinx;
}

double cosn(double x, uint16_t count) {

  double cosx = 0;
  for (int i = 1; i <= count; i += 1)
    cosx += (pown(-1, i - 1) * calcItem(x, 2 * i - 2));
  return cosx;
}
