/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   RandomIntegers.cpp
 * Author: DELL
 * 
 * Created on February 8, 2022, 11:58 PM
 */

#include "RandomIntegers.h"

RandomIntegers::RandomIntegers() {
    scaleRandomIntegers();
}

RandomIntegers::RandomIntegers(const RandomIntegers& orig) {
}

void RandomIntegers::scaleRandomIntegers(){
    //loop 20 times
    for(int i=1; i<=20; i++){
        //pick random number from one to six
        cout<<setw(10)<<(1+rand()%6);
       
        //if counter is divisible by 5, start a new line
        if(i%5 == 0){
            cout<<endl;
        }
    }//end for
}//end method

int RandomIntegers::getRolls() const{
    return rolls;
}

void RandomIntegers::setRolls(int rolls){
    this->rolls = rolls;
}
   
void RandomIntegers::freqRandomDie(){
    int freq1 = 0;//count of the first roll
    int freq2 = 0;
    int freq3 = 0;
    int freq4 = 0;
    int freq5 = 0;
    int freq6 = 0; //count of the 6 roll
    
    int face; //most used recently rolled value
    for(int roll = 1; roll<=rolls; roll++){
        face = 1 + rand()%6;
        
        //determine roll value 1-6 and increment appropriate counter
        
    }
}

RandomIntegers::~RandomIntegers() {
}
