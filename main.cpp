#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <vector>

using namespace std;

class jucarie
{
protected:
    string denumire;
    int dimensiune;
    string tip;
    static int nrj;

public:
    jucarie();
    ~jucarie();
    virtual void citire();
    virtual void afisare();

    friend istream& operator>>(istream&, jucarie&);
    friend ostream& operator<<(ostream&, jucarie&);
};

int jucarie::nrj = 0;

jucarie::jucarie()
{
    denumire = "";
    dimensiune = 0;
    tip = "";
    nrj++;
}

jucarie::~jucarie()
{
    denumire = "";
    dimensiune = 0;
    tip = "";
}

void jucarie::citire()
{
    cout<<"Denumire jucarie:";
    getline(cin, denumire);
    cout<<"Dimensiune jucarie:";
    cin>>dimensiune;
    cin.get();
    cout<<"Tip jucarie:";
    getline(cin, tip);
}

void jucarie::afisare()
{
    cout<<"Denumire jucarie:"<<denumire<<endl;
    cout<<"Dimensiune jucarie:"<<dimensiune<<endl;
    cout<<"Tip jucarie:"<<tip<<endl;
}

istream& operator>>(istream& in, jucarie& a)
{
    a.citire();
    return in;
}

ostream& operator<<(ostream& out, jucarie& a)
{
    a.afisare();
    return out;
}

class jucclasica : public jucarie
{
private:
    string material;
    string culoare;

public:
    jucclasica();
    ~jucclasica();
    void citire();
    void afisare();

    friend istream& operator>>(istream& , jucclasica& );
    friend ostream& operator<<(ostream& , jucclasica& );
};

jucclasica::jucclasica() : jucarie()
{
    denumire = "";
    dimensiune = 0;
    tip = "";
    material = "";
    culoare = "";
    nrj++;
}

jucclasica::~jucclasica()
{
    denumire = "";
    dimensiune = 0;
    tip = "";
    material = "";
    culoare = "";
}

void jucclasica::citire()
{
    cout<<"Denumire jucarie:";
    getline(cin, denumire);
    cout<<"Dimensiune jucarie:";
    cin>>dimensiune;
    cin.get();
    cout<<"Tip jucarie:";
    getline(cin, tip);
    cout<<"Material jucarie:";
    getline(cin, material);
    cout<<"Culoare jucarie:";
    getline(cin, culoare);
}

void jucclasica::afisare()
{
    cout<<"Denumire jucarie:"<<denumire<<endl;
    cout<<"Dimensiune jucarie:"<<dimensiune<<endl;
    cout<<"Tip jucarie:"<<tip<<endl;
    cout<<"Material jucarie:"<<material<<endl;
    cout<<"Culoare jucarie:"<<culoare<<endl;
}

istream& operator>>(istream& in, jucclasica& a)
{
    a.citire();
    return in;
}

ostream& operator<<(ostream& out, jucclasica& a)
{
    a.afisare();
    return out;
}

class juceducativa : public virtual jucarie
{
protected:
    string abilitate;

public:
    juceducativa();
    ~juceducativa();
    void citire();
    void afisare();

    friend istream& operator>>(istream& , juceducativa& );
    friend ostream& operator<<(ostream& , juceducativa& );
};

juceducativa::juceducativa() : jucarie()
{
    denumire = "";
    dimensiune = 0;
    tip = "";
    abilitate = "";
    nrj++;
}

juceducativa::~juceducativa()
{
    denumire = "";
    dimensiune = 0;
    tip = "";
    abilitate = "";
}

void juceducativa::citire()
{
    cout<<"Denumire jucarie:";
    getline(cin, denumire);
    cout<<"Dimensiune jucarie:";
    cin>>dimensiune;
    cin.get();
    cout<<"Tip jucarie:";
    getline(cin, tip);
    cout<<"Abilitate jucarie:";
    getline(cin, abilitate);
}

void juceducativa::afisare()
{
    cout<<"Denumire jucarie:"<<denumire<<endl;
    cout<<"Dimensiune jucarie:"<<dimensiune<<endl;
    cout<<"Tip jucarie:"<<tip<<endl;
    cout<<"Abilitate jucarie:"<<abilitate<<endl;
}

istream& operator>>(istream& in, juceducativa& a)
{
    a.citire();
    return in;
}

ostream& operator<<(ostream& out, juceducativa&a)
{
    a.afisare();
    return out;
}

