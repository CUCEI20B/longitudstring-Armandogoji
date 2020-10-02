#include <iostream>

using namespace std;

int main() {
    string cadena;
    //cin >> cadena; solo lee hasta el primer espacio y no toda la cadena
    getline(cin, cadena);
    cout << cadena.size() <<endl;

    return 0;
}