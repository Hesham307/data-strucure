#include <iostream>
using namespace std;
int r = -1, f = -1;
void displayq()
{
    cout << "do you want circular queue press 1\n";
    cout << "do you want simple queue press 2\n";
    cout << "do you want exit queue press 0 \n";
}
void showq()
{
    cout << "press 1 to enqueue\n";
    cout << "press 2 to dequeue\n";
    cout << "press 3 to print\n";
    cout << "press 10 to exit\n";
}
void enqueue(int q[], int sizee)
{
    if (r == -1)
    {
        f = r = 0;
        cout << "enter value";
        cin >> q[r];
    }
    else if (f==(r+1)%sizee)
        cout << "is full\n";
    else
    {
        r = (r + 1) % sizee;
        cout << "enter value:";
        cin >> q[r];
    }
}
void dequeue(int q[])
{
    if (f == -1)
        cout << "no data\n";
    else if (f == r)
    {
        cout << q[f]<<"\n";
        f = r = -1;
    }
    else
    {
        cout << q[f++]<<"\n";
    }
}
void senqeueu(int q[], int sizee)
{
    if (r == -1)
    {
        f = r = 0;
        cout << "enter value";
        cin >> q[r];
    }
    else if (r == sizee - 1)
        cout << "is full\n";
    else
    {
        cout << "enter value:";
        cin >> q[++r];
    }
}
void sdequeue(int q[])
{
    if (f > r || f == -1)
        cout << "no data\n";
    else
    {
        cout << q[f] << endl;
        f = f + 1;
    }
}
void print(int q[])
{
    for (int i = f; i <= r; i++)
    {
        cout << q[i] << " ";
    }
    cout << endl;
}
int main()
{
    displayq();
    int sizee = 3;
    int q[sizee];
    int ch;
    do
    {
        cin >> ch;
        int op;
        switch (ch)
        {
        case 1:
                {
                do
                {
                    showq();
                    cin >> op;
                    switch (op)
                    {
                    case 1:
                        enqueue(q, sizee);
                        break;
                    case 2:
                        dequeue(q);
                        break;
                    case 3:
                        print(q);
                        break;

                    case 10:
                        break;
                    default:
                        cout << "this opreation not found\n";
                        break;
                    }
                    cout << "if you want to exit  from queue press zero  else press any number\n";
                    cin >> op;
                } while (op != 0);
                break;
            }
    case 2:{
                do
                {
                    showq();
                    cin >> op;
                    switch (op)
                    {
                    case 1:
                        senqeueu(q, sizee);
                        break;
                    case 2:
                        sdequeue(q);
                        break;
                    case 3:
                        print(q);
                        break;

                    case 10:
                        break;
                    default:
                        cout << "this opreation not found\n";
                        break;
                    }
                    cout << "if you want to exit press zero  else press any number\n";
                    cin >> op;
                } while (op != 0);
                break;
            }

        break;
     case 10:
            break;
        default:
            cout << "this opreation not found\n";
            break;
        }
        cout << "if you want to exit press zero  else press any number\n";
        cin >> ch;
    } while (ch != 0);
}
