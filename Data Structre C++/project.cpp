#include <iostream>
#include<conio.h>
using namespace std;
void display()
{
	cout<<"do you want array press f1\n";
		cout<<"do you want stack press f2\n";
			cout<<"do you want linked list press f3\n";
			cout<<"do you want queue press f4\n";
				cout<<"do you want exit press esc\n";
}
//========================array========================================
void showa()
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

void print_a(int x[], int n)
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
    print_a(x, n);
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
    print_a(x, n);
}
void deleete(int x[], int &n)
{
    int y;
    int f = 0; // for not reblication output not found
    cout << "enter element to delete:";
    cin >> y;
     cout << "the elments before delete:";
        print_a(x, n);
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
            print_a(x, n);
    if (f == 0)
        cout << "the element not found in the array\n";
}
//========================queue========================================
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
        cout << "overflow\n";
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
        cout << "overflow\n";
    else
    {
        cout << "enter value:";
        cin >> q[++r];
    }
}
void sdequeue(int q[])
{
    if (f > r || f == -1)
        cout << "underflow\n";
    else
    {
        cout << q[f] << endl;
        f = f + 1;
    }
}
void print_q(int q[])
{
	if(r==-1)
	cout<<"no data\n";
	else{
    for (int i = f; i <= r; i++)
    {
        cout << q[i] << " ";
    }
    cout << endl;}
}
void print_cq(int q[],int sizee)
{
	if(r==-1)
	cout<<"no data\n";
	int i=f;
	while(i!=r){
		cout<<q[i]<<" ";
		i=(i+1)%sizee;
	}
	if(i==r)
	cout<<q[i]<<" ";

}
//========================stack========================================
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
void print_s (int s[])
{
    for (int i = top; i>= 0;i--)
    {
        cout << s[i]<<" ";
    }
}
//========================linked list========================================
void displayl()
{
    cout << "do you want singly linked list press 1\n";
    cout << "do you want doubly linked list press 2\n";
    cout << "do you want exit linked list press 0 \n";
}
void showl()
{
    cout << "press 1 to add first\n";
    cout << "press 2 to delete first\n";
    cout << "press 3 to add end\n";
  cout << "press 4 to delete end\n";
}

struct node
{
	int x;
	node *l;
};
struct dnode
{
	int x;
	dnode *l;
	dnode*r;
};
node * add_f(node *h)
{
	node * newnode=new(node);
	if(newnode==NULL)
	cout<<"nospace\n";
	cout<<"enter elment";
		cin>>newnode->x;
		newnode->l=h;
		h=newnode;
		return h;
}
node *dell_f(node*h)
{
	if(h==NULL)
	cout<<"no node";
	else{
	
	node * temp=h;
	h=h->l;
	cout<<temp->x<<endl;
	temp->l=NULL;
	delete(temp);
	}
	return h;
}
void print_sl(node *h)
{
	while(h!=NULL)
	{
		cout<<h->x<<endl;
		h=h->l;
	}
}
void print_dl(dnode *p)
{
	while(p!=NULL)
	{
		cout<<p->x<<endl;
		p=p->l;
	}
}
node *add_l(node*h)
{
	node* temp=new(node);
	
	cout<<"enter element\n";
	cin>>temp->x;
	temp->l=NULL;
	if(h==NULL)
	{
		h=temp;
	}
	
	else {node*w=h;
		while(w->l!=NULL)
		w=w->l;
		w->l=temp;
	}
	return h;
}
node* dell_e(node*h)
{
	if(h==NULL)
	cout<<"no data\n";
	else
	{
		node * temp=h,*prev=NULL;
		while(temp->l!=NULL)
		{
			prev=temp;
			temp=temp->l;
		}
	cout<<temp->x<<endl;
		if(prev==NULL)
		h==NULL;
		else
			prev->l=NULL;
			delete(temp);
	}
	
	return h;
}
dnode *ins_f(dnode*p)
{
if(p==NULL)
{
	p=new(dnode);
	cin>>p->x;
	p->l=NULL;
	p->r=NULL;
}
else 
{
	dnode*t=new(dnode);
	cout<<"enter value";
	cin>>t->x;	
	t->r=NULL;
	t->l=p;
	p->r=t;
	p=t;
}
return p;
}
dnode* del_f(dnode*p)
{
	if(p==NULL)
	cout<<"no node\n";
	else {	
	dnode*t=p;
	p=p->l;
	p->r=NULL;
	t->l=NULL;
	cout<<t->x;
	delete(t);
	}
	return p;

}
dnode*ins_e(dnode*p)
{
	if(p==NULL)
	{
		p=new(dnode);
		cout<<"enter value";
		cin>>p->x;
		p->l=NULL;
		p->r=NULL;
	}
	else {
		dnode*t=new(dnode);
		cout<<"enter value";
		cin>>t->x;
		dnode*w=p;
		while(w->l!=NULL)
		w=w->l;
		w->l=t;
		t->r=w;
		t->l=NULL;
	}
	return p;
}
dnode*del_e(dnode*p)
{
	if(p==NULL)
	cout<<"no data\n";
	else {
		dnode*w=p;
		while(w->l!=NULL)
		w=w->l;
		if(p->l==NULL)
		{
			p=NULL;
			cout<<w->x<<endl;
			delete(w);
		}
		else{
			w->r->l=NULL;
			w->r=NULL;
		cout<<w->x;
		delete(w);
	}
	}
	return p;
}
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
