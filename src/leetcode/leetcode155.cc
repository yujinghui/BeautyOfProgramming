#include <string>
#include <vector>
#include <iostream>
using namespace std;
class MinStack
{
public:
    int minIdx = 0;
    int minVal = INT_MAX;
    vector<int> content;
    /** initialize your data structure here. */
    MinStack()
    {
    }

    void push(int val)
    {
        content.push_back(val);
        if (val < minVal)
        {
            minVal = val;
            minIdx = content.size() - 1;
        }
    }

    void pop()
    {
        if (content.size() - 1 == minIdx)
        {
            minVal = INT_MAX;
            for (int i = 0; i < content.size() - 1; i++)
            {
                if (minVal > content[i])
                {
                    minVal = content[i];
                    minIdx = i;
                }
            }
        }
        content.pop_back();
    }

    int top()
    {
        return content[content.size() - 1];
    }

    int getMin()
    {
        return minVal;
    }
};
int main()
{
    MinStack minStack;
    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);
    minStack.getMin();
    minStack.pop();
    minStack.top();
    minStack.getMin();
}