//
//  FollowSet.h
//  Shift-Reduce2
//
//  Created by 양준식 on 2020/06/05.
//  Copyright © 2020 양준식. All rights reserved.
//

#ifndef FollowSet_h
#define FollowSet_h
#include <iostream>
using namespace std;
#include <string>
#include <vector>



//Non-Terminal(15개)={ CODE, VDECL, ASSIGN, FDECL, ARG, MOREARGS, BLOCK, STMT, ELSE,RHS, EXPR, TERM, FACTOR, COND, RETURN }이 차례로 0번부터 14번의 Non-terminal이라고 하자.
//Terminal은 Terminal (21개) ={
//vtype, 0번
//num, 1번
//float,   2번
//literal,    3번
//id,    4번
//if, 5번
//else, 6번
//while, 7번
//for , 8번
//return, 9번
//addsub, 10번
//multdiv, 11번
//assign, 12번
//comp, 13번
//semi, 14번
//comma, 15번
//lparen, 16번
//rparen, 17번
//lbrace, 18번
//rbrace, 19번
//$  20번     차례로 0번부터 20번까지 맵핑된다.

//정수를 원소로 가지는 벡터 fsi는 i번 Non-terminal에 대한 follow set의 원소들을 맵핑된 번호(0~20번)로 나타낸 것이다.
vector<int> fs0={20}; //{"$"}; // S  (DUMMY)
vector<int> fs1={20};//{"$"}; //CODE  {$}
vector<int> fs2={0,4,5,7,8,9,19,20};//{"if", "while", "for", "vtype", "id", "return", "rbrace", "$"};//VDECL  {  if, while, for, vtype, id, return, rbrace, $ }

vector<int> fs3={14,17};//{"semi", "rparen"};//ASSIGN   {  semi, rparen }
vector<int> fs4={0,20};//{"vtype", "$" };//FDECL    { vtype, $  }
vector<int> fs5={17};//{"rparen"};//ARG    { rparen  }
vector<int> fs6={17};//{"rparen"};//MOREARGS   { rparen  }
vector<int> fs7={9,19};//{"return", "rbrace"};//BLOCK    { return, rbrace  }
vector<int> fs8={0,4,5,7,8,9,19};//{"if", "while", "for", "vtype", "id", "return", "rbrace"};//STMT    {if, while, for, vtype, id, return, rbrace   }
vector<int> fs9={0,4,5,7,8,9,19};//{"if", "while", "for", "vtype", "id" ,"return", "rbrace"};//ELSE    { if, while, for, vtype, id ,return, rbrace  }
vector<int> fs10={14,17};//{"semi", "rparen"  };//RHS    { semi, rparen  }
vector<int> fs11={14,17};//{"semi", "rparen"};//EXPR    {  semi, rparen }
vector<int> fs12={10,14,17};//{"semi", "rparen", "addsub" };//TERM    { semi, rparen, addsub  }
vector<int> fs13={10,11,13,14,17};//{"semi", "rparen", "addsub", "multdiv", "comp"};//FACTOR    {  semi, rparen, addsub, multdiv, comp }
vector<int> fs14={14,17};//{"rparen", "semi" };//COND    {  rparen, semi }
vector<int> fs15={19};//{ "rbrace"};//RETURN    {  rbrace }


vector<vector<int>> FollowSet={ fs0,fs1,fs2,fs3,fs4,fs5,fs6,fs7,fs8,fs9,fs10,fs11,fs12,fs13,fs14,fs15};

#endif /* FollowSet_h */
