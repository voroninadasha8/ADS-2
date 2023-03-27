// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double res = value;
  for (uint16_t i = 1; i < n; i++) {
    res *= value;
  }
  return res;
}

uint64_t fact(uint16_t n) {
  uint64_t result = 1;
  for (int j = 2; j <= n; j++) {
    result *= j;
  }
  return result;
}

double calcItem(double x, uint16_t n) {
  return pown(x, n) / fact(n);
}

double expn(double x, uint16_t count) {
  double r = 1.0;
  for (int k = 1; k <= count; k++) {
    r += calcItem(x, k);
  }
  return r;
}

double sinn(double x, uint16_t count) {
  double re = 0.0;
  for (int m = 0; m < count; m++) {
    re += calcItem(x, 2 * m + 1) * pown(-1, m);
  }
  return re;
}

double cosn(double x, uint16_t count) {
  double resultat = 0.0;
  for (int l = 0; l < count; l++) {
    resultat += calcItem(x, 2 * l) * pown(-1, l);
  }
  return resultat;
}
