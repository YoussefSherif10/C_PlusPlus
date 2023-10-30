#include "OutputTextFiles.h"
#include "HandleTextFiles.h"
#include <thread>
#include <vector>

using namespace std;

void copyingFile(const string& readFile, const string& writeFile){
    HandleTextFiles rFile(readFile);
    OutputTextFiles wFile(writeFile);
    wFile.writeText(rFile.readFile());
}

int main() {
    const unsigned short numThreads = 7;
    vector<thread> threads;
    for (unsigned short i = 0; i < numThreads; ++i) {
        threads.emplace_back(thread(copyingFile, "Streams.txt", "Copy "+ to_string(i)+".txt"));
    }

    for (auto &i: threads) {
        i.join();
    }

    return 0;
}
