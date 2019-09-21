#ifndef THERMISTORTABLES_H_
#define THERMISTORTABLES_H_

#include "stmarlin.h"

#define OVERSAMPLENR 16  //重复取样

#if (THERMISTORHEATER_0 == 1) || (THERMISTORHEATER_1 == 1)  || (THERMISTORHEATER_2 == 1) || (THERMISTORBED == 1) //100k bed thermistor
//2016/1/12
//专为stm32生成的温度查表
//在此有一点需要注意，这里的数值类型不能再用short类型了，若还用short类型会报一系列警告信息，
//同时要注意修改analog2temp(int raw, uint8_t e)函数，将与温度查表相关的类型short改为int类型
const int temptable_1[][2]  = { 
	{  (91 * OVERSAMPLENR ),  300 }, 
	{  (98 * OVERSAMPLENR ),  295 }, 
	{  (105 * OVERSAMPLENR ),  290 }, 
	{  (112 * OVERSAMPLENR ),  285 }, 
	{  (120 * OVERSAMPLENR ),  280 }, 
	{  (129 * OVERSAMPLENR ),  275 }, 
	{  (139 * OVERSAMPLENR ),  270 }, 
	{  (150 * OVERSAMPLENR ),  265 }, 
	{  (161 * OVERSAMPLENR ),  260 }, 
	{  (174 * OVERSAMPLENR ),  255 }, 
	{  (188 * OVERSAMPLENR ),  250 }, 
	{  (203 * OVERSAMPLENR ),  245 }, 
	{  (220 * OVERSAMPLENR ),  240 }, 
	{  (239 * OVERSAMPLENR ),  235 }, 
	{  (259 * OVERSAMPLENR ),  230 }, 
	{  (281 * OVERSAMPLENR ),  225 }, 
	{  (306 * OVERSAMPLENR ),  220 }, 
	{  (332 * OVERSAMPLENR ),  215 }, 
	{  (362 * OVERSAMPLENR ),  210 }, 
	{  (395 * OVERSAMPLENR ),  205 }, 
	{  (431 * OVERSAMPLENR ),  200 }, 
	{  (471 * OVERSAMPLENR ),  195 }, 
	{  (515 * OVERSAMPLENR ),  190 }, 
	{  (563 * OVERSAMPLENR ),  185 }, 
	{  (616 * OVERSAMPLENR ),  180 }, 
	{  (674 * OVERSAMPLENR ),  175 }, 
	{  (739 * OVERSAMPLENR ),  170 }, 
	{  (809 * OVERSAMPLENR ),  165 }, 
	{  (886 * OVERSAMPLENR ),  160 }, 
	{  (969 * OVERSAMPLENR ),  155 }, 
	{  (1060 * OVERSAMPLENR ),  150 }, 
	{  (1159 * OVERSAMPLENR ),  145 }, 
	{  (1265 * OVERSAMPLENR ),  140 }, 
	{  (1379 * OVERSAMPLENR ),  135 }, 
	{  (1501 * OVERSAMPLENR ),  130 }, 
	{  (1630 * OVERSAMPLENR ),  125 }, 
	{  (1765 * OVERSAMPLENR ),  120 }, 
	{  (1906 * OVERSAMPLENR ),  115 }, 
	{  (2052 * OVERSAMPLENR ),  110 }, 
	{  (2202 * OVERSAMPLENR ),  105 }, 
	{  (2353 * OVERSAMPLENR ),  100 }, 
	{  (2504 * OVERSAMPLENR ),   95 }, 
	{  (2654 * OVERSAMPLENR ),   90 }, 
	{  (2800 * OVERSAMPLENR ),   85 }, 
	{  (2942 * OVERSAMPLENR ),   80 }, 
	{  (3076 * OVERSAMPLENR ),   75 }, 
	{  (3203 * OVERSAMPLENR ),   70 }, 
	{  (3321 * OVERSAMPLENR ),   65 }, 
	{  (3429 * OVERSAMPLENR ),   60 }, 
	{  (3527 * OVERSAMPLENR ),   55 }, 
	{  (3615 * OVERSAMPLENR ),   50 }, 
	{  (3692 * OVERSAMPLENR ),   45 }, 
	{  (3760 * OVERSAMPLENR ),   40 }, 
	{  (3819 * OVERSAMPLENR ),   35 }, 
	{  (3869 * OVERSAMPLENR ),   30 }, 
	{  (3912 * OVERSAMPLENR ),   25 }, 
	{  (3948 * OVERSAMPLENR ),   20 }, 
	{  (3978 * OVERSAMPLENR ),   15 }, 
	{  (4002 * OVERSAMPLENR ),   10 }, 
	{  (4022 * OVERSAMPLENR ),    5 }, 
	{  (4039 * OVERSAMPLENR ),    0 },
 };
