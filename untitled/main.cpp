#include <iostream>
#include <string>
#include <vector>

void settings_default();

using namespace std;
int main() {
    settings_default();
    return 0;
}
void settings_default()
{
    cout << "Default settings:" << '\n' << "g = 9.81" << '\n' << "pi = 3.14";
}