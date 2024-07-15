#include <iostream>
using namespace std;
void show()
{
    cout << "press 1 to addarr\n";
    cout << "press 2 to print\n";
    cout << "press 3 to search\n";
    cout << "press 4 to sort\n";
    cout << "press 5 to delete\n";
    cout << "press 10 to exit\n";
}
void addarr(int x[], int &n)
{
    cout << "enter element to adding:";
    cin >> x[++n];
}

void print(int x[], int n)
{
    for (int i = 1; i <= n; i++)
        cout << x[i] << " ";
    cout << endl;
}
void search(int x[], int n)
{
    int y;
    int f = 0;
    cout << "enter the element to search:";
    cin >> y;
    for (int i = 1; i <= n; i++)
    {

        if (x[i] == y)
            f = 1;
    }
    if (f == 1)
        cout << "found\n";
    else
        cout << "not found\n";
}
void sort(int x[], int n)
{
    cout << "the array before sorting\n";
    print(x, n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (x[i] > x[j])
            {
                int t = x[i];
                x[i] = x[j];
                x[j] = t;
            }
        }
    }
    cout << "the array after sorting\n";
    print(x, n);
}
void deleete(int x[], int &n)
{
    int y;
    int f = 0; // for not reblication output not found
    cout << "enter element to delete:";
    cin >> y;
     cout << "the elments before delete:";
        print(x, n);
    for (int i = 1; i <= n; i++)
    {
        if (x[i] == y)
        {
            ++f;
            y = i; 
            int t = x[y];
            x[y] = x[n];
            x[n] = t;
            --n;
        }
    }
        cout << "the elments after delete:";
            print(x, n);
    if (f == 0)
        cout << "the element not found in the array\n";
}
int main()
{
    int x[50];
    int n = 5;
    int op;
    for (int i = 1; i <= n; i++)
    {
        cout << "enter elment number [" << i << "]";
        cin >> x[i];
    }
    do
    {
        show();
        cin >> op;
        switch (op)
        {
        case 1:
            addarr(x, n);
            break;
        case 2:
            print(x, n);
            break;
        case 3:
            search(x, n);
            break;
        case 4:
            sort(x, n);
            break;
        case 5:
            deleete(x, n);
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