class jucelect : public virtual jucarie
{
protected:
    int nrbat;

public:
    jucelect();
    ~jucelect();
    void citire();
    void afisare();

    friend istream& operator>>(istream&, jucelect&);
    friend ostream& operator<<(ostream&, jucelect&);
};

jucelect::jucelect() : jucarie()
{
    denumire = "";
    dimensiune = 0;
    tip = "";
    nrbat = 0;
    nrj++;
}

jucelect::~jucelect()
{
    denumire = "";
    dimensiune = 0;
    tip = "";
    nrbat = 0;
}

void jucelect::citire()
{
    cout<<"Denumire jucarie:";
    getline(cin, denumire);
    cout<<"Dimensiune jucarie:";
    cin>>dimensiune;
    cin.get();
    cout<<"Tip jucarie:";
    getline(cin, tip);
    cout<<"Nr baterii jucarie:";
    cin>>nrbat;
}

void jucelect::afisare()
{
    cout<<"Denumire jucarie:"<<denumire<<endl;
    cout<<"Dimensiune jucarie:"<<dimensiune<<endl;
    cout<<"Tip jucarie:"<<tip<<endl;
    cout<<"Nr baterii jucarie:"<<nrbat<<endl;
}

istream& operator>>(istream& in, jucelect& a)
{
    a.citire();
    return in;
}

ostream& operator<<(ostream& out, jucelect& a)
{
    a.afisare();
    return out;
}

class jucmoderna : public jucelect, juceducativa
{
private:
    string brand;
    string model;

public:
    jucmoderna();
    ~jucmoderna();
    void citire();
    void afisare();

    friend istream& operator>>(istream& , jucmoderna& );
    friend ostream& operator<<(ostream& , jucmoderna& );
};

jucmoderna::jucmoderna() : jucarie(), juceducativa(), jucelect()
{
    denumire = "";
    dimensiune = 0;
    tip = "";
    nrbat = 1;
    brand = "";
    model = "";
    abilitate = "generala";
    nrj++;
}

jucmoderna::~jucmoderna()
{
    denumire = "";
    dimensiune = 0;
    brand = "";
    model = "";
    tip = "";
    nrbat = 0;
    abilitate = "";
}

void jucmoderna::citire()
{
    cout<<"Denumire jucarie:";
    getline(cin, denumire);
    cout<<"Dimensiune jucarie:";
    cin>>dimensiune;
    cin.get();
    cout<<"Tip jucarie:";
    getline(cin, tip);
    cout<<"Brand jucarie:";
    getline(cin, brand);
    cout<<"Model jucarie:";
    getline(cin, model);
}

void jucmoderna::afisare()
{
    cout<<"Denumire jucarie:"<<denumire<<endl;
    cout<<"Dimensiune jucarie:"<<dimensiune<<endl;
    cout<<"Tip jucarie:"<<tip<<endl;
    cout<<"Nr baterii jucarie:"<<nrbat<<endl;
    cout<<"Abilitate jucarie:"<<abilitate<<endl;
    cout<<"Brand jucarie:"<<brand<<endl;
    cout<<"Model jucarie:"<<model<<endl;
}

istream& operator>>(istream& in, jucmoderna& a)
{
    a.citire();
    return in;
}

ostream& operator<<(ostream& out, jucmoderna& a)
{
    a.afisare();
    return out;
}

class copil
{
protected:
    static int nrv;
    int id;
    string nume;
    string prenume;
    string adresa;
    int varsta;
    int nrfb;
    vector<jucarie *> jucprimite;

public:
    copil();
    ~copil();
    virtual void citire();
    virtual void afisare();
    string getNume();
    int getVarsta();
    static int getNrv();
    const int getFapteBune();
    void adaugareFapteBune(int);
    friend istream& operator>>(istream& , copil& );
    friend ostream& operator<<(ostream& , copil& );
};

void copil::adaugareFapteBune(int n)
{
    nrfb += n;
    for (int i = 1; i <= n; i++) // citirea a nrfb(M) jucarii
    {
        bool ok = false;
        jucarie *c;
        jucprimite.push_back(c);
        do
        {
            try
            {
                string actiune;
                cout<<"Tipul jucariei (clasica,electronica,educativa,moderna) numarul"<<i<<":";
                getline(cin, actiune);
                if (actiune == "clasica")
                    jucprimite.back() = new jucclasica();
                else if (actiune == "electronica")
                    jucprimite.back() = new jucelect();
                else if (actiune == "educativa")
                    jucprimite.back() = new juceducativa();
                else if (actiune == "moderna")
                    jucprimite.back() = new jucmoderna();
                else
                    throw("Tipul introdus nu exista");
                ok = true;
                jucprimite.back()->citire();
            }
            catch (const char e[])
            {
                cout<<"Eroare! "<<endl
                    <<e<<endl;
                cout<<"Reintroduceti tipul."<<endl;
            }
        } while (ok == false);
    }
}

