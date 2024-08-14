#include <iostream>
#include <string>

struct stu {
    std::string name;
    int n;
    int S;
};

int main() {
    int n, aver = 0, K = 100;
    std::cin >> n;
    stu stud[n + 1];

    for (int i = 1; i <= n; i++) {
        std::cin >> stud[i].name;
        std::cin >> stud[i].n;
        stud[i].S = i;
    }

    for (int i = 1; i <= n; i++)
        aver += stud[i].n;
    aver = aver / n;
    aver /= 2;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            K = ((abs(aver - stud[j].n)) > K) ? stud[j].S : K;
        }
    }

    std::cout << aver << " " << stud[K].name << std::endl;

    return 0;
}

