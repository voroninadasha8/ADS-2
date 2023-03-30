// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double res = 1;
  if (value == -1 && n%2==0)
    return 1;
  if (value == -1 && n%2==1)
    return -1;
  uint16_t i = 1;
  for (i; i <= n; i++)
    res *= value;
  return res;
}

uint64_t fact(uint16_t n) {
  uint64_t res = 1;
  uint16_t i = 1;
  for (i; i <= n; i++)
    res *= i;
  return res;
}

double calcItem(double x, uint16_t n) {
  return pown(x, n) / fact(n);
}

double expn(double x, uint16_t count) {
  double res = 0;
  uint16_t i = 0;
  for (i; i <= count; i++)
    res += calcItem(x, i);
  return res;
}

double sinn(double x, uint16_t count) {
  double res = 0;
  uint16_t i = 1;
  for (i; i <= count; i++)
    res += calcItem(x, 2 * i - 1) * pown(-1, i - 1);
  return res;
}

double cosn(double x, uint16_t count) {
  double res = 1;
  for (uint16_t i = 2; i <= count; i++)
    res += calcItem(x, 2 * i - 2) * pown(-1, i - 1);
  return res;
}