const int copil::getFapteBune()
{
    return nrfb;
}

int copil::getNrv()
{
    return nrv;
}

string copil::getNume()
{
    return nume;
}

int copil::getVarsta()
{
    return varsta;
}

int copil::nrv = 0;

copil::copil()
{
    nrv++;
    id = nrv;
    nume = "";
    prenume = "";
    adresa = "";
    varsta = 0;
    nrfb = 0;
    jucarie *c;
    jucprimite.push_back(c);
}

copil::~copil()
{
    id = 0;
    nrv--;
    nume = "";
    prenume = "";
    adresa = "";
    varsta = 0;
    nrfb = 0;
    jucprimite.clear();
}

void copil::citire()
{
    cout<<"Nume copil:";
    getline(cin, nume);
    cout<<"Prenume copil:";
    getline(cin, prenume);
    cout<<"Adresa copil:";
    getline(cin, adresa);
    cout<<"Varsta copil:";
    cin>>varsta;
    cout<<"Nr fapte bune:";
    cin>>nrfb;
    cin.get();
    for (int i = 1; i <= nrfb; i++) // citirea a nrfb(M) jucarii
    {
        bool ok = false;
        jucarie *c;
        jucprimite.push_back(c);
        do
        {
            try
            {
                string actiune;
                cout<<"Tipul jucariei (clasica,electronica,educativa,moderna) numarul"<<i<<":";
                getline(cin, actiune);
                if (actiune == "clasica")
                    jucprimite.back() = new jucclasica();
                else if (actiune == "electronica")
                    jucprimite.back() = new jucelect();
                else if (actiune == "educativa")
                    jucprimite.back() = new juceducativa();
                else if (actiune == "moderna")
                    jucprimite.back() = new jucmoderna();
                else
                    throw("Tipul introdus nu exista");
                ok = true;
                jucprimite.back()->citire();
            }
            catch (const char e[])
            {
                cout<<"EROARE"<<endl
                    <<e<<endl;
                cout<<"Reintroduceti tipul."<<endl;
            }
        } while (ok == false);
    }
}

void copil::afisare()
{
    cout<<endl;
    cout<<"copilul nr:"<<id<<endl;
    cout<<"Nume copil:"<<nume<<endl;
    cout<<"Prenume copil:"<<prenume<<endl;
    cout<<"Adresa copil:"<<adresa<<endl;
    cout<<"Varsta copil:"<<varsta<<endl;
    cout<<"Numar fapte bune:"<<nrfb<<endl;
    for (int i = 1; i <= nrfb; i++)
        cout<<endl
            <<*jucprimite[i];
}

istream& operator>>(istream& in, copil& a)
{
    a.citire();
    return in;
}

ostream& operator<<(ostream& out, copil& a)
{
    a.afisare();
    return out;
}

class copilcuminte : public copil
{
private:
    int nrDulciuri;

public:
    copilcuminte();
    ~copilcuminte();
    virtual void citire();
    virtual void afisare();
    copilcuminte& operator=(copilcuminte& );

    friend istream& operator>>(istream& , copilcuminte& );
    friend ostream& operator<<(ostream& , copilcuminte& );
};

copilcuminte::~copilcuminte()
{
    id = 0;
    nrv--;
    nume = "";
    prenume = "";
    adresa = "";
    varsta = 0;
    nrfb = 0;
    nrDulciuri = 0;
    jucprimite.clear();
}

copilcuminte::copilcuminte() : copil()
{
    nrv++;
    id = nrv;
    nume = "";
    prenume = "";
    adresa = "";
    varsta = 0;
    nrfb = 0;
    nrDulciuri = 0;
    jucarie *c;
    jucprimite.push_back(c);
}