//原Arduino的温度查表
//const short temptable_1[][2]  = {
//{       23*OVERSAMPLENR ,       300     },
//{       25*OVERSAMPLENR ,       295     },
//{       27*OVERSAMPLENR ,       290     },
//{       28*OVERSAMPLENR ,       285     },
//{       31*OVERSAMPLENR ,       280     },
//{       33*OVERSAMPLENR ,       275     },
//{       35*OVERSAMPLENR ,       270     },
//{       38*OVERSAMPLENR ,       265     },
//{       41*OVERSAMPLENR ,       260     },
//{       44*OVERSAMPLENR ,       255     },
//{       48*OVERSAMPLENR ,       250     },
//{       52*OVERSAMPLENR ,       245     },
//{       56*OVERSAMPLENR ,       240     },
//{       61*OVERSAMPLENR ,       235     },
//{       66*OVERSAMPLENR ,       230     },
//{       71*OVERSAMPLENR ,       225     },
//{       78*OVERSAMPLENR ,       220     },
//{       84*OVERSAMPLENR ,       215     },
//{       92*OVERSAMPLENR ,       210     },
//{       100*OVERSAMPLENR        ,       205     },
//{       109*OVERSAMPLENR        ,       200     },
//{       120*OVERSAMPLENR        ,       195     },
//{       131*OVERSAMPLENR        ,       190     },
//{       143*OVERSAMPLENR        ,       185     },
//{       156*OVERSAMPLENR        ,       180     },
//{       171*OVERSAMPLENR        ,       175     },
//{       187*OVERSAMPLENR        ,       170     },
//{       205*OVERSAMPLENR        ,       165     },
//{       224*OVERSAMPLENR        ,       160     },
//{       245*OVERSAMPLENR        ,       155     },
//{       268*OVERSAMPLENR        ,       150     },
//{       293*OVERSAMPLENR        ,       145     },
//{       320*OVERSAMPLENR        ,       140     },
//{       348*OVERSAMPLENR        ,       135     },
//{       379*OVERSAMPLENR        ,       130     },
//{       411*OVERSAMPLENR        ,       125     },
//{       445*OVERSAMPLENR        ,       120     },
//{       480*OVERSAMPLENR        ,       115     },
//{       516*OVERSAMPLENR        ,       110     },
//{       553*OVERSAMPLENR        ,       105     },
//{       591*OVERSAMPLENR        ,       100     },
//{       628*OVERSAMPLENR        ,       95      },
//{       665*OVERSAMPLENR        ,       90      },
//{       702*OVERSAMPLENR        ,       85      },
//{       737*OVERSAMPLENR        ,       80      },
//{       770*OVERSAMPLENR        ,       75      },
//{       801*OVERSAMPLENR        ,       70      },
//{       830*OVERSAMPLENR        ,       65      },
//{       857*OVERSAMPLENR        ,       60      },
//{       881*OVERSAMPLENR        ,       55      },
//{       903*OVERSAMPLENR        ,       50      },
//{       922*OVERSAMPLENR        ,       45      },
//{       939*OVERSAMPLENR        ,       40      },
//{       954*OVERSAMPLENR        ,       35      },
//{       966*OVERSAMPLENR        ,       30      },
//{       977*OVERSAMPLENR        ,       25      },
//{       985*OVERSAMPLENR        ,       20      },//985
//{       993*OVERSAMPLENR        ,       15      },//993
//{       999*OVERSAMPLENR        ,       10      },//999
//{       1004*OVERSAMPLENR       ,       5       },//1004
//{       1008*OVERSAMPLENR       ,       0       } //safety//1008
//};
#endif
#if (THERMISTORHEATER_0 == 2) || (THERMISTORHEATER_1 == 2) || (THERMISTORHEATER_2 == 2) || (THERMISTORBED == 2) //200k bed thermistor
const short temptable_2[][2]  = {
//200k ATC Semitec 204GT-2
//Verified by linagee. Source: http://shop.arcol.hu/static/datasheets/thermistors.pdf
// Calculated using 4.7kohm pullup, voltage divider math, and manufacturer provided temp/resistance
   {1*OVERSAMPLENR, 848},
   {30*OVERSAMPLENR, 300}, //top rating 300C
   {34*OVERSAMPLENR, 290},
   {39*OVERSAMPLENR, 280},
   {46*OVERSAMPLENR, 270},
   {53*OVERSAMPLENR, 260},
   {63*OVERSAMPLENR, 250},
   {74*OVERSAMPLENR, 240},
   {87*OVERSAMPLENR, 230},
   {104*OVERSAMPLENR, 220},
   {124*OVERSAMPLENR, 210},
   {148*OVERSAMPLENR, 200},
   {176*OVERSAMPLENR, 190},
   {211*OVERSAMPLENR, 180},
   {252*OVERSAMPLENR, 170},
   {301*OVERSAMPLENR, 160},
   {357*OVERSAMPLENR, 150},
   {420*OVERSAMPLENR, 140},
   {489*OVERSAMPLENR, 130},
   {562*OVERSAMPLENR, 120},
   {636*OVERSAMPLENR, 110},
   {708*OVERSAMPLENR, 100},
   {775*OVERSAMPLENR, 90},
   {835*OVERSAMPLENR, 80},
   {884*OVERSAMPLENR, 70},
   {924*OVERSAMPLENR, 60},
   {955*OVERSAMPLENR, 50},
   {977*OVERSAMPLENR, 40},
   {993*OVERSAMPLENR, 30},
   {1004*OVERSAMPLENR, 20},
   {1012*OVERSAMPLENR, 10},
   {1016*OVERSAMPLENR, 0},
};

