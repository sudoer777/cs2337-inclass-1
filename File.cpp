//
// Created by ethan on 9/22/22.
//

#include "File.h"

std::string File::GetFilename() {
    return filename;
}

std::string File::GetPathname() {
    return pathname;
}

void File::SetFilename(std::string fn) {
    filename = fn;
}

void File::SetPathname(std::string pn) {
    pathname = pn;
}