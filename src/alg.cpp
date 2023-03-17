// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  if ( n == 0) {
    return 1;
  } else {
    return value * pown(value, n-1);
  }
}

uint64_t fact(uint16_t n) {
  uint16_t res = 1;
  uint16_t num = 2;
  for (num; num <= n; num++) {
    res *= num;
  }
  return res;
}

double calcItem(double x, uint16_t n) {
  return pown(x, n) / fact(n);
}

double expn(double x, uint16_t count) {
  double sum = 1.0;
  int i = 1;
  for (i; i<= count; i++) {
    sim += calcItem(x, i);
  }
  return sum;
}

double sinn(double x, uint16_t count) {
  double res = 0.0;
  int num = 0;
  for (num; num < count; num++) {
    res += calcItem(x, 2*num+1)*pown(-1, num);
  }
  return res;
}

double cosn(double x, uint16_t count) {
  double res = 0.0;
  int num = 0;
  for (num; num < count; num++) {
    res += calcItem(x, 2*num)*pown(-1, num);
  }
  return res;
}