#endif
#if (THERMISTORHEATER_0 == 3) || (THERMISTORHEATER_1 == 3) || (THERMISTORHEATER_2 == 3) || (THERMISTORBED == 3) //mendel-parts
const short temptable_3[][2]  = {
                {1*OVERSAMPLENR,864},
                {21*OVERSAMPLENR,300},
                {25*OVERSAMPLENR,290},
                {29*OVERSAMPLENR,280},
                {33*OVERSAMPLENR,270},
                {39*OVERSAMPLENR,260},
                {46*OVERSAMPLENR,250},
                {54*OVERSAMPLENR,240},
                {64*OVERSAMPLENR,230},
                {75*OVERSAMPLENR,220},
                {90*OVERSAMPLENR,210},
                {107*OVERSAMPLENR,200},
                {128*OVERSAMPLENR,190},
                {154*OVERSAMPLENR,180},
                {184*OVERSAMPLENR,170},
                {221*OVERSAMPLENR,160},
                {265*OVERSAMPLENR,150},
                {316*OVERSAMPLENR,140},
                {375*OVERSAMPLENR,130},
                {441*OVERSAMPLENR,120},
                {513*OVERSAMPLENR,110},
                {588*OVERSAMPLENR,100},
                {734*OVERSAMPLENR,80},
                {856*OVERSAMPLENR,60},
                {938*OVERSAMPLENR,40},
                {986*OVERSAMPLENR,20},
                {1008*OVERSAMPLENR,0},
                {1018*OVERSAMPLENR,-20}
        };

#endif
#if (THERMISTORHEATER_0 == 4) || (THERMISTORHEATER_1 == 4) || (THERMISTORHEATER_2 == 4) || (THERMISTORBED == 4) //10k thermistor
const short temptable_4[][2]  = {
   {1*OVERSAMPLENR, 430},
   {54*OVERSAMPLENR, 137},
   {107*OVERSAMPLENR, 107},
   {160*OVERSAMPLENR, 91},
   {213*OVERSAMPLENR, 80},
   {266*OVERSAMPLENR, 71},
   {319*OVERSAMPLENR, 64},
   {372*OVERSAMPLENR, 57},
   {425*OVERSAMPLENR, 51},
   {478*OVERSAMPLENR, 46},
   {531*OVERSAMPLENR, 41},
   {584*OVERSAMPLENR, 35},
   {637*OVERSAMPLENR, 30},
   {690*OVERSAMPLENR, 25},
   {743*OVERSAMPLENR, 20},
   {796*OVERSAMPLENR, 14},
   {849*OVERSAMPLENR, 7},
   {902*OVERSAMPLENR, 0},
   {955*OVERSAMPLENR, -11},
   {1008*OVERSAMPLENR, -35}
};
#endif

#if (THERMISTORHEATER_0 == 5) || (THERMISTORHEATER_1 == 5) || (THERMISTORHEATER_2 == 5) || (THERMISTORBED == 5) //100k ParCan thermistor (104GT-2)
const short temptable_5[][2]  = {
// ATC Semitec 104GT-2 (Used in ParCan)
// Verified by linagee. Source: http://shop.arcol.hu/static/datasheets/thermistors.pdf
// Calculated using 4.7kohm pullup, voltage divider math, and manufacturer provided temp/resistance
   {1*OVERSAMPLENR, 713},
   {17*OVERSAMPLENR, 300}, //top rating 300C
   {20*OVERSAMPLENR, 290},
   {23*OVERSAMPLENR, 280},
   {27*OVERSAMPLENR, 270},
   {31*OVERSAMPLENR, 260},
   {37*OVERSAMPLENR, 250},
   {43*OVERSAMPLENR, 240},
   {51*OVERSAMPLENR, 230},
   {61*OVERSAMPLENR, 220},
   {73*OVERSAMPLENR, 210},
   {87*OVERSAMPLENR, 200},
   {106*OVERSAMPLENR, 190},
   {128*OVERSAMPLENR, 180},
   {155*OVERSAMPLENR, 170},
   {189*OVERSAMPLENR, 160},
   {230*OVERSAMPLENR, 150},
   {278*OVERSAMPLENR, 140},
   {336*OVERSAMPLENR, 130},
   {402*OVERSAMPLENR, 120},
   {476*OVERSAMPLENR, 110},
   {554*OVERSAMPLENR, 100},
   {635*OVERSAMPLENR, 90},
   {713*OVERSAMPLENR, 80},
   {784*OVERSAMPLENR, 70},
   {846*OVERSAMPLENR, 60},
   {897*OVERSAMPLENR, 50},
   {937*OVERSAMPLENR, 40},
   {966*OVERSAMPLENR, 30},
   {986*OVERSAMPLENR, 20},
   {1000*OVERSAMPLENR, 10},
   {1010*OVERSAMPLENR, 0}
};
#endif

