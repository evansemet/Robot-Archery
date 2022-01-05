#include <iostream>
#include <queue>
#include <iomanip>


double probability(int n, std::queue<char> que) {
    // case where we are only left with Darrin and thus he won
    if (que.size() == 1) {
        return 1;
    }


    // if recursion has gone on for this long, it is no longer
    // statistically significant and can be halted
    if (n >= 100 && que.front() == 'D') {
        return 1.0 / n;
    }


    // queue if the robot up succeeds
    std::queue<char> success(que);
    success.push(success.front());
    success.pop();


    // case where a robot other than Darrin is up
    if (que.front() != 'D') {
        // queue if the robot up fails
        std::queue<char> fail(que);
        fail.pop();

        // return both the case when the robot succeeds and fails
        return 1.0 / n * probability(n + 1, success) +
                (1 - 1.0 / n) * probability(n + 1, fail);
    } else {
        // case where Darrin is up
        return 1.0 / n * probability(n + 1, success);
    }
}


int main() {
    std::queue<char> robots;
    robots.push('A');
    robots.push('B');
    robots.push('C');
    robots.push('D');
    std::cout << std::setprecision(10) << probability(1, robots) << "\n";
}