void copilcuminte::citire()
{
    cout<<"Nume copil:";
    getline(cin, nume);
    cout<<"Prenume copil:";
    getline(cin, prenume);
    cout<<"Adresa copil:";
    getline(cin, adresa);
    cout<<"Varsta copil:";
    cin>>varsta;
    cout<<"Numar dulciuri:";
    cin>>nrDulciuri;
    bool fapte10 = false;
    cout<<"Nr fapte bune:";
    do
    {
        try
        {
            cin>>nrfb;
            if (nrfb < 10)
                throw("Un copil cuminte are cel putin 10 fapte bune");
            fapte10 = true;
        }
        catch (const char e[])
        {
            cout<<"EROARE"<<endl
                <<e<<endl;
            cout<<"Reintroduceti nr de fapte bune."<<endl;
        }
    } while (fapte10 == false);
    cin.get();
    for (int i = 1; i <= nrfb; i++)
    {
        bool ok = false;
        jucarie *c;
        jucprimite.push_back(c);
        do
        {
            try
            {
                string actiune;
                cout<<"Tipul jucariei (clasica,electronica,educativa,moderna) numarul"<<i<<":";
                getline(cin, actiune);
                if (actiune == "clasica")
                    jucprimite.back() = new jucclasica();
                else if (actiune == "electronica")
                    jucprimite.back() = new jucelect();
                else if (actiune == "educativa")
                    jucprimite.back() = new juceducativa();
                else if (actiune == "moderna")
                    jucprimite.back() = new jucmoderna();
                else
                    throw("Tipul introdus nu exista");
                ok = true;
                jucprimite.back()->citire();
            }
            catch (const char e[])
            {
                cout<<"EROARE"<<endl
                    <<e<<endl;
                cout<<"Reintroduceti tipul."<<endl;
            }
        } while (ok == false);
    }
}

void copilcuminte::afisare()
{
    cout<<endl;
    cout<<"copilul nr:"<<id<<endl;
    cout<<"Nume copil:"<<nume<<endl;
    cout<<"Prenume copil:"<<prenume<<endl;
    cout<<"Adresa copil:"<<adresa<<endl;
    cout<<"Varsta copil:"<<varsta<<endl;
    cout<<"Numar dulciuri:"<<nrDulciuri<<endl;
    cout<<"Numar fapte bune:"<<nrfb<<endl;
    for (int i = 1; i <= nrfb; i++)
        cout<<endl<<*jucprimite[i];
}

istream& operator>>(istream& in, copilcuminte& a)
{
    a.citire();
    return in;
}

ostream& operator<<(ostream& out, copilcuminte& a)
{
    a.afisare();
    return out;
}

class copilobrz : public copil
{
private:
    int nrcarb;

public:
    copilobrz();
    ~copilobrz();
    virtual void citire();
    virtual void afisare();

    friend istream& operator>>(istream& , copilobrz& );
    friend ostream& operator<<(ostream& , copilobrz& );
};

copilobrz::copilobrz() : copil()
{
    nrv++;
    id = nrv;
    nume = "";
    prenume = "";
    adresa = "";
    varsta = 0;
    nrfb = 0;
    nrcarb = 0;
    jucarie *c;
    jucprimite.push_back(c);
}

copilobrz::~copilobrz()
{
    id = 0;
    nrv--;
    nume = "";
    prenume = "";
    adresa = "";
    varsta = 0;
    nrfb = 0;
    nrcarb = 0;
    jucprimite.clear();
}

void copilobrz::citire()
{
    cout<<"Nume copil:";
    getline(cin, nume);
    cout<<"Prenume copil:";
    getline(cin, prenume);
    cout<<"Adresa copil:";
    getline(cin, adresa);
    cout<<"Varsta copil:";
    cin>>varsta;
    cout<<"Numar carbuni:";
    cin>>nrcarb;
    cout<<"Nr fapte bune:";
    cin>>nrfb;
    cin.get();
    for (int i = 1; i <= nrfb; i++)
    {
        bool ok = false;
        jucarie *c;
        jucprimite.push_back(c);
        do
        {
            try
            {
                string actiune;
                cout<<"Tipul jucariei (clasica,electronica,educativa,moderna) numarul"<<i<<":";
                getline(cin, actiune);
                if (actiune == "clasica")
                    jucprimite.back() = new jucclasica();
                else if (actiune == "electronica")
                    jucprimite.back() = new jucelect();
                else if (actiune == "educativa")
                    jucprimite.back() = new juceducativa();
                else if (actiune == "moderna")
                    jucprimite.back() = new jucmoderna();
                else
                    throw("Tipul introdus nu exista");
                ok = true;
                jucprimite.back()->citire();
            }
            catch (const char e[])
            {
                cout<<"EROARE"<<endl
                    <<e<<endl;
                cout<<"Reintroduceti tipul."<<endl;
            }
        } while (ok == false);
    }
}

