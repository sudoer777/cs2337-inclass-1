//
// Created by ethan on 9/22/22.
//

#ifndef CS2337_INCLASS_1_FILE_H
#define CS2337_INCLASS_1_FILE_H

class File : public Document {
public:
    File();
    std::string GetFilename();
    std::string GetPathname();
    void SetFilename();
    void SetPathname();
private:
    std::string filename;
    std::string pathname;
};


#endif //CS2337_INCLASS_1_FILE_H
