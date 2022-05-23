
#ifndef SOLUTION_H
#define SOLUTION_H

#include "node.h"
#include <vector>
#include <queue>
#include <unordered_map>
#include <map>
#include <string>
#include <stack>

using namespace std;
namespace sol155
{

  class MinStack
  {
  private:
    stack<int> minSt;
    stack<int> st;

  public:
    MinStack();
    void push(int val);
    void pop();
    int top();
    int getMin();
  };

  class Solution
  {
  private:
  public:
  };
}
#endif