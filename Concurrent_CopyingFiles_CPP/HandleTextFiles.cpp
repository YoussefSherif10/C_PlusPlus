//
// Created by youssef fekry on 06/02/2023.
//

#include "HandleTextFiles.h"

string HandleTextFiles::readFile() {
    if (file.is_open()) {
        string str, content;
        while (getline(file, str))
            content += (str + "\n");
        return content;
    }
    return "Not opened";
}