#if (THERMISTORHEATER_0 == 6) || (THERMISTORHEATER_1 == 6) || (THERMISTORHEATER_2 == 6) || (THERMISTORBED == 6) // 100k Epcos thermistor
const short temptable_6[][2]  = {
   {1*OVERSAMPLENR, 350},
   {28*OVERSAMPLENR, 250}, //top rating 250C
   {31*OVERSAMPLENR, 245},
   {35*OVERSAMPLENR, 240},
   {39*OVERSAMPLENR, 235},
   {42*OVERSAMPLENR, 230},
   {44*OVERSAMPLENR, 225},
   {49*OVERSAMPLENR, 220},
   {53*OVERSAMPLENR, 215},
   {62*OVERSAMPLENR, 210},
   {71*OVERSAMPLENR, 205}, //fitted graphically
   {78*OVERSAMPLENR, 200}, //fitted graphically
   {94*OVERSAMPLENR, 190},
   {102*OVERSAMPLENR, 185},
   {116*OVERSAMPLENR, 170},
   {143*OVERSAMPLENR, 160},
   {183*OVERSAMPLENR, 150},
   {223*OVERSAMPLENR, 140},
   {270*OVERSAMPLENR, 130},
   {318*OVERSAMPLENR, 120},
   {383*OVERSAMPLENR, 110},
   {413*OVERSAMPLENR, 105},
   {439*OVERSAMPLENR, 100},
   {484*OVERSAMPLENR, 95},
   {513*OVERSAMPLENR, 90},
   {607*OVERSAMPLENR, 80},
   {664*OVERSAMPLENR, 70},
   {781*OVERSAMPLENR, 60},
   {810*OVERSAMPLENR, 55},
   {849*OVERSAMPLENR, 50},
   {914*OVERSAMPLENR, 45},
   {914*OVERSAMPLENR, 40},
   {935*OVERSAMPLENR, 35},
   {954*OVERSAMPLENR, 30},
   {970*OVERSAMPLENR, 25},
   {978*OVERSAMPLENR, 22},
   {1008*OVERSAMPLENR, 3},
   {1023*OVERSAMPLENR, 0}  //to allow internal 0 degrees C
};
#endif

