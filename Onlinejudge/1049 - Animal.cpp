#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
  
int main(){
    char a[20],b[20],c[20];
    cin>>a>>b>>c;
    if(strcmp(a,"vertebrado")==0){
        if(strcmp(b,"ave")==0){
            if(strcmp(c,"carnivoro")==0)
                cout<<"aguia\n";
            else if(strcmp(c,"onivoro")==0)
                cout<<"pomba\n";
        }
        else if (strcmp(b,"mamifero")==0){
                if(strcmp(c,"onivoro")==0)
                    cout<<"homem\n";
                else if(strcmp(c,"herbivoro")==0)
                    cout<<"vaca\n";
        }
    }
        else if (strcmp(a,"invertebrado")==0){
                if(strcmp(b,"inseto")==0){
            if(strcmp(c,"hematofago")==0)
                cout<<"pulga\n";
            else if(strcmp(c,"herbivoro")==0)
                cout<<"lagarta\n";
        }
        else if (strcmp(b,"anelideo")==0){
                if(strcmp(c,"hematofago")==0)
                    cout<<"sanguessuga\n";
                else if(strcmp(c,"onivoro")==0)
                    cout<<"minhoca\n";
        }
        }
  
        return 0;
    }
