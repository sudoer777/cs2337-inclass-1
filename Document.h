//
// Created by ethan on 9/22/22.
//

#ifndef CS2337_INCLASS_1_DOCUMENT_H
#define CS2337_INCLASS_1_DOCUMENT_H


class Document {
    public:
        Document();
        std::string GetContents() {return contents;}
        void SetContents(string inputString) {contents = inputString;}
    private:
        std::string contents;
};


#endif //CS2337_INCLASS_1_DOCUMENT_H
