#include <iostream>
#include <string>

using namespace std;

struct Person
{

    char name[32] = "Komodus";
    int age = 30;
    void print_person()
    {
        cout << name << " " << age << endl;
    }
};

int main(void)
{

    Person person = {"Hong Won tae", 29};
    person.print_person();

    Person person_2;
    person_2.print_person();

    return 0;
}