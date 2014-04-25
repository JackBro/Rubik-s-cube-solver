/**
  * @file
  * @author Gabriel Formica <gabrielformica93@gmail.com>
  * @author Juliana Leon <julianaleon8@gmail.com>
  *
  * @section Description
  *
  * Rubik's cube class header
  */

#ifndef RUBIK_HH
#define RUBIK_HH

/*
 * Rubik's cube class
 */
class Rubik {
    private:
        /*
         * Leftmost 5 bits are for identification. Rightmost for orientation
         * Orientations is given by X,Y,Z tuple represented with 3 bits 
         */
        unsigned char left[8];   //0 to 7 cubie
        unsigned char right[8];  //8 to 15 cubie
        unsigned char middle[4]; //16 to 19 cubie

    public:
        Rubik();
        Rubik *clone();
        unsigned char getCubie(int);
        unsigned int getId(unsigned char);
        unsigned int getOrientation(unsigned char);
        void turnLeft();
        void turnRight();
        void turnTop();
        void turnBottom();
        void turnFront();
        void turnBack();
        bool isSolved();
    private:
        unsigned char swapXY(unsigned char);
        unsigned char swapXZ(unsigned char);
        unsigned char swapYZ(unsigned char);
        bool checkLeftFace();
        bool checkRightFace();
        bool checkMiddleFace();
};

#endif
