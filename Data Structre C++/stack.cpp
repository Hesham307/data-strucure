#include <iostream>
using namespace std;
int top = -1;
void shows()
{
    cout << "press 1 to push\n";
    cout << "press 2 to pop\n";
    cout << "press 3 to print\n";
    cout << "press 4 to exit\n";
}
void push(int s[])
{
    if (top == 9 )
        cout << "overflow\n";
    else
    {
        cout << "enter the value:";
        cin >> s[++top];
    }
}
void pop(int s[])
{
    if (top == -1)
        cout << "nodata\n";
    else
    {
        cout<<s[top--];
    }
}
void print (int s[])
{
    for (int i = top; i>= 0;i--)
    {
        cout << s[i]<<" ";
    }
}
int main()
{
    int s[10];
    int op;
    do
    {
        show();
        cin >> op;
        switch (op)
        {
        case 1:
            push(s);
            break;
        case 2:
            pop(s);
            break;
        case 3:
            print(s);
            break;

        case 4:
            break;
        default:
            cout << "this opreation not found\n";
            break;
        }
        cout << "if you want to exit press zero  else press any number\n";
        cin >> op;
    } while (op != 0);
}
