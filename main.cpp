/*
 * Versão 2.0 do encriptador de senhas Cripta
 * Uso e distribuição livre, dados os devidos créditos
 * Talkys 2021
*/

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

const char alfabeto[] =
{
    33,34,35,36,37,38,40,41,42,43,
    45,47,48,49,50,51,52,53,54,55,
    56,57,58,59,60,61,62,63,64,65,
    66,67,68,69,70,71,72,73,74,75,
    76,77,78,79,80,81,82,83,84,85,
    86,87,88,89,90,97,98,99,100,101,
    102,103,104,105,106,107,108,109,
    110,111,112,113,114,115,116,117,
    118,119,120,121,122,'\0'
};

string encrypt(string key, string txt)
{
    string nkey = key;
    int keysize = key.length();
    int txtsize = txt.length();
    string cipher = "";

    /*Extendendo a chave*/
    for(int i=keysize;i<txtsize;i++)
        nkey += key[i % keysize];

    /*Cifrando o texto*/
    for(int i=0;i<txtsize;i++)
        cipher += (txt[i] + nkey[i]) % 128;

    int hashsize = strlen(alfabeto);

    /*Rasterizando o alfabeto de cifragem*/
    for(int i=0;i<txtsize;i++)
        cipher[i] = alfabeto[cipher[i] % hashsize];

    return cipher;
}



int main(int argc, char** argv)
{
    if(argc==3)
    {
        cout<<string(argv[1])<<endl;
        cout<<encrypt(string(argv[2]),string(argv[1]))<<endl;
    }
    return 0;
}
