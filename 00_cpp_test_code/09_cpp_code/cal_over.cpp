#include <iostream>

class Cents {

    private :
        int m_cents;
    
    public :
        Cents (int cents = 0) {m_cents = cents;}
        int getCetns () const {return m_cents;}
        int & getCents () {return m_cents;}


};

void add (const Cents &c1, const Cents &c2, Cents &c_cout) {
    
}

int main (void) {

    using namespace std;

    Cents cent1 {6};
    Cents cent2 {8};

    cout << cent1.getCetns() << endl;
    cout << cent2.getCetns() << endl;



    return 0;
}