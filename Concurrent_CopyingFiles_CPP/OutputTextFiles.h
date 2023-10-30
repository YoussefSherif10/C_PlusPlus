//
// Created by youssef fekry on 06/02/2023.
//

#ifndef TRY_OUTPUTTEXTFILES_H
#define TRY_OUTPUTTEXTFILES_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class OutputTextFiles {
public:
    explicit  OutputTextFiles(const string &fileName){
        file.open(fileName);
    }

    ~OutputTextFiles(){
        file.close();
    }

    void writeText(const string &content);

private:
    ofstream file;

};


#endif //TRY_OUTPUTTEXTFILES_H
