#include<iostream>
using namespace std;
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
void print(node *h)
{
	while(h!=NULL)
	{
		cout<<h->x<<endl;
		h=h->l;
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
{int op;
	node * h=NULL;
	dnode* p=NULL;
	do {	
		cin>>op;
		switch(op)
		{
			case 1: h=add_f(h); break;
			case 2:h=dell_f(h);break;
			case 3:print(h);break;
			case 4:h=add_l(h);break;
			case 5:dell_e(h);break;
			default :
			cout<<"this opration not found";break;
		}
		cin>>op;
		
	}while(op!=0);
}
