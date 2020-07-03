//
//  DFAstateInfo.h
//  Shift-Reduce2
//
//  Created by 양준식 on 2020/06/05.
//  Copyright © 2020 양준식. All rights reserved.
//

#ifndef DFAstateInfo_h
#define DFAstateInfo_h
#include <iostream>
using namespace std;
#include <vector>

//각 dfa의 내용물을 나타냄.  각 dfa가 갖고있는 nfa state(item)들의 번호.
vector<int> d0={ 0 , 2 , 5 , 8 , 9 , 13 , 21 };
vector<int> d1={ 1 };
vector<int> d2={ 2 , 5 , 6 , 8 , 9 , 13 , 21 };
vector<int> d3={ 2 , 3 , 5 , 8 , 9 , 13 , 21 };
vector<int> d4={ 10 , 14 , 17 , 22 };
vector<int> d5={ 7 };
vector<int> d6={ 4 };
vector<int> d7={ 15 };
vector<int> d8={ 11 , 18 , 23 };
vector<int> d9={ 16 };
vector<int> d10={ 19 , 86 , 88 , 90 , 94 , 96 , 100 , 102 , 106 , 108 , 110 };
vector<int> d11={ 24 , 31 , 35 };
vector<int> d12={ 12 };
vector<int> d13={ 87 };
vector<int> d14={ 97 , 101 };
vector<int> d15={ 20 };
vector<int> d16={ 91 , 95 };
vector<int> d17={ 111 };
vector<int> d18={ 107 };
vector<int> d19={ 89 };
vector<int> d20={ 90 , 94 , 96 , 100 , 102 , 103 , 106 , 108 , 110 };
vector<int> d21={ 109 };
vector<int> d22={ 25 };
vector<int> d23={ 32 };
vector<int> d24={ 96 , 98 , 100 , 102 , 106 , 108 , 110 };
vector<int> d25={ 90 , 92 , 94 , 96 , 100 , 102 , 106 , 108 , 110 };
vector<int> d26={ 104 };
vector<int> d27={ 26 };
vector<int> d28={ 33 , 36 , 41 };
vector<int> d29={ 99 };
vector<int> d30={ 93 };
vector<int> d31={ 105 };
vector<int> d32={ 9 , 13 , 17 , 27 , 42 , 45 , 46 , 48 , 51 , 60 , 68 };
vector<int> d33={ 34 };
vector<int> d34={ 37 };
vector<int> d35={ 49 };
vector<int> d36={ 28 , 116 };
vector<int> d37={ 9 , 13 , 17 , 42 , 43 , 45 , 46 , 48 , 51 , 60 , 68 };
vector<int> d38={ 47 };
vector<int> d39={ 69 };
vector<int> d40={ 18 };
vector<int> d41={ 52 };
vector<int> d42={ 10 , 14 , 17 };
vector<int> d43={ 61 };
vector<int> d44={ 38 };
vector<int> d45={ 50 };
vector<int> d46={ 29 };
vector<int> d47={ 102 , 106 , 108 , 110 , 117 };
vector<int> d48={ 44 };
vector<int> d49={ 17 , 70 };
vector<int> d50={ 53 , 102 , 106 , 108 , 110 , 112 };
vector<int> d51={ 11 , 18 };
vector<int> d52={ 62 , 102 , 106 , 108 , 110 , 112 };
vector<int> d53={ 36 , 39 , 41 };
vector<int> d54={ 30 };
vector<int> d55={ 118 };
vector<int> d56={ 71 };
vector<int> d57={ 54 };
vector<int> d58={ 113 };
vector<int> d59={ 63 };
vector<int> d60={ 40 };
vector<int> d61={ 119 };
vector<int> d62={ 72 , 102 , 106 , 108 , 110 , 112 };
vector<int> d63={ 55 };
vector<int> d64={ 102 , 106 , 108 , 110 , 114 };
vector<int> d65={ 64 };
vector<int> d66={ 73 };
vector<int> d67={ 9 , 13 , 17 , 42 , 45 , 46 , 48 , 51 , 56 , 60 , 68 };
vector<int> d68={ 115 };
vector<int> d69={ 9 , 13 , 17 , 42 , 45 , 46 , 48 , 51 , 60 , 65 , 68 };
vector<int> d70={ 17 , 74 };
vector<int> d71={ 57 };
vector<int> d72={ 66 };
vector<int> d73={ 75 };
vector<int> d74={ 58 , 80 , 85 };
vector<int> d75={ 67 };
vector<int> d76={ 76 };
vector<int> d77={ 59 };
vector<int> d78={ 81 };
vector<int> d79={ 9 , 13 , 17 , 42 , 45 , 46 , 48 , 51 , 60 , 68 , 77 };
vector<int> d80={ 9 , 13 , 17 , 42 , 45 , 46 , 48 , 51 , 60 , 68 , 82 };
vector<int> d81={ 78 };
vector<int> d82={ 83 };
vector<int> d83={ 79 };
vector<int> d84={ 84 };

vector<vector<int>> DFAstateInfo={
    d0,d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11,d12,d13,d14,d15,d16,d17,d18,d19,d20,d21,d22,d23,d24,d25,d26,d27,d28,d29,d30,d31,d32,d33,d34,d35,d36,d37,d38,d39,d40,d41,d42,d43,d44,d45,d46,d47,d48,d49,d50,d51,d52,d53,d54,d55,d56,d57,d58,d59,d60,d61,d62,d63,d64,d65,d66,d67,d68,d69,d70,d71,d72,d73,d74,d75,d76,d77,d78,d79,d80,d81,d82,d83,d84};

#endif /* DFAstateInfo_h */
