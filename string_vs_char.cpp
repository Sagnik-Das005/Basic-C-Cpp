#include<iostream>
#include<string>
using namespace std;

void getsLength(string txt);
void getsLength2(char *txt);
void getsLength3(char txt[]);


int main()

{
    
    string txt="String Datatype";
    char txt2[50]="Character Array";
    
    getsLength(txt);
    getsLength(txt2);
    //getsLength2(txt);          => GIVES ERROR 
    getsLength2(txt2);
    //getsLength3(txt);          => GIVES ERROR
    getsLength3(txt2);
    return 0;
}
void getsLength(string txt)
{
    cout<<"Parameter:(string txt) \n";
    cout<<txt<<endl;
}

void getsLength2(char *txt)
{
    cout<<"Parameter:(char *txt) \n";
    cout<<txt<<endl;
}
void getsLength3(char txt[])

{
    cout<<"Parameter:(char txt[]) \n";
    cout<<txt<<endl;
}
