#include<iostream>
#include<stack>
using namespace std;

bool areBracketsBalanced(string expr)
{

    // Declare a stack to hold the previous brackets.

    stack<char> temp;

    for (int i = 0; i < expr.length(); i++) {

        if (temp.empty()) {

             

            // If the stack is empty 

            // just push the current bracket

            temp.push(expr[i]);

        }

        else if ((temp.top() == '(' && expr[i] == ')')

                 || (temp.top() == '{' && expr[i] == '}')

                 || (temp.top() == '[' && expr[i] == ']')) {

             

            // If we found any complete pair of bracket

            // then pop

            temp.pop();

        }

        else {

            temp.push(expr[i]);

        }

    }

    if (temp.empty()) {

         

        // If stack is empty return true

        return true;

    }

    return false;
}
 

int main(){
    stack<char> s;
    string st; cin >> st;
    if(areBracketsBalanced(st)) cout << "Yes";
    else cout << "No";
    return 0;
}
