#include<iostream>
#include<conio.h>
#include"ibrahem.h"
using namespace std;
int main()
{
	display();
	//====array=====
	int x[50];
    int n = 5;
	//====queue=====
    int sizee = 3;
    int q[sizee];
    //====stack=====
     int s[10];
    //====linked list=====
     	node * h=NULL;
	dnode* p=NULL;
	char ch;
	do
	{ int op;
		int op2;
	ch=_getche();
		switch(ch)
		{
			case 0:
			ch=_getche();
			switch(ch)
			{
			
		//=====array=====
		case 59:
			{
	 do
    {
        showa();
        cin >> op;
        switch (op)
        {
        case 1:
            addarr(x, n);
            break;
        case 2:
            print_a(x, n);
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
		//=====stack=====
		case 60:
			{
	 do
    {
        shows();
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
            print_s(s);
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
    break;
		}
		//=====linked list=====
		case 61:
			{
	 do
    {
    	displayl();
        cin >> op2;
        int op;
        switch (op2)
        {
        case 1:
                {
                do
                {
                    showl();
                    cin >> op;
                    switch (op)
                    {
            case 1: h=add_f(h); break;
			case 2:h=dell_f(h);break;
			case 3:print_sl(h);break;
			case 4:h=add_l(h);break;
			case 5:h=dell_e(h);break;
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
                    showl();
                    cin >> op;
                    switch (op)
                    {
                    case 1: p=ins_f(p); break;
		        	case 2:p=del_f(p);break;
					case 3:print_dl(p);break;
					case 4:p=ins_e(p);break;
					case 5:p=del_e(p);break;
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
        cin >> op2;
    } while (op2 != 0);
    break;
	}
	//======queue======
	case 62:
		{
	 do
    {
    	displayq();
        cin >> op2;
        int op;
        switch (op2)
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
                        print_cq(q,sizee);
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
                        print_q(q);
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
        cin >> op2;
    } while (op2 != 0);
    break;
		}
	}		
	}
	ch=_getch();
	}while(ch!=27);
}
