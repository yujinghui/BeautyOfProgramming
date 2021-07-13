#include <iostream>
#include <string>
#include <stack>
#include <stdio.h>
#include <unordered_map>
using namespace std;

/**
 * 四则运算解析.
 */

int doCalc(int a, int b, char op)
{
    if (op == '/')
    {
        return a / b;
    }
    else if (op == '*')
    {
        return a * b;
    }
    else if (op == '+')
    {
        return a + b;
    }
    else
    {
        return a + b;
    }
}

int calc(string &inputstr)
{
    stack<int> operands;
    stack<char> operators;
    unordered_map<char, int> weight_map;
    weight_map['-'] = 1;
    weight_map['+'] = 1;
    weight_map['*'] = 2;
    weight_map['/'] = 2;
    operands.push(atoi(&inputstr[0]));
    int i = 0;
    while (operands.size() > 0 && i < inputstr.size())
    {
        char c = inputstr[i];
        if (!isalpha(c))
        {
            operands.push(atoi(&c));
        }
        else
        {
            if (operators.size() > 0)
            {
                char op = operators.top();
                operators.pop();
                if (weight_map[op] == weight_map[c])
                {
                    int a = operands.top();
                    operators.pop();
                    int b = operands.top();
                    operators.pop();
                    operands.push(doCalc(a, b, op));
                }
                else
                {
                    int a = operands.top();
                    operators.pop();
                    int b = atoi(&inputstr[i + 1]);
                    operands.push(doCalc(a, b, op));
                }
            }
            else
            {
                operators.push(c);
            }
        }
        i++;
    }
    return operands.top();
}

int main()
{
    string inputstr = "1+2*3-4/2";
    cout << calc(inputstr) << endl;
}