#if (THERMISTORHEATER_0 == 7) || (THERMISTORHEATER_1 == 7) || (THERMISTORHEATER_2 == 7) || (THERMISTORBED == 7) // 100k Honeywell 135-104LAG-J01
const short temptable_7[][2]  = {
   {1*OVERSAMPLENR, 941},
   {19*OVERSAMPLENR, 362},
   {37*OVERSAMPLENR, 299}, //top rating 300C
   {55*OVERSAMPLENR, 266},
   {73*OVERSAMPLENR, 245},
   {91*OVERSAMPLENR, 229},
   {109*OVERSAMPLENR, 216},
   {127*OVERSAMPLENR, 206},
   {145*OVERSAMPLENR, 197},
   {163*OVERSAMPLENR, 190},
   {181*OVERSAMPLENR, 183},
   {199*OVERSAMPLENR, 177},
   {217*OVERSAMPLENR, 171},
   {235*OVERSAMPLENR, 166},
   {253*OVERSAMPLENR, 162},
   {271*OVERSAMPLENR, 157},
   {289*OVERSAMPLENR, 153},
   {307*OVERSAMPLENR, 149},
   {325*OVERSAMPLENR, 146},
   {343*OVERSAMPLENR, 142},
   {361*OVERSAMPLENR, 139},
   {379*OVERSAMPLENR, 135},
   {397*OVERSAMPLENR, 132},
   {415*OVERSAMPLENR, 129},
   {433*OVERSAMPLENR, 126},
   {451*OVERSAMPLENR, 123},
   {469*OVERSAMPLENR, 121},
   {487*OVERSAMPLENR, 118},
   {505*OVERSAMPLENR, 115},
   {523*OVERSAMPLENR, 112},
   {541*OVERSAMPLENR, 110},
   {559*OVERSAMPLENR, 107},
   {577*OVERSAMPLENR, 105},
   {595*OVERSAMPLENR, 102},
   {613*OVERSAMPLENR, 99},
   {631*OVERSAMPLENR, 97},
   {649*OVERSAMPLENR, 94},
   {667*OVERSAMPLENR, 92},
   {685*OVERSAMPLENR, 89},
   {703*OVERSAMPLENR, 86},
   {721*OVERSAMPLENR, 84},
   {739*OVERSAMPLENR, 81},
   {757*OVERSAMPLENR, 78},
   {775*OVERSAMPLENR, 75},
   {793*OVERSAMPLENR, 72},
   {811*OVERSAMPLENR, 69},
   {829*OVERSAMPLENR, 66},
   {847*OVERSAMPLENR, 62},
   {865*OVERSAMPLENR, 59},
   {883*OVERSAMPLENR, 55},
   {901*OVERSAMPLENR, 51},
   {919*OVERSAMPLENR, 46},
   {937*OVERSAMPLENR, 41},
   {955*OVERSAMPLENR, 35},
   {973*OVERSAMPLENR, 27},
   {991*OVERSAMPLENR, 17},
   {1009*OVERSAMPLENR, 1},
   {1023*OVERSAMPLENR, 0}  //to allow internal 0 degrees C
};
#endif
#if (THERMISTORHEATER_0 == 8) || (THERMISTORHEATER_1 == 8) || (THERMISTORHEATER_2 == 8) || (THERMISTORBED == 8)
// 100k 0603 SMD Vishay NTCS0603E3104FXT (4.7k pullup)
const short temptable_8[][2]  = {
   {1*OVERSAMPLENR, 704},
   {54*OVERSAMPLENR, 216},
   {107*OVERSAMPLENR, 175},
   {160*OVERSAMPLENR, 152},
   {213*OVERSAMPLENR, 137},
   {266*OVERSAMPLENR, 125},
   {319*OVERSAMPLENR, 115},
   {372*OVERSAMPLENR, 106},
   {425*OVERSAMPLENR, 99},
   {478*OVERSAMPLENR, 91},
   {531*OVERSAMPLENR, 85},
   {584*OVERSAMPLENR, 78},
   {637*OVERSAMPLENR, 71},
   {690*OVERSAMPLENR, 65},
   {743*OVERSAMPLENR, 58},
   {796*OVERSAMPLENR, 50},
   {849*OVERSAMPLENR, 42},
   {902*OVERSAMPLENR, 31},
   {955*OVERSAMPLENR, 17},
   {1008*OVERSAMPLENR, 0}
};
#endif
#if (THERMISTORHEATER_0 == 9) || (THERMISTORHEATER_1 == 9) || (THERMISTORHEATER_2 == 9) || (THERMISTORBED == 9)
// 100k GE Sensing AL03006-58.2K-97-G1 (4.7k pullup)
const short temptable_9[][2]  = {
	{1*OVERSAMPLENR, 936},
	{36*OVERSAMPLENR, 300},
	{71*OVERSAMPLENR, 246},
	{106*OVERSAMPLENR, 218},
	{141*OVERSAMPLENR, 199},
	{176*OVERSAMPLENR, 185},
	{211*OVERSAMPLENR, 173},
	{246*OVERSAMPLENR, 163},
	{281*OVERSAMPLENR, 155},
	{316*OVERSAMPLENR, 147},
	{351*OVERSAMPLENR, 140},
	{386*OVERSAMPLENR, 134},
	{421*OVERSAMPLENR, 128},
	{456*OVERSAMPLENR, 122},
	{491*OVERSAMPLENR, 117},
	{526*OVERSAMPLENR, 112},
	{561*OVERSAMPLENR, 107},
	{596*OVERSAMPLENR, 102},
	{631*OVERSAMPLENR, 97},
	{666*OVERSAMPLENR, 92},
	{701*OVERSAMPLENR, 87},
	{736*OVERSAMPLENR, 81},
	{771*OVERSAMPLENR, 76},
	{806*OVERSAMPLENR, 70},
	{841*OVERSAMPLENR, 63},
	{876*OVERSAMPLENR, 56},
	{911*OVERSAMPLENR, 48},
	{946*OVERSAMPLENR, 38},
	{981*OVERSAMPLENR, 23},
	{1005*OVERSAMPLENR, 5},
	{1016*OVERSAMPLENR, 0}
};
#endif
#if (THERMISTORHEATER_0 == 10) || (THERMISTORHEATER_1 == 10) || (THERMISTORHEATER_2 == 10) || (THERMISTORBED == 10)
// 100k RS thermistor 198-961 (4.7k pullup)
const short temptable_10[][2]  = {
   {1*OVERSAMPLENR, 929},
   {36*OVERSAMPLENR, 299},
   {71*OVERSAMPLENR, 246},
   {106*OVERSAMPLENR, 217},
   {141*OVERSAMPLENR, 198},
   {176*OVERSAMPLENR, 184},
   {211*OVERSAMPLENR, 173},
   {246*OVERSAMPLENR, 163},
   {281*OVERSAMPLENR, 154},
   {316*OVERSAMPLENR, 147},
   {351*OVERSAMPLENR, 140},
   {386*OVERSAMPLENR, 134},
   {421*OVERSAMPLENR, 128},
   {456*OVERSAMPLENR, 122},
   {491*OVERSAMPLENR, 117},
   {526*OVERSAMPLENR, 112},
   {561*OVERSAMPLENR, 107},
   {596*OVERSAMPLENR, 102},
   {631*OVERSAMPLENR, 97},
   {666*OVERSAMPLENR, 91},
   {701*OVERSAMPLENR, 86},
   {736*OVERSAMPLENR, 81},
   {771*OVERSAMPLENR, 76},
   {806*OVERSAMPLENR, 70},
   {841*OVERSAMPLENR, 63},
   {876*OVERSAMPLENR, 56},
   {911*OVERSAMPLENR, 48},
   {946*OVERSAMPLENR, 38},
   {981*OVERSAMPLENR, 23},
   {1005*OVERSAMPLENR, 5},
   {1016*OVERSAMPLENR, 0}
};
#endif

