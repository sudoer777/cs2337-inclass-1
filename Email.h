//
// Created by ethan on 9/22/22.
//

#ifndef CS2337_INCLASS_1_EMAIL_H
#define CS2337_INCLASS_1_EMAIL_H
#include <string>

class Email : Document {

    public:
        Email();
        string GetSender() {return sender;}
        void SetSender(string s) {sender = s;}
        string GetRecipient() {return recipient;}
        void SetRecipient(string s) {recipient = s;}
        string GetTitle() {return title;}
        void SetTitle(string s) {title = s;}
    private:
        string sender;
        string recipient;
        string title;

};

Email :: Email() : Document()
{
    
}

#endif //CS2337_INCLASS_1_EMAIL_H
