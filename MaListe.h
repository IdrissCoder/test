#include<iostream>
using namespace std;
template <class T>
class Mylist
{
	T val;
	Mylist<T> *Next;
	int Len=0;// nombre de cellules de la liste
	public:
		Mylist<T>*Suivant(){return Next;}
 		MyList(){} ;// Cstor par défaut
 		MyList(T x); // Cstor
 		void Add_Back(T x);
		//Ajout début dans la liste par défaut
 		Mylist<T> *Add_Front(T x);
		// Ajout début dans this et renvoyer une nouvelle liste  MyList<T> * Ajout_Debut(T x);
 		int Get	Len(){ return Len;}
 		void Afficher();
 		// Supprime la première occurence de val
		MyList<T>* Remove_First(T val);
 		// supprime ttes les occurences de val
		MyList<T>* removeAll(T val);
		// MyList<T>* Found(T val);

};

template<class T>
Mylist<T>::Mylist(T x)
{
	val = x;
	Len++;
	Next = NULL;
}

template<class T>
void Mylist<T>::Afficher()
{
	Mylist<T> *p;
	for(p=this;p;p=p->Suivant())
		cout<<p->val;
}

template<class T>
Mylist<T>* Mylist<T>::Add_Front(T x)
{
	Mylist<T> *nouveau = new Mylist<T>(x);

	nouveau->Suivant() = this->Suivant();
	this->Suivant()    = nouveau;

	temp = this->val;
	this->val    = nouveau->val;
	nouveau->val =temp;
	this->Len++;
	return this;
}
template<class T>
void Mylist<T>::Add_Back(T x)
{
	Mylist<T> *p;
	Mylist<T> *nouveau=new Mylist<T> (x);

	if(this->Len == 0)
	{
		Val = x;
	    Next = NULL;
	}
	if(this->Suivant() == NULL)
   	   this->Suivant() = nouveau;
	else if
	{
		for(p=this;p->Suivant()!=NULL;p=p->Suivant());
		p->Suivant() = nouveau;
	}
	this->Len++;
}



template<class T>
MyList<T>* Mylist<T>::Remove_First(T val)
{
	Mylist<T> *p,*q;

	if (this->val == val)
	{
		this->val =  this->Suivant()->val;;
		this->Suivant() = this->Suivant()->Suivant();
		delete this->Suivant();
		Len--;
		return this;
	}

	for(q=this,p=this->Suivant();p && p->val!= val;q=p;p=p->Next);
	if(p)
	{
		q->Suivant() = p->Suivant();
		delete p;
	}

	return this;

}