#if (THERMISTORHEATER_0 == 51) || (THERMISTORHEATER_1 == 51) || (THERMISTORHEATER_2 == 51) || (THERMISTORBED == 51)
// 100k EPCOS (WITH 1kohm RESISTOR FOR PULLUP, R9 ON SANGUINOLOLU! NOT FOR 4.7kohm PULLUP! THIS IS NOT NORMAL!)
// Verified by linagee.
// Calculated using 1kohm pullup, voltage divider math, and manufacturer provided temp/resistance
// Advantage: Twice the resolution and better linearity from 150C to 200C
const short temptable_51[][2]  = {
   {1*OVERSAMPLENR, 350},
   {190*OVERSAMPLENR, 250}, //top rating 250C
   {203*OVERSAMPLENR, 245},
   {217*OVERSAMPLENR, 240},
   {232*OVERSAMPLENR, 235},
   {248*OVERSAMPLENR, 230},
   {265*OVERSAMPLENR, 225},
   {283*OVERSAMPLENR, 220},
   {302*OVERSAMPLENR, 215},
   {322*OVERSAMPLENR, 210},
   {344*OVERSAMPLENR, 205},
   {366*OVERSAMPLENR, 200},
   {390*OVERSAMPLENR, 195},
   {415*OVERSAMPLENR, 190},
   {440*OVERSAMPLENR, 185},
   {467*OVERSAMPLENR, 180},
   {494*OVERSAMPLENR, 175},
   {522*OVERSAMPLENR, 170},
   {551*OVERSAMPLENR, 165},
   {580*OVERSAMPLENR, 160},
   {609*OVERSAMPLENR, 155},
   {638*OVERSAMPLENR, 150},
   {666*OVERSAMPLENR, 145},
   {695*OVERSAMPLENR, 140},
   {722*OVERSAMPLENR, 135},
   {749*OVERSAMPLENR, 130},
   {775*OVERSAMPLENR, 125},
   {800*OVERSAMPLENR, 120},
   {823*OVERSAMPLENR, 115},
   {845*OVERSAMPLENR, 110},
   {865*OVERSAMPLENR, 105},
   {884*OVERSAMPLENR, 100},
   {901*OVERSAMPLENR, 95},
   {917*OVERSAMPLENR, 90},
   {932*OVERSAMPLENR, 85},
   {944*OVERSAMPLENR, 80},
   {956*OVERSAMPLENR, 75},
   {966*OVERSAMPLENR, 70},
   {975*OVERSAMPLENR, 65},
   {982*OVERSAMPLENR, 60},
   {989*OVERSAMPLENR, 55},
   {995*OVERSAMPLENR, 50},
   {1000*OVERSAMPLENR, 45},
   {1004*OVERSAMPLENR, 40},
   {1007*OVERSAMPLENR, 35},
   {1010*OVERSAMPLENR, 30},
   {1013*OVERSAMPLENR, 25},
   {1015*OVERSAMPLENR, 20},
   {1017*OVERSAMPLENR, 15},
   {1018*OVERSAMPLENR, 10},
   {1019*OVERSAMPLENR, 5},
   {1020*OVERSAMPLENR, 0},
   {1021*OVERSAMPLENR, -5}
};
#endif

#if (THERMISTORHEATER_0 == 52) || (THERMISTORHEATER_1 == 52) || (THERMISTORHEATER_2 == 52) || (THERMISTORBED == 52) 
// 200k ATC Semitec 204GT-2 (WITH 1kohm RESISTOR FOR PULLUP, R9 ON SANGUINOLOLU! NOT FOR 4.7kohm PULLUP! THIS IS NOT NORMAL!)
// Verified by linagee. Source: http://shop.arcol.hu/static/datasheets/thermistors.pdf
// Calculated using 1kohm pullup, voltage divider math, and manufacturer provided temp/resistance
// Advantage: More resolution and better linearity from 150C to 200C
const short temptable_52[][2]  = {
   {1*OVERSAMPLENR, 500},
   {125*OVERSAMPLENR, 300}, //top rating 300C
   {142*OVERSAMPLENR, 290},
   {162*OVERSAMPLENR, 280},
   {185*OVERSAMPLENR, 270},
   {211*OVERSAMPLENR, 260},
   {240*OVERSAMPLENR, 250},
   {274*OVERSAMPLENR, 240},
   {312*OVERSAMPLENR, 230},
   {355*OVERSAMPLENR, 220},
   {401*OVERSAMPLENR, 210},
   {452*OVERSAMPLENR, 200},
   {506*OVERSAMPLENR, 190},
   {563*OVERSAMPLENR, 180},
   {620*OVERSAMPLENR, 170},
   {677*OVERSAMPLENR, 160},
   {732*OVERSAMPLENR, 150},
   {783*OVERSAMPLENR, 140},
   {830*OVERSAMPLENR, 130},
   {871*OVERSAMPLENR, 120},
   {906*OVERSAMPLENR, 110},
   {935*OVERSAMPLENR, 100},
   {958*OVERSAMPLENR, 90},
   {976*OVERSAMPLENR, 80},
   {990*OVERSAMPLENR, 70},
   {1000*OVERSAMPLENR, 60},
   {1008*OVERSAMPLENR, 50},
   {1013*OVERSAMPLENR, 40},
   {1017*OVERSAMPLENR, 30},
   {1019*OVERSAMPLENR, 20},
   {1021*OVERSAMPLENR, 10},
   {1022*OVERSAMPLENR, 0}
};
#endif

