#include <iostream>
#include <string>

using namespace std;

struct Person
{

    char name[32];
    int age;
    void print_person()
    {
        cout << name << " " << age << endl;
    }
};

int main(void)
{

    struct Person person = {"Hong Won tae", 29};
    person.print_person();

    return 0;
}