void copilobrz::afisare()
{
    cout<<endl;
    cout<<"Copilul nr:"<<id<<endl;
    cout<<"Nume copil:"<<nume<<endl;
    cout<<"Prenume copil:"<<prenume<<endl;
    cout<<"Adresa copil:"<<adresa<<endl;
    cout<<"Varsta copil:"<<varsta<<endl;
    cout<<"Numar carbuni:"<<nrcarb<<endl;
    cout<<"Numar fapte bune:"<<nrfb<<endl;
    for (int i = 1; i <= nrfb; i++)
    cout<<endl<<*jucprimite[i];
}

istream& operator>>(istream& in, copilobrz& a)
{
    a.citire();
    return in;
}

ostream& operator<<(ostream& out, copilobrz& a)
{
    a.afisare();
    return out;
}
class MeniuSingleton {
    private:
   static MeniuSingleton *i;

   MeniuSingleton() {

   }
   public:
   static MeniuSingleton *geti() {
      if (!i)
      i = new MeniuSingleton;
      return i;
   }
   void meniu()
    {

        cout<<"************************** MENIU **************************"<<endl
            <<endl;
        cout<<"1. Citirea a n copii"<<endl;
        cout<<"2. Afisarea unui copil in functie de nume"<<endl;
        cout<<"3. Sortare in functie de varsta"<<endl;
        cout<<"4. Sortare in functie de numarul de fapte bune"<<endl;
        cout<<"5. Adaugare fapte bune si jucarii"<<endl;
        cout<<"6. Afisare raport"<<endl;
        cout<<"0. Exit";
        cout<<endl;

       int actiune;
       vector<copil*> v;
        copil *c;
        v.push_back(c);

        do
    {
        cout<<"\nIntroduceti numarul actiunii: ";
        cin>>actiune;

        if (actiune==1)
           {

            cout<<"Numarul de copii:";
            int n;
            cin>>n;
            cin.get();
            for (int i = 1; i <= n; i++)
            {
                copil *c = new copil;
                v.push_back(c);
                cin>>*v.back();
            }
            cout<<endl;
            for (int i = 1; i <= n; i++)
                cout<<endl
                    <<*v.back();

        }
       if (actiune==2)
        {
            string nume;
            bool ok = false;
            cout<<"Numele copilului:";
            cin.get();
            getline(cin, nume);
            for (int i = 1; i <= copil::getNrv(); i++)
                if (v[i]->getNume() == nume)
                {
                    v[i]->afisare();
                    ok = true;
                    break;
                }
            if (ok == false)
                cout<<"copilul cautat nu se afla pe lista mosului"<<endl;

        }
        if (actiune==3)
        {
            for (int i = 1; i < copil::getNrv(); i++)
                for (int j = i + 1; j <= copil::getNrv(); j++)
                    if (v[i]->getVarsta() > v[j]->getVarsta())
                        swap(v[i], v[j]);
            for (int i = 1; i <= copil::getNrv(); i++)
                cout<<endl
                    <<*v[i];

        }
        if (actiune==4)
        {
            for (int i = 1; i < copil::getNrv(); i++)
                for (int j = i + 1; j <= copil::getNrv(); j++)
                    if (v[i]->getFapteBune() > v[j]->getFapteBune())
                        swap(v[i], v[j]);
            for (int i = 1; i <= copil::getNrv(); i++)
                cout<<endl
                    <<*v[i];

        }
        if (actiune==5)
        {
            for (int i = 1; i <= copil::getNrv(); i++)
                cout<<endl
                    <<*v[i];
            int id,nrFapte;
            cout<<endl
                <<"ID-ul copilului la care doriti sa adaugati fapte bune:";
            cin>>id;
            if(id > copil::getNrv())
                {cout<<"copilul nu exista!";
                break;}
            cout<<"Cate fapte doriti sa adaugati?";
            cin>>nrFapte;
            cin.get();
            v[id]->adaugareFapteBune(nrFapte);

        }

        } while (actiune != 0);

    }
};

 MeniuSingleton *MeniuSingleton::i = 0;
int main()
{  MeniuSingleton *m = MeniuSingleton::geti();
    m->meniu();


    return 0;
}