#if (THERMISTORHEATER_0 == 55) || (THERMISTORHEATER_1 == 55) || (THERMISTORHEATER_2 == 55) || (THERMISTORBED == 55) 
// 100k ATC Semitec 104GT-2 (Used on ParCan) (WITH 1kohm RESISTOR FOR PULLUP, R9 ON SANGUINOLOLU! NOT FOR 4.7kohm PULLUP! THIS IS NOT NORMAL!)
// Verified by linagee. Source: http://shop.arcol.hu/static/datasheets/thermistors.pdf
// Calculated using 1kohm pullup, voltage divider math, and manufacturer provided temp/resistance
// Advantage: More resolution and better linearity from 150C to 200C
const short temptable_55[][2]  = {
   {1*OVERSAMPLENR, 500},
   {76*OVERSAMPLENR, 300},
   {87*OVERSAMPLENR, 290},
   {100*OVERSAMPLENR, 280},
   {114*OVERSAMPLENR, 270},
   {131*OVERSAMPLENR, 260},
   {152*OVERSAMPLENR, 250},
   {175*OVERSAMPLENR, 240},
   {202*OVERSAMPLENR, 230},
   {234*OVERSAMPLENR, 220},
   {271*OVERSAMPLENR, 210},
   {312*OVERSAMPLENR, 200},
   {359*OVERSAMPLENR, 190},
   {411*OVERSAMPLENR, 180},
   {467*OVERSAMPLENR, 170},
   {527*OVERSAMPLENR, 160},
   {590*OVERSAMPLENR, 150},
   {652*OVERSAMPLENR, 140},
   {713*OVERSAMPLENR, 130},
   {770*OVERSAMPLENR, 120},
   {822*OVERSAMPLENR, 110},
   {867*OVERSAMPLENR, 100},
   {905*OVERSAMPLENR, 90},
   {936*OVERSAMPLENR, 80},
   {961*OVERSAMPLENR, 70},
   {979*OVERSAMPLENR, 60},
   {993*OVERSAMPLENR, 50},
   {1003*OVERSAMPLENR, 40},
   {1010*OVERSAMPLENR, 30},
   {1015*OVERSAMPLENR, 20},
   {1018*OVERSAMPLENR, 10},
   {1020*OVERSAMPLENR, 0}
};
#endif

#if (THERMISTORHEATER_0 == 60) || (THERMISTORHEATER_1 == 60) || (THERMISTORHEATER_2 == 60) || (THERMISTORBED == 60) // Maker's Tool Works Kapton Bed Thermister
const short temptable_60[][2]  = {
   {51*OVERSAMPLENR, 272},
   {61*OVERSAMPLENR, 258},
   {71*OVERSAMPLENR, 247},
   {81*OVERSAMPLENR, 237},
   {91*OVERSAMPLENR, 229},
   {101*OVERSAMPLENR, 221},
   {131*OVERSAMPLENR, 204},
   {161*OVERSAMPLENR, 190},
   {191*OVERSAMPLENR, 179},
   {231*OVERSAMPLENR, 167},
   {271*OVERSAMPLENR, 157},
   {311*OVERSAMPLENR, 148},
   {351*OVERSAMPLENR, 140},
   {381*OVERSAMPLENR, 135},
   {411*OVERSAMPLENR, 130},
   {441*OVERSAMPLENR, 125},
   {451*OVERSAMPLENR, 123},
   {461*OVERSAMPLENR, 122},
   {471*OVERSAMPLENR, 120},
   {481*OVERSAMPLENR, 119},
   {491*OVERSAMPLENR, 117},
   {501*OVERSAMPLENR, 116},
   {511*OVERSAMPLENR, 114},
   {521*OVERSAMPLENR, 113},
   {531*OVERSAMPLENR, 111},
   {541*OVERSAMPLENR, 110},
   {551*OVERSAMPLENR, 108},
   {561*OVERSAMPLENR, 107},
   {571*OVERSAMPLENR, 105},
   {581*OVERSAMPLENR, 104},
   {591*OVERSAMPLENR, 102},
   {601*OVERSAMPLENR, 101},
   {611*OVERSAMPLENR, 100},
   {621*OVERSAMPLENR, 98},
   {631*OVERSAMPLENR, 97},
   {641*OVERSAMPLENR, 95},
   {651*OVERSAMPLENR, 94},
   {661*OVERSAMPLENR, 92},
   {671*OVERSAMPLENR, 91},
   {681*OVERSAMPLENR, 90},
   {691*OVERSAMPLENR, 88},
   {701*OVERSAMPLENR, 87},
   {711*OVERSAMPLENR, 85},
   {721*OVERSAMPLENR, 84},
   {731*OVERSAMPLENR, 82},
   {741*OVERSAMPLENR, 81},
   {751*OVERSAMPLENR, 79},
   {761*OVERSAMPLENR, 77},
   {771*OVERSAMPLENR, 76},
   {781*OVERSAMPLENR, 74},
   {791*OVERSAMPLENR, 72},
   {801*OVERSAMPLENR, 71},
   {811*OVERSAMPLENR, 69},
   {821*OVERSAMPLENR, 67},
   {831*OVERSAMPLENR, 65},
   {841*OVERSAMPLENR, 63},
   {851*OVERSAMPLENR, 62},
   {861*OVERSAMPLENR, 60},
   {871*OVERSAMPLENR, 57},
   {881*OVERSAMPLENR, 55},
   {891*OVERSAMPLENR, 53},
   {901*OVERSAMPLENR, 51},
   {911*OVERSAMPLENR, 48},
   {921*OVERSAMPLENR, 45},
   {931*OVERSAMPLENR, 42},
   {941*OVERSAMPLENR, 39},
   {951*OVERSAMPLENR, 36},
   {961*OVERSAMPLENR, 32},
   {981*OVERSAMPLENR, 23},
   {991*OVERSAMPLENR, 17},
   {1001*OVERSAMPLENR, 9},
   {1008*OVERSAMPLENR, 0},
};
#endif


