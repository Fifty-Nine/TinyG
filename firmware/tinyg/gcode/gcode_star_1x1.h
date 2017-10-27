/*
 * data file containing gcode - 1" x 1" start test
 */
const char PROGMEM gcode_file[] = "\
N1 ( Made using CamBam - http://www.cambam.co.uk )\n\
N2 ( STAR 10/28/2011 1:45:33 PM )\n\
N3 ( T1 : 0.04 )\n\
N4 G20 G90 G64 G40\n\
/N5 G0 Z0.125\n\
N6 ( T1 : 0.04 )\n\
N7 T1 M6\n\
N8 ( Profile1 )\n\
N9 G17\n\
N10 M3 S1000\n\
N11 G0 X0.481 Y0.9579\n\
/N12 G1 F10.0 Z0.0\n\
N13 G1 F30.0 X0.3738 Y0.626 Z-0.0014\n\
/N14 G1 X0.025 Y0.6266 Z-0.0028\n\
/N15 G3 X0.0133 Y0.5904 Z-0.003 I0.0 J-0.02\n\
/N16 G1 X0.2958 Y0.386 Z-0.0044\n\
/N17 G1 X0.1874 Y0.0545 Z-0.0058\n\
/N18 G3 X0.2182 Y0.0321 Z-0.006 I0.019 J-0.0062\n\
/N19 G1 X0.5 Y0.2376 Z-0.0074\n\
N20 G1 X0.7818 Y0.0321 Z-0.0088\n\
N21 G3 X0.8126 Y0.0545 Z-0.009 I0.0118 J0.0162\n\
N22 G1 X0.7042 Y0.386 Z-0.0104\n\
N23 G1 X0.9867 Y0.5904 Z-0.0118\n\
N24 G3 X0.975 Y0.6266 Z-0.012 I-0.0117 J0.0162\n\
N25 G1 X0.6262 Y0.626 Z-0.0134\n\
N26 G1 X0.519 Y0.9579 Z-0.0148\n\
N27 G3 X0.481 Z-0.015 I-0.019 J-0.0061\n\
N28 G1 X0.3738 Y0.626 Z-0.0164\n\
N29 G1 X0.025 Y0.6266 Z-0.0178\n\
N30 G3 X0.0133 Y0.5904 Z-0.018 I0.0 J-0.02\n\
N31 G1 X0.2958 Y0.386 Z-0.0194\n\
N32 G1 X0.1874 Y0.0545 Z-0.0208\n\
N33 G3 X0.2182 Y0.0321 Z-0.021 I0.019 J-0.0062\n\
N34 G1 X0.5 Y0.2376 Z-0.0224\n\
N35 G1 X0.7818 Y0.0321 Z-0.0238\n\
N36 G3 X0.8126 Y0.0545 Z-0.024 I0.0118 J0.0162\n\
N37 G1 X0.7042 Y0.386 Z-0.0254\n\
N38 G1 X0.9867 Y0.5904 Z-0.0268\n\
N39 G3 X0.975 Y0.6266 Z-0.027 I-0.0117 J0.0162\n\
N40 G1 X0.6262 Y0.626 Z-0.0284\n\
N41 G1 X0.519 Y0.9579 Z-0.0298\n\
N42 G3 X0.481 Z-0.03 I-0.019 J-0.0061\n\
N43 G1 X0.3738 Y0.626 Z-0.0314\n\
N44 G1 X0.025 Y0.6266 Z-0.0328\n\
N45 G3 X0.0133 Y0.5904 Z-0.033 I0.0 J-0.02\n\
N46 G1 X0.2958 Y0.386 Z-0.0344\n\
N47 G1 X0.1874 Y0.0545 Z-0.0358\n\
N48 G3 X0.2182 Y0.0321 Z-0.036 I0.019 J-0.0062\n\
N49 G1 X0.5 Y0.2376 Z-0.0374\n\
N50 G1 X0.7818 Y0.0321 Z-0.0388\n\
N51 G3 X0.8126 Y0.0545 Z-0.039 I0.0118 J0.0162\n\
N52 G1 X0.7042 Y0.386 Z-0.0404\n\
N53 G1 X0.9867 Y0.5904 Z-0.0418\n\
N54 G3 X0.975 Y0.6266 Z-0.042 I-0.0117 J0.0162\n\
N55 G1 X0.6262 Y0.626 Z-0.0434\n\
N56 G1 X0.519 Y0.9579 Z-0.0448\n\
N57 G3 X0.481 Z-0.045 I-0.019 J-0.0061\n\
N58 G1 X0.3738 Y0.626 Z-0.0464\n\
N59 G1 X0.025 Y0.6266 Z-0.0478\n\
N60 G3 X0.0133 Y0.5904 Z-0.048 I0.0 J-0.02\n\
N61 G1 X0.2958 Y0.386 Z-0.0494\n\
N62 G1 X0.1874 Y0.0545 Z-0.0508\n\
N63 G3 X0.2182 Y0.0321 Z-0.051 I0.019 J-0.0062\n\
N64 G1 X0.5 Y0.2376 Z-0.0524\n\
N65 G1 X0.7818 Y0.0321 Z-0.0538\n\
N66 G3 X0.8126 Y0.0545 Z-0.054 I0.0118 J0.0162\n\
N67 G1 X0.7042 Y0.386 Z-0.0554\n\
N68 G1 X0.9867 Y0.5904 Z-0.0568\n\
N69 G3 X0.975 Y0.6266 Z-0.057 I-0.0117 J0.0162\n\
N70 G1 X0.6262 Y0.626 Z-0.0584\n\
N71 G1 X0.519 Y0.9579 Z-0.0598\n\
N72 G3 X0.481 Z-0.06 I-0.019 J-0.0061\n\
N73 G1 X0.3738 Y0.626 Z-0.0614\n\
N74 G1 X0.025 Y0.6266 Z-0.0628\n\
N75 G3 X0.0133 Y0.5904 Z-0.063 I0.0 J-0.02\n\
N76 G1 X0.2958 Y0.386 Z-0.0644\n\
N77 G1 X0.1874 Y0.0545 Z-0.0658\n\
N78 G3 X0.2182 Y0.0321 Z-0.066 I0.019 J-0.0062\n\
N79 G1 X0.5 Y0.2376 Z-0.0674\n\
N80 G1 X0.7818 Y0.0321 Z-0.0688\n\
N81 G3 X0.8126 Y0.0545 Z-0.069 I0.0118 J0.0162\n\
N82 G1 X0.7042 Y0.386 Z-0.0704\n\
N83 G1 X0.9867 Y0.5904 Z-0.0718\n\
N84 G3 X0.975 Y0.6266 Z-0.072 I-0.0117 J0.0162\n\
N85 G1 X0.6262 Y0.626 Z-0.0734\n\
N86 G1 X0.519 Y0.9579 Z-0.0748\n\
N87 G3 X0.481 Z-0.075 I-0.019 J-0.0061\n\
N88 G1 X0.3738 Y0.626 Z-0.0764\n\
N89 G1 X0.025 Y0.6266 Z-0.0778\n\
N90 G3 X0.0133 Y0.5904 Z-0.078 I0.0 J-0.02\n\
N91 G1 X0.2958 Y0.386 Z-0.0794\n\
N92 G1 X0.1874 Y0.0545 Z-0.0808\n\
N93 G3 X0.2182 Y0.0321 Z-0.081 I0.019 J-0.0062\n\
N94 G1 X0.5 Y0.2376 Z-0.0824\n\
N95 G1 X0.7818 Y0.0321 Z-0.0838\n\
N96 G3 X0.8126 Y0.0545 Z-0.084 I0.0118 J0.0162\n\
N97 G1 X0.7042 Y0.386 Z-0.0854\n\
N98 G1 X0.9867 Y0.5904 Z-0.0868\n\
N99 G3 X0.975 Y0.6266 Z-0.087 I-0.0117 J0.0162\n\
N100 G1 X0.6262 Y0.626 Z-0.0884\n\
N101 G1 X0.519 Y0.9579 Z-0.0898\n\
N102 G3 X0.481 Z-0.09 I-0.019 J-0.0061\n\
N103 G1 X0.3738 Y0.626 Z-0.0914\n\
N104 G1 X0.025 Y0.6266 Z-0.0928\n\
N105 G3 X0.0133 Y0.5904 Z-0.093 I0.0 J-0.02\n\
N106 G1 X0.2958 Y0.386 Z-0.0944\n\
N107 G1 X0.1874 Y0.0545 Z-0.0958\n\
N108 G3 X0.2182 Y0.0321 Z-0.096 I0.019 J-0.0062\n\
N109 G1 X0.5 Y0.2376 Z-0.0974\n\
N110 G1 X0.7818 Y0.0321 Z-0.0988\n\
N111 G3 X0.8126 Y0.0545 Z-0.099 I0.0118 J0.0162\n\
N112 G1 X0.7042 Y0.386 Z-0.1004\n\
N113 G1 X0.9867 Y0.5904 Z-0.1018\n\
N114 G3 X0.975 Y0.6266 Z-0.102 I-0.0117 J0.0162\n\
N115 G1 X0.6262 Y0.626 Z-0.1034\n\
N116 G1 X0.519 Y0.9579 Z-0.1048\n\
N117 G3 X0.481 Z-0.105 I-0.019 J-0.0061\n\
N118 G1 X0.3738 Y0.626 Z-0.1064\n\
N119 G1 X0.025 Y0.6266 Z-0.1078\n\
N120 G3 X0.0133 Y0.5904 Z-0.108 I0.0 J-0.02\n\
N121 G1 X0.2958 Y0.386 Z-0.1094\n\
N122 G1 X0.1874 Y0.0545 Z-0.1108\n\
N123 G3 X0.2182 Y0.0321 Z-0.111 I0.019 J-0.0062\n\
N124 G1 X0.5 Y0.2376 Z-0.1124\n\
N125 G1 X0.7818 Y0.0321 Z-0.1138\n\
N126 G3 X0.8126 Y0.0545 Z-0.114 I0.0118 J0.0162\n\
N127 G1 X0.7042 Y0.386 Z-0.1154\n\
N128 G1 X0.9867 Y0.5904 Z-0.1168\n\
N129 G3 X0.975 Y0.6266 Z-0.117 I-0.0117 J0.0162\n\
N130 G1 X0.6262 Y0.626 Z-0.1184\n\
N131 G1 X0.519 Y0.9579 Z-0.1198\n\
N132 G3 X0.481 Z-0.12 I-0.019 J-0.0061\n\
N133 G1 X0.3738 Y0.626 Z-0.1205\n\
N134 G1 X0.025 Y0.6266 Z-0.1209\n\
N135 G3 X0.0133 Y0.5904 Z-0.121 I0.0 J-0.02\n\
N136 G1 X0.2958 Y0.386 Z-0.1215\n\
N137 G1 X0.1874 Y0.0545 Z-0.1219\n\
N138 G3 X0.2182 Y0.0321 Z-0.122 I0.019 J-0.0062\n\
N139 G1 X0.5 Y0.2376 Z-0.1225\n\
N140 G1 X0.7818 Y0.0321 Z-0.1229\n\
N141 G3 X0.8126 Y0.0545 Z-0.123 I0.0118 J0.0162\n\
N142 G1 X0.7042 Y0.386 Z-0.1235\n\
N143 G1 X0.9867 Y0.5904 Z-0.1239\n\
N144 G3 X0.975 Y0.6266 Z-0.124 I-0.0117 J0.0162\n\
N145 G1 X0.6262 Y0.626 Z-0.1245\n\
N146 G1 X0.519 Y0.9579 Z-0.1249\n\
N147 G3 X0.481 Z-0.125 I-0.019 J-0.0061\n\
N148 G1 X0.3738 Y0.626\n\
N149 G1 X0.025 Y0.6266\n\
N150 G3 X0.0133 Y0.5904 I0.0 J-0.02\n\
N151 G1 X0.2958 Y0.386\n\
N152 G1 X0.1874 Y0.0545\n\
N153 G3 X0.2182 Y0.0321 I0.019 J-0.0062\n\
N154 G1 X0.5 Y0.2376\n\
N155 G1 X0.7818 Y0.0321\n\
N156 G3 X0.8126 Y0.0545 I0.0118 J0.0162\n\
N157 G1 X0.7042 Y0.386\n\
N158 G1 X0.9867 Y0.5904\n\
N159 G3 X0.975 Y0.6266 I-0.0117 J0.0162\n\
N160 G1 X0.6262 Y0.626\n\
N161 G1 X0.519 Y0.9579\n\
N162 G3 X0.481 I-0.019 J-0.0061\n\
N163 G0 Z0.125\n\
N164 M5\n\
N165 M30";
