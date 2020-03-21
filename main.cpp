/*
 *  Programador: Luis Fernando Javier Velazquez Sosa
 *
 *  Descripcion: El programa crea
 */





#define CATCH_CONFIG_MAIN
#include "C:\Users\Luis\OneDrive\Desktop\catch.hpp"
#include "DoubleCircularList.h"

TEST_CASE( "DCL", "[dcl]" ) {
    DoubleCircularList L;
    REQUIRE(L.isEmpty() == true);
    //NEW JOBS
     Job J(1,2,3);
     Job A(5,3,3);
     Job B(3,7,8);
     Job C(7,8,9);
     Job D(10,2,1);
     Job E(11,4,5);
     Job F(12,3,6);

     //VERIFY THE ID, START AND DURATION
     REQUIRE(J.getID() == 1);
     REQUIRE(J.getStart()==2);
    REQUIRE(J.getDuration()==3);
    REQUIRE(A.getID()==5);
    REQUIRE(A.getStart()==3);
    REQUIRE(A.getDuration()==3);
    REQUIRE(B.getID() == 3);
    REQUIRE(B.getStart()==7);
    REQUIRE(B.getDuration()==8);
    REQUIRE(C.getID()==7);
    REQUIRE(C.getStart()==8);
    REQUIRE(C.getDuration()==9);
    REQUIRE(A.toString()=="[5 3 3]");
    REQUIRE(B.toString()=="[3 7 8]");
    REQUIRE(J.toString() == "[1 2 3]");
    REQUIRE(C.toString()=="[7 8 9]");

    //MAKES THE LIST BY ADDING THE ELEMENTS
    L.add(J);
    L.add(A);
    L.add(B);
    L.add(C);
    string a;
    REQUIRE(L.toString()=="[1 2 3][5 3 3][3 7 8][7 8 9]");
   L.removeCurrent();
   REQUIRE(L.toString() == "[5 3 3][3 7 8][7 8 9]");
    L.next();
    REQUIRE(L.toString()=="[3 7 8][7 8 9][5 3 3]");
    L.next();
    REQUIRE(L.toString()=="[7 8 9][5 3 3][3 7 8]");
    DNode* curr = L.getCurrent();
    REQUIRE(curr->data.toString() == "[7 8 9]");
    REQUIRE(curr->data.getID()== 7);
    REQUIRE(curr->data.getStart()==8);
    REQUIRE(curr->data.getDuration()==9);
    REQUIRE(L.isEmpty() == false);

    //NEW LIST
    DoubleCircularList R;
    R.add(J);
    REQUIRE(R.toString()=="[1 2 3]");
    R.next();
    REQUIRE(R.toString()=="[1 2 3]");

}