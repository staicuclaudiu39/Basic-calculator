#include <iostream>
using namespace std;

int main()
{
    float a, b;
    char da;
    char semn;
    bool ok = true;
    while (ok == true)
    {
        cout << "Ce operatie doresti sa faci (+, -, :, *): ";
        cin >> semn;
        while ((semn != '+') && (semn != '-') && (semn != ':') && (semn != '*'))
        {
            cout << "Semn invalid, introduceti un semn valid: ";
            cin >> semn;
        }

        if (semn == '+')
        {
            cout << "Introduceti numerele pe care doriti sa le adunati: ";
            cin >> a >> b;
            cout << "Suma lor este: " << a + b << endl;
        }

        if (semn == '-')
        {
            cout << "Intoruceti numerele pe care doriti sa le scadeti: ";
            cin >> a >> b;
            cout << "Diferenata lor este: " << a - b << endl;
        }

        if (semn == ':')
        {
            cout << "Introduceti numerele pe care doriti sa le impartiti: ";
            cin >> a >> b;
            while (b == 0)
            {
                cout << "Numaratorul nu este valid, introduceti altul: ";
                cin >> b;
            }
            cout << "Numerele impartite sunt: " << a / b << endl;
        }

        if (semn == '*')
        {
            cout << "Introduceti numerele pe care doriti sa la inmultiti: ";
            cin >> a >> b;
            cout << "Produsul lor este: " << a * b << endl;
        }

        cout << "Doriti sa mai faceti alta operatie?(d/n) ";
        cin >> da;
        if (da == 'd' || da == 'D')
            ok = true;
        else
            ok = false;
    }

    cout << endl;
    cout << "Va multumesc ca ati folosit calculatorul!";

    return 0;
}