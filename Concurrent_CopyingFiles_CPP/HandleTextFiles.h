//
// Created by youssef fekry on 06/02/2023.
//

#ifndef TRY_HANDLETEXTFILES_H
#define TRY_HANDLETEXTFILES_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class HandleTextFiles {
public:
    explicit HandleTextFiles(const string &fileName){
        file.open(fileName);
    }

    ~HandleTextFiles(){
        file.close();
    }

    string readFile();

private:
    ifstream file;
};


#endif //TRY_HANDLETEXTFILES_H
