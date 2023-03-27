// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double res = 1.0;
  uint16_t i = 0;
  for (i; i < n; i++) {
    res *= value;
  }
  return res;
}

uint64_t fact(uint16_t n) {
  uint64_t result = 1;
  uint64_t num = 2;
  for (num; num <= n; num++) {
    result *= num;
  }
  return result;
}

double calcItem(double x, uint16_t n) {
  double resultat;
  resultat = pown(x, n) / fact(n);
  return resultat;
}

double expn(double x, uint16_t count) {
  double resul = 1.0;
  uint16_t j = 1;
  for (j; j <= count; j++) {
    resul += calcItem(x, j);
  }
  return resul;
}

double sinn(double x, uint16_t count) {
  double r = x;
  uint16_t k = 2
  for (k; k <= count; k++) {
    r += pown(-1, k - 1) * pown(x, 2 * k - 1) / fact(2 * k - 1);
  }
  return r;
}

double cosn(double x, uint16_t count) {
  double re = 1;
  uint16_t l = 2
  for (l = 2; l <= count; l++) {
    re += pown(-1, l - 1) * pown(x, 2 * l - 2) / fact(2 * l - 2);
  }
  return re;
}
