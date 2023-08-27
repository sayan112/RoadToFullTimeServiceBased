//                         ******* Abstraction ************
// Abstraction means providing only some of the information to the user by hiding its internal implementation details.
// Abstraction is selecting data from a larger pool to show only relevant details of the object to the user.It helps in reducing programming complexity and efforts.It is one of the most important concepts of OOPs.
// Real - life example : When you send an email to someone, you just click send, and you get the success message;
// "what happens when you click send, how data is transmitted over the network to the recipient is hidden from you(because it is irrelevant to you)."
// We can implement Abstraction in C++ using classes.The class helps us to group data members and member functions using available access specifiers.A Class can decide which data members will be visible to the outside world and not .Access specifiers are the main pillar of implementing abstraction in C++.We can use access specifiers to enforce restrictions on class members.

// It allows you to provide custom implementations for operators, enabling objects of your class to be manipulated using operators just like built-in types. Operator overloading can lead to more readable code by providing a concise and natural syntax. For example, with operator overloading, you can write result = object1 + object2 instead of calling a specific member function like result = object1.add(object2).


#include <bits/stdc++.h>
using namespace std;
class implimentation
{
private:
    int a;
    int b;
    int result;

public:
// code reusability increases
    void plus(int a, int b)
    {
        result = a + b;
    }
    int getresults()
    {
        return result;
    }
};

int main()
{
    implimentation ab;
    ab.plus(10, 20);
    cout << ab.getresults();
}

// Advantages Of Abstraction 
//  ●Only you can make changes to your data or function, and no one else can.
//  ●It makes the application secure by not allowing anyone else to see the background details. 
//  ●Increases the reusability of the code. 
//  ●Avoids duplication of your code.













// Here is a counter question how email works ->
/*
Sending an email from one person to another involves a series of steps that occur within a networked environment. Here's a simplified overview of the process:

1. **Composing the Email:** The sender opens their email client (like Gmail, Outlook, Thunderbird, etc.) and starts composing a new email. They enter the recipient's email address, subject, message body, and any attachments.

2. **Sender's Mail Server:** Once the sender clicks "Send," their email client communicates with their outgoing mail server (SMTP server). This server is responsible for sending emails. The email client passes the email content to the SMTP server.

3. **DNS Lookup:** The sender's SMTP server determines the recipient's mail server (SMTP server) by looking up the recipient's domain name in the Domain Name System (DNS). DNS translates the domain name (like recipient'sdomain.com) into an IP address.

4. **Connecting to Recipient's Mail Server:** The sender's SMTP server establishes a connection with the recipient's SMTP server using the IP address obtained from DNS.

5. **SMTP Handshake:** The two servers engage in an SMTP handshake, where they exchange information about their capabilities, security protocols, and readiness to transmit emails.

6. **Recipient's Mail Server Acceptance:** Once the recipient's SMTP server accepts the connection and verifies the sender's credentials, the sender's SMTP server transfers the email, including the recipient's email address, subject, message, and attachments.

7. **Mail Delivery:** The recipient's SMTP server stores the incoming email in the recipient's mailbox.

8. **Recipient Retrieval:** The recipient uses their email client to connect to their incoming mail server (POP3 or IMAP server), authenticate themselves, and retrieve the new email.

9. **Recipient Reading:** The email client on the recipient's end displays the email content to the recipient. The recipient can read the message, view attachments, and perform various actions.

10. **Replying or Forwarding:** If the recipient wants to respond to the email, they can compose a new message, which then goes through a similar process to be sent back to the original sender.

It's important to note that emails can go through additional steps if encryption and security measures like SSL/TLS are involved. Additionally, spam filtering, virus scanning, and other security checks might be performed during the process to ensure the email's legitimacy and safety.

This process is a simplified explanation, and the actual communication involves various technical details and protocols. But at a high level, this is how an email is sent from one person to another within a networked environment.
*/