// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double res = 1.0;
  if (value == -1) {
    if (n % 2 == 0)
      return 1;
    else
      return -1;
  }
  for (uint16_t i = 1; i <= n; i++)
    res *= value;
  return result;
}

uint64_t fact(uint16_t n) {
  uint64_t res = 1;
  for (uint16_t i = 2; i <= n; i++)
    res *= i;
  return res;
}

double calcItem(double x, uint16_t n) {
  return (pown(x, n) / fact(n));
}

double expn(double x, uint16_t) {
  double sum = 1.0;
  for (uint16_t i = 1; i <= count; i++) {
    sum += calcItem(x, i);
  }
  return sum;
}

double sinn(double x, uint16_t) {
  double res = 0.0;
  for (uint16_t i = 1; i <= count; i++)
    res += calcItem(x, 2 * i - 1) * pown(-1, i - 1);
  return res;
}

double cosn(double x, uint16_t) {
  double res = 1.0;
  for (uint16_t i = 2; i <= count; i++)
    res += calcItem(x, 2 * i - 2) * pown(-1, i - 1);
  return res;
}
