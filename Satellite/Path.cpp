#include "Path.h"

Path::Path(int a){
    id = a;
}
Path::~Path(){

}
string Path::getCurrContinent(int time){
    if(id==1){
        switch (time){
            case 0 ... 2 : return "North Canada";
            case 3 ... 5 : return "North America";
            case 6 ... 8 : return "Atlantic Ocean";
            case 9 ... 11 : return "Northern Africa";
            case 12 ... 14 : return "Central Africa";
            case 15 ... 17 : return "Indian Ocean";
            case 18 ... 20 : return "Australia";
            case 21 ... 24 : return "New Zealand";
        }
    }
    else if(id==2){
        switch (time){
            case 0 ... 2 : return "Southern Pacific Ocean";
            case 3 ... 5 : return "Northern Pacific Ocean";
            case 6 ... 8 : return "South America";
            case 9 ... 11 : return "Atlantic Ocean";
            case 12 ... 14 : return "Western Europe";
            case 15 ... 17 : return "Northern Europe";
            case 18 ... 20 : return "Northern Russia";
            case 21 ... 24 : return "Arctic Ocean";
        }
    }
    else if(id==3){
        switch (time){
            case 0 ... 2 : return "Pacific Ocean";
            case 3 ... 5 : return "Central America";
            case 6 ... 8 : return "Atlantic Ocean";
            case 9 ... 11 : return "Northern Africa";
            case 12 ... 14 : return "Middle East";
            case 15 ... 17 : return "Southern Asia";
            case 18 ... 20 : return "Philippines";
            case 21 ... 24 : return "Pacific Ocean";
        }
    }
    else if(id==4){
        switch (time){
            case 0 ... 2 : return "Northern Norway";
            case 3 ... 5 : return "Arctic Ocean";
            case 6 ... 8 : return "Northern Europe";
            case 9 ... 11 : return "Southern Europe";
            case 12 ... 14 : return "Northern Africa";
            case 15 ... 17 : return "Central Africa";
            case 18 ... 20 : return "Southern Africa";
            case 21 ... 24 : return "Antarctica";
        }
    }
    else return "Invalid";
}
string Path::ListCont(){
    string ret = "";
    for(int i = 0; i<19; i+=3){
        ret = ret + getCurrContinent(i) + ", ";
    }
    ret = ret + getCurrContinent(21);
    return ret;
}