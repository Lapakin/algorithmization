//
// Created by lapotkin on 19.10.23.
//

#ifndef LAB_3_MY_FUNC_H
#define LAB_3_MY_FUNC_H

struct REGISTERS6x4
{
    unsigned AL : 4;
    unsigned AH : 4;
    unsigned BL : 4;
    unsigned BH : 4;
    unsigned CL : 4;
    unsigned CH : 4;
};

void printb(unsigned int value, short number_of_position);

#endif //LAB_3_MY_FUNC_H
