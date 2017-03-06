using namespace std;

#include <iostream>
#include <vector>

#include "cartesian_product.h"
#include "vectors.h"

////////////////////////////////////////////////////////////

void testPower() {
  vector<int> items{0, 1, -1};
  vector<vector<int>> output{{}};
  unsigned int exponent = 2;
  setCartesianPower(items, exponent, output);
  printVector2d(output);
}

void testProduct() {
  vector<vector<int>> input = {{0, 1}, {0, 1}, {0, 1}},
    output{{}};
  setCartesianProduct(input, output);
  printVector2d(output);
}

void testPrinting() {
  vector<vector<vector<int>>> v3d{{{0, 0}, {1, 1}}, {{2, 2}, {3, 3}}};
  printVector3d(v3d);
}

////////////////////////////////////////////////////////////

int main() {
  // testPower();
  // testProduct();
  // testPrinting();
}