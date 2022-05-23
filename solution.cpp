#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <deque>
#include <string>
#include <sstream>
#include <algorithm>
#include <stack>
#include <functional>
using namespace sol155;
using namespace std;

/*takeaways
  - use two stacks
  - getMin needs to be in the constant time when retrieving an element
    - use a stack to track min values
*/

MinStack::MinStack()
{
}
void MinStack::push(int val)
{
  if (minSt.empty() || val <= minSt.top())
    minSt.push(val);
  st.push(val);
}
void MinStack::pop()
{
  if (minSt.top() == st.top())
    minSt.pop();
  st.pop();
}
int MinStack::top()
{
  return st.top();
}
int MinStack::getMin()
{
  return minSt.top();
}
