#include <iostream>
#include<cstring>
using namespace std;
int prn;
int Random();
char RandomLetter();
void Input(char[]);
int main(){
    char f;
    char usrOutput[20]={};
    char usrInput[20]={};
    int len;
    int y=0;
    cout<<"Type Something...\n";
    Input(usrInput);
    prn = strlen(usrInput);
    len = prn;

    do{

        for(int z = 1; z<=1000; z++){

            f = RandomLetter();
            cout<<usrOutput;
            cout<<f<<endl;
        }
        usrOutput[y] = usrInput[y];
        y++;
        if (y==len)
        {
            cout<<usrOutput;
        }
        


    }while(y<=len-1);
    
  



    return 0;
}


char RandomLetter(){

    char alphas[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','0','1','2','3','4','5','6','7','8','9'};
    int j = Random();
    return alphas[j];

}


void Input(char x[]){
    char temp;
    int i = 0;
    do{
        temp = getchar();
        if(temp != '\n'){
        x[i] = temp;
        i++;
        }
    }while(temp != '\n');
    return;
}

int Random(){
    prn = (7*prn + 37)%36;
    return prn;
}

