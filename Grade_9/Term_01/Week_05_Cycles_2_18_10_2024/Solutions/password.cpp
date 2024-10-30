#include <iostream>
using namespace std;
int main() {
    // Символите могат да бъдат от '0' до '9' и от 'a' до 'z'
    char start = '0';
    char end = 'z';
    /// Нека нашата парола е: ab1c2
    for (char c1 = start; c1 <= end; ++c1) {
        if ((c1 > '9' && c1 < 'a')) continue; // Пропускаме символите между '9' и 'a', за целта използваме continue
        for (char c2 = start; c2 <= end; ++c2) {
            if ((c2 > '9' && c2 < 'a')) continue;
            for (char c3 = start; c3 <= end; ++c3) {
                if ((c3 > '9' && c3 < 'a')) continue;
                for (char c4 = start; c4 <= end; ++c4) {
                    if ((c4 > '9' && c4 < 'a')) continue;
                    for (char c5 = start; c5 <= end; ++c5) {
                        if ((c5 > '9' && c5 < 'a')) continue;

                        // Проверяваме дали текущата комбинация съвпада с паролата
                        if (c1 == '0' && c2 == '1' && c3 == '2' && c4 == 'a' && c5 == '5') {
                            cout << "Password is found: "
                                      << c1 << c2 << c3 << c4 << c5 << endl;
                            return 0;
                        }
                        // Можем да отпечатваме всяка проверявана комбинация за визуализация
                        cout << "Checking: " << c1 << c2 << c3 << c4 << c5 << endl;
                    }
                }
            }
        }
    }

    cout << "Password is not found." << endl;
    return 0;
}
