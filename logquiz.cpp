#include <iostream>
#include <map>
#include <sstream>
#include <vector>
#include <iomanip>

int main() {
    std::string line;
    std::map<std::string, int> count;

    while (std::getline(std::cin, line)) {
        if (line == "*") {
            break;
        }

        std::istringstream iss(line);
        std::string date, time, user_id, question_id;
        iss >> date >> time >> user_id >> question_id;
        count[date]++;
    }

    for (const auto &entry : count) {
        std::cout << entry.first << " " << entry.second << std::endl;
    }

    return 0;
}
