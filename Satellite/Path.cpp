#include "Path.h"

Path::Path(int a){
    id = a;
}
Path::Path(){}
Path::~Path(){

}
string Path::getCurrContinent(int time){
    if(time>24){
        time = time-24;
    }
    if(id==1){
        switch (time){
            case 1 : return "North Eastern Arctic Ocean";
            case 2 : return "North Eastern Central Arctic Ocean";
            case 3 : return "North Eastern Canada";
            case 4 : return "North Canada";
            case 5 : return "Central Canada";
            case 6 : return "South Western Canada";
            case 7 : return "North Eastern Atlantic Ocean";
            case 8 : return "North Atlantic Ocean";
            case 9 : return "North Eastern Africa";
            case 10 : return "Libya";
            case 11 : return "Sudan";
            case 12 : return "Ethiopia";
            case 13 : return "North Eastern Indian Ocean";
            case 14 : return "Sri Lanka";
            case 15 : return "Indonesia";
            case 16 : return "North Eastern Australia";
            case 17 : return "Central Australia";
            case 18 : return "South Western Australia";
            case 19 : return "Gap Between Australia and New Zealend";
            case 20 : return "Northern New Zealand";
            case 21 : return "South New Zealand";
            case 22 : return "Southern New Zealand Waters";
            case 23 : return "South Western Ocean";
            case 24 : return "South Western Corner";

        }
    }
    else if(id==2){
        switch (time){
            case 1 : return "South Eastern Corner";
            case 2 : return "South Eastern South Pacific Ocean";
            case 3 : return "South Eastern Less South Pacific Ocean";
            case 4 : return "South Eastern Pacific Ocean";
            case 5 : return "South Eastern Northern Pacifc Ocean";
            case 6 : return "Ecuador";
            case 7 : return "Venezuela";
            case 8 : return "Caribbean";
            case 9 : return "South Eastern Atlantic Ocean";
            case 10 : return "Southern Atlantic Ocean";
            case 11 : return "South Western Atlantic Ocean";
            case 12 : return "Morocco";
            case 13 : return "Spain";
            case 14 : return "Italy";
            case 15 : return "Ukraine";
            case 16 : return "Kazakhstan Russia";
            case 17 : return "South Eastern Russia";
            case 18 : return "Eastern Russia";
            case 19 : return "Central Russia";
            case 20 : return "Central Western Russia";
            case 21 : return "North Western Russia";
            case 22 : return "Top Western Russia";
            case 23 : return "Russian Islands";
            case 24 : return "Top Right Corner";
        }
    }
    else if(id==3){
        switch (time){
            case 1 : return "Far West Pacific Ocean";
            case 2 : return "Western Central Pacific Ocean";
            case 3 : return "Mexican Waters";
            case 4 : return "Central America between Mexico and Colombia";
            case 5 : return "Venezula";
            case 6 : return "South American Western Atlantic Ocean ";
            case 7 : return "Central Atlantic Ocean";
            case 8 : return "North Atlantic Ocean";
            case 9 : return "African Eastern Atlantic Ocean ";
            case 10 : return "Ghana";
            case 11 : return "Niger";
            case 12 : return "Chad";
            case 13 : return "Eritrea";
            case 14 : return "Yemen";
            case 15 : return "Western Indian Waters";
            case 16 : return "India";
            case 17 : return "Western Asia Thailand";
            case 18 : return "Taiwan";
            case 19 : return "Pacific Ocean South of Japan";
            case 20 : return "Far Western Pacific Ocean";
            case 21 : return "Western Pacific Ocean";
            case 22 : return "Central Pacific Ocean";
            case 23 : return "Far Central Pacific Ocean";
            case 24 : return "Eastern Pacific Ocean";
        }
    }
    else if(id==4){
        switch (time){
            case 1 : return "Svalbard North";
            case 2 : return "Svalbard South";
            case 3 : return "Svalbard Waters";
            case 4 : return "Norway";
            case 5 : return "Sweden";
            case 6 : return "Poland";
            case 7 : return "Italy";
            case 8 : return "Greece";
            case 9 : return "Dead Sea";
            case 10 : return "Libya";
            case 11 : return "Chad";
            case 12 : return "C.A.R";
            case 13 : return "Dem of Congo North";
            case 14 : return "Dem of Congo South";
            case 15 : return "Angola";
            case 16 : return "Botswana";
            case 17 : return "North South Africa";
            case 18 : return "South Africa";
            case 19 : return "South South Africa";
            case 20 : return "Cape Town";
            case 21 : return "South Africa Waters";
            case 22 : return "Central Souther Ocean";
            case 23 : return "Southern Southern Ocean";
            case 24 : return "Bottom of map";
        }
    }
    else return "Invalid";
    return "Invalid";
}
string Path::ListCont(){
    string ret = "";
    for(int i = 0; i<19; i+=3){
        ret = ret + getCurrContinent(i) + ", ";
    }
    ret = ret + getCurrContinent(21);
    return ret;
}

int Path::getID()
{
    return this->id;
}

void Path::setID(int i){
    id = i;
}