#define _TT_NAME(_N) temptable_ ## _N
#define TT_NAME(_N) _TT_NAME(_N)

#ifdef THERMISTORHEATER_0
# define HEATER_0_TEMPTABLE TT_NAME(THERMISTORHEATER_0)
# define HEATER_0_TEMPTABLE_LEN (sizeof(HEATER_0_TEMPTABLE)/sizeof(*HEATER_0_TEMPTABLE))
#else
# ifdef HEATER_0_USES_THERMISTOR
#  error No heater 0 thermistor table specified
# else  // HEATER_0_USES_THERMISTOR
#  define HEATER_0_TEMPTABLE NULL
#  define HEATER_0_TEMPTABLE_LEN 0
# endif // HEATER_0_USES_THERMISTOR
#endif

//Set the high and low raw values for the heater, this indicates which raw value is a high or low temperature
#ifndef HEATER_0_RAW_HI_TEMP
# ifdef HEATER_0_USES_THERMISTOR   //In case of a thermistor the highest temperature results in the lowest ADC value
#  define HEATER_0_RAW_HI_TEMP 0
#  define HEATER_0_RAW_LO_TEMP 65535//16383 //16384 = adc精度 * 重复采样次数 =1024 * 16 //这里的adc精度指的是Arduino的adc精度
# else                          //In case of an thermocouple the highest temperature results in the highest ADC value
#  define HEATER_0_RAW_HI_TEMP 65535//16383
#  define HEATER_0_RAW_LO_TEMP 0
# endif
#endif

#ifdef THERMISTORHEATER_1
# define HEATER_1_TEMPTABLE TT_NAME(THERMISTORHEATER_1)
# define HEATER_1_TEMPTABLE_LEN (sizeof(HEATER_1_TEMPTABLE)/sizeof(*HEATER_1_TEMPTABLE))
#else
# ifdef HEATER_1_USES_THERMISTOR
#  error No heater 1 thermistor table specified
# else  // HEATER_1_USES_THERMISTOR
#  define HEATER_1_TEMPTABLE NULL
#  define HEATER_1_TEMPTABLE_LEN 0
# endif // HEATER_1_USES_THERMISTOR
#endif

//Set the high and low raw values for the heater, this indicates which raw value is a high or low temperature
#ifndef HEATER_1_RAW_HI_TEMP
# ifdef HEATER_1_USES_THERMISTOR   //In case of a thermistor the highest temperature results in the lowest ADC value
#  define HEATER_1_RAW_HI_TEMP 0
#  define HEATER_1_RAW_LO_TEMP 16383
# else                          //In case of an thermocouple the highest temperature results in the highest ADC value
#  define HEATER_1_RAW_HI_TEMP 16383
#  define HEATER_1_RAW_LO_TEMP 0
# endif
#endif

#ifdef THERMISTORHEATER_2
# define HEATER_2_TEMPTABLE TT_NAME(THERMISTORHEATER_2)
# define HEATER_2_TEMPTABLE_LEN (sizeof(HEATER_2_TEMPTABLE)/sizeof(*HEATER_2_TEMPTABLE))
#else
# ifdef HEATER_2_USES_THERMISTOR
#  error No heater 2 thermistor table specified
# else  // HEATER_2_USES_THERMISTOR
#  define HEATER_2_TEMPTABLE NULL
#  define HEATER_2_TEMPTABLE_LEN 0
# endif // HEATER_2_USES_THERMISTOR
#endif

//Set the high and low raw values for the heater, this indicates which raw value is a high or low temperature
#ifndef HEATER_2_RAW_HI_TEMP
# ifdef HEATER_2_USES_THERMISTOR   //In case of a thermistor the highest temperature results in the lowest ADC value
#  define HEATER_2_RAW_HI_TEMP 0
#  define HEATER_2_RAW_LO_TEMP 16383
# else                          //In case of an thermocouple the highest temperature results in the highest ADC value
#  define HEATER_2_RAW_HI_TEMP 16383
#  define HEATER_2_RAW_LO_TEMP 0
# endif
#endif

#ifdef THERMISTORBED
# define BEDTEMPTABLE TT_NAME(THERMISTORBED)
# define BEDTEMPTABLE_LEN (sizeof(BEDTEMPTABLE)/sizeof(*BEDTEMPTABLE))
#else
# ifdef BED_USES_THERMISTOR
#  error No bed thermistor table specified
# endif // BED_USES_THERMISTOR
#endif

//Set the high and low raw values for the heater, this indicates which raw value is a high or low temperature
#ifndef HEATER_BED_RAW_HI_TEMP
# ifdef BED_USES_THERMISTOR   //In case of a thermistor the highest temperature results in the lowest ADC value
#  define HEATER_BED_RAW_HI_TEMP 0
#  define HEATER_BED_RAW_LO_TEMP 65535//16383
# else                          //In case of an thermocouple the highest temperature results in the highest ADC value
#  define HEATER_BED_RAW_HI_TEMP 65535//16383
#  define HEATER_BED_RAW_LO_TEMP 0
# endif
#endif

#endif //THERMISTORTABLES_H_
