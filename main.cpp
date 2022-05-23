#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol155;

void test1()
{
  MinStack ms;
  ms.push(-2);
  ms.push(0);
  ms.push(-3);
  cout << "Expect to see: -3:" << ms.getMin() << endl;
  ms.pop();
  cout << "Expect to see: 0:" << ms.top() << endl;
  cout << "Expect to see: -2:" << ms.getMin() << endl;
}

main()
{
  test1();

  return 0;
}