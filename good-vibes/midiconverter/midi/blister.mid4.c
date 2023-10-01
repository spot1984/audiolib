/*
    minimidi file created by midiconverter.py v2 
        
    Times are in 10 ms (.010s)
    Assumes same instrument is on all tracks
    
    byt bit desc
    1   8   ticks
            0xff song end (max delay 253)
            0xfe extended delay (16 bit delay) two more bytecount then note info
            
    2   1.7 voicehigh.1 note.7
        6.2 velocity.6 voicelow.2, velocity 0 is note off
*/

const unsigned char song[]={

	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1, ticks 0, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 0, 1, 43, 100)
	29,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2, ticks 456, elapsed 29, voice: 0 note: 43 velocity 0 event ('note', 456, 1, 43, 0)
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3, ticks 480, elapsed 1, voice: 0 note: 47 velocity 100 event ('note', 480, 1, 47, 100)
	14,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 4, ticks 708, elapsed 14, voice: 0 note: 47 velocity 0 event ('note', 708, 1, 47, 0)
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 5, ticks 726, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 726, 1, 43, 100)
	14,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 6, ticks 954, elapsed 14, voice: 0 note: 43 velocity 0 event ('note', 954, 1, 43, 0)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 7, ticks 960, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 960, 1, 48, 100)
	29,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 8, ticks 1416, elapsed 29, voice: 0 note: 48 velocity 0 event ('note', 1416, 1, 48, 0)
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 9, ticks 1440, elapsed 1, voice: 0 note: 47 velocity 100 event ('note', 1440, 1, 47, 100)
	14,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 10, ticks 1668, elapsed 14, voice: 0 note: 47 velocity 0 event ('note', 1668, 1, 47, 0)
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 11, ticks 1686, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 1686, 1, 43, 100)
	29,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 12, ticks 2142, elapsed 29, voice: 0 note: 43 velocity 0 event ('note', 2142, 1, 43, 0)
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 13, ticks 2166, elapsed 1, voice: 0 note: 47 velocity 100 event ('note', 2166, 1, 47, 100)
	29,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 14, ticks 2622, elapsed 29, voice: 0 note: 47 velocity 0 event ('note', 2622, 1, 47, 0)
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 15, ticks 2646, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 2646, 1, 43, 100)
	14,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 16, ticks 2874, elapsed 14, voice: 0 note: 43 velocity 0 event ('note', 2874, 1, 43, 0)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 17, ticks 2880, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 2880, 1, 48, 100)
	29,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 18, ticks 3336, elapsed 29, voice: 0 note: 48 velocity 0 event ('note', 3336, 1, 48, 0)
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 19, ticks 3360, elapsed 1, voice: 0 note: 47 velocity 100 event ('note', 3360, 1, 47, 100)
	29,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 20, ticks 3816, elapsed 29, voice: 0 note: 47 velocity 0 event ('note', 3816, 1, 47, 0)
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 21, ticks 3840, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 3840, 1, 43, 100)
	29,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 22, ticks 4296, elapsed 29, voice: 0 note: 43 velocity 0 event ('note', 4296, 1, 43, 0)
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 23, ticks 4320, elapsed 1, voice: 0 note: 47 velocity 100 event ('note', 4320, 1, 47, 100)
	14,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 24, ticks 4548, elapsed 14, voice: 0 note: 47 velocity 0 event ('note', 4548, 1, 47, 0)
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 25, ticks 4566, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 4566, 1, 43, 100)
	14,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 26, ticks 4794, elapsed 14, voice: 0 note: 43 velocity 0 event ('note', 4794, 1, 43, 0)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 27, ticks 4800, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 4800, 1, 48, 100)
	29,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 28, ticks 5256, elapsed 29, voice: 0 note: 48 velocity 0 event ('note', 5256, 1, 48, 0)
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 29, ticks 5280, elapsed 1, voice: 0 note: 47 velocity 100 event ('note', 5280, 1, 47, 100)
	14,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 30, ticks 5508, elapsed 14, voice: 0 note: 47 velocity 0 event ('note', 5508, 1, 47, 0)
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 31, ticks 5526, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 5526, 1, 43, 100)
	14,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 32, ticks 5754, elapsed 14, voice: 0 note: 43 velocity 0 event ('note', 5754, 1, 43, 0)
	16,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 33, ticks 6006, elapsed 16, voice: 0 note: 38 velocity 100 event ('note', 6006, 10, 38, 100)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 34, ticks 6019, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 6019, 10, 40, 100)
	13,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 35, ticks 6234, elapsed 13, voice: 0 note: 38 velocity 0 event ('note', 6234, 10, 38, 0)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 36, ticks 6240, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 6240, 10, 38, 100)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 37, ticks 6247, elapsed 0, voice: 1 note: 40 velocity 0 event ('note', 6247, 10, 40, 0)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 38, ticks 6252, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 6252, 10, 40, 100)
	13,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 39, ticks 6468, elapsed 13, voice: 0 note: 38 velocity 0 event ('note', 6468, 10, 38, 0)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 40, ticks 6480, elapsed 0, voice: 1 note: 40 velocity 0 event ('note', 6480, 10, 40, 0)
	31,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 41, ticks 6966, elapsed 31, voice: 0 note: 38 velocity 100 event ('note', 6966, 10, 38, 100)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 42, ticks 6979, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 6979, 10, 40, 100)
	13,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 43, ticks 7194, elapsed 13, voice: 0 note: 38 velocity 0 event ('note', 7194, 10, 38, 0)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 44, ticks 7200, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 7200, 10, 38, 100)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 45, ticks 7207, elapsed 0, voice: 1 note: 40 velocity 0 event ('note', 7207, 10, 40, 0)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 46, ticks 7212, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 7212, 10, 40, 100)
	13,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 47, ticks 7428, elapsed 13, voice: 0 note: 38 velocity 0 event ('note', 7428, 10, 38, 0)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 48, ticks 7440, elapsed 0, voice: 1 note: 40 velocity 0 event ('note', 7440, 10, 40, 0)
	15,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 49, ticks 7680, elapsed 15, voice: 0 note: 43 velocity 100 event ('note', 7680, 1, 43, 100)
	29,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 50, ticks 8136, elapsed 29, voice: 0 note: 43 velocity 0 event ('note', 8136, 1, 43, 0)
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 51, ticks 8160, elapsed 1, voice: 0 note: 47 velocity 100 event ('note', 8160, 1, 47, 100)
	14,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 52, ticks 8388, elapsed 14, voice: 0 note: 47 velocity 0 event ('note', 8388, 1, 47, 0)
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 53, ticks 8406, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 8406, 1, 43, 100)
	14,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 54, ticks 8634, elapsed 14, voice: 0 note: 43 velocity 0 event ('note', 8634, 1, 43, 0)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 55, ticks 8640, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 8640, 1, 48, 100)
	29,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 56, ticks 9096, elapsed 29, voice: 0 note: 48 velocity 0 event ('note', 9096, 1, 48, 0)
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 57, ticks 9120, elapsed 1, voice: 0 note: 47 velocity 100 event ('note', 9120, 1, 47, 100)
	14,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 58, ticks 9348, elapsed 14, voice: 0 note: 47 velocity 0 event ('note', 9348, 1, 47, 0)
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 59, ticks 9366, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 9366, 1, 43, 100)
	29,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 60, ticks 9822, elapsed 29, voice: 0 note: 43 velocity 0 event ('note', 9822, 1, 43, 0)
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 61, ticks 9846, elapsed 1, voice: 0 note: 47 velocity 100 event ('note', 9846, 1, 47, 100)
	29,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 62, ticks 10302, elapsed 29, voice: 0 note: 47 velocity 0 event ('note', 10302, 1, 47, 0)
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 63, ticks 10326, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 10326, 1, 43, 100)
	14,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 64, ticks 10554, elapsed 14, voice: 0 note: 43 velocity 0 event ('note', 10554, 1, 43, 0)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 65, ticks 10560, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 10560, 1, 48, 100)
	29,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 66, ticks 11016, elapsed 29, voice: 0 note: 48 velocity 0 event ('note', 11016, 1, 48, 0)
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 67, ticks 11040, elapsed 1, voice: 0 note: 47 velocity 100 event ('note', 11040, 1, 47, 100)
	29,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 68, ticks 11496, elapsed 29, voice: 0 note: 47 velocity 0 event ('note', 11496, 1, 47, 0)
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 69, ticks 11520, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 11520, 1, 43, 100)
	29,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 70, ticks 11976, elapsed 29, voice: 0 note: 43 velocity 0 event ('note', 11976, 1, 43, 0)
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 71, ticks 12000, elapsed 1, voice: 0 note: 47 velocity 100 event ('note', 12000, 1, 47, 100)
	14,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 72, ticks 12228, elapsed 14, voice: 0 note: 47 velocity 0 event ('note', 12228, 1, 47, 0)
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 73, ticks 12246, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 12246, 1, 43, 100)
	14,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 74, ticks 12474, elapsed 14, voice: 0 note: 43 velocity 0 event ('note', 12474, 1, 43, 0)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 75, ticks 12480, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 12480, 1, 48, 100)
	29,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 76, ticks 12936, elapsed 29, voice: 0 note: 48 velocity 0 event ('note', 12936, 1, 48, 0)
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 77, ticks 12960, elapsed 1, voice: 0 note: 47 velocity 100 event ('note', 12960, 1, 47, 100)
	14,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 78, ticks 13188, elapsed 14, voice: 0 note: 47 velocity 0 event ('note', 13188, 1, 47, 0)
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 79, ticks 13206, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 13206, 1, 43, 100)
	14,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 80, ticks 13434, elapsed 14, voice: 0 note: 43 velocity 0 event ('note', 13434, 1, 43, 0)
	16,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 81, ticks 13686, elapsed 16, voice: 0 note: 38 velocity 100 event ('note', 13686, 10, 38, 100)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 82, ticks 13699, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 13699, 10, 40, 100)
	13,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 83, ticks 13914, elapsed 13, voice: 0 note: 38 velocity 0 event ('note', 13914, 10, 38, 0)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 84, ticks 13920, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 13920, 10, 38, 100)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 85, ticks 13927, elapsed 0, voice: 1 note: 40 velocity 0 event ('note', 13927, 10, 40, 0)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 86, ticks 13932, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 13932, 10, 40, 100)
	13,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 87, ticks 14148, elapsed 13, voice: 0 note: 38 velocity 0 event ('note', 14148, 10, 38, 0)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 88, ticks 14160, elapsed 0, voice: 1 note: 40 velocity 0 event ('note', 14160, 10, 40, 0)
	31,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 89, ticks 14646, elapsed 31, voice: 0 note: 38 velocity 100 event ('note', 14646, 10, 38, 100)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 90, ticks 14659, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 14659, 10, 40, 100)
	13,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 91, ticks 14874, elapsed 13, voice: 0 note: 38 velocity 0 event ('note', 14874, 10, 38, 0)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 92, ticks 14880, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 14880, 10, 38, 100)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 93, ticks 14887, elapsed 0, voice: 1 note: 40 velocity 0 event ('note', 14887, 10, 40, 0)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 94, ticks 14892, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 14892, 10, 40, 100)
	13,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 95, ticks 15108, elapsed 13, voice: 0 note: 38 velocity 0 event ('note', 15108, 10, 38, 0)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 96, ticks 15120, elapsed 0, voice: 1 note: 40 velocity 0 event ('note', 15120, 10, 40, 0)
	15,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 97, ticks 15360, elapsed 15, voice: 0 note: 43 velocity 100 event ('note', 15360, 1, 43, 100)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 98, ticks 15360, elapsed 0, voice: 1 note: 50 velocity 100 event ('note', 15360, 2, 50, 100)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 99, ticks 15360, elapsed 0, voice: 2 note: 55 velocity 100 event ('note', 15360, 2, 55, 100)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 100, ticks 15360, elapsed 0, voice: 3 note: 43 velocity 100 event ('note', 15360, 2, 43, 100)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 101, ticks 15360, elapsed 0, voice: 0 note: 67 velocity 100 event ('note', 15360, 3, 67, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 102, ticks 15360, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 15360, 3, 55, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 103, ticks 15360, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 15360, 3, 50, 100)
	0,((( 0 &4)<<5)|( 31 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 104, ticks 15360, elapsed 0, voice: 0 note: 31 velocity 100 event ('note', 15360, 4, 31, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 105, ticks 15360, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 15360, 10, 35, 100)
	14,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 106, ticks 15588, elapsed 14, voice: 0 note: 35 velocity 0 event ('note', 15588, 10, 35, 0)
	14,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 107, ticks 15816, elapsed 14, voice: 3 note: 43 velocity 0 event ('note', 15816, 1, 43, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 109, ticks 15816, elapsed 0, voice: 2 note: 55 velocity 0 event ('note', 15816, 2, 55, 0)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 110, ticks 15816, elapsed 0, voice: 1 note: 50 velocity 0 event ('note', 15816, 2, 50, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 31 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 115, ticks 15840, elapsed 1, voice: 0 note: 47 velocity 100 event ('note', 15840, 1, 47, 100)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 116, ticks 15840, elapsed 0, voice: 1 note: 59 velocity 100 event ('note', 15840, 2, 59, 100)
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 117, ticks 15840, elapsed 0, voice: 2 note: 54 velocity 100 event ('note', 15840, 2, 54, 100)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 118, ticks 15840, elapsed 0, voice: 3 note: 47 velocity 100 event ('note', 15840, 2, 47, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 119, ticks 15840, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 15840, 3, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 120, ticks 15840, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 15840, 3, 54, 100)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 121, ticks 15840, elapsed 0, voice: 0 note: 71 velocity 100 event ('note', 15840, 3, 71, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 122, ticks 15840, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 15840, 4, 35, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 123, ticks 15840, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 15840, 10, 40, 100)
	14,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 124, ticks 16068, elapsed 14, voice: 3 note: 47 velocity 0 event ('note', 16068, 1, 47, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 126, ticks 16068, elapsed 0, voice: 2 note: 54 velocity 0 event ('note', 16068, 2, 54, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 129, ticks 16068, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 16068, 10, 40, 0)
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 130, ticks 16086, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 16086, 1, 43, 100)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 131, ticks 16086, elapsed 0, voice: 2 note: 50 velocity 100 event ('note', 16086, 2, 50, 100)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 132, ticks 16086, elapsed 0, voice: 3 note: 43 velocity 100 event ('note', 16086, 2, 43, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 133, ticks 16086, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 16086, 3, 50, 100)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 134, ticks 16086, elapsed 0, voice: 0 note: 67 velocity 100 event ('note', 16086, 3, 67, 100)
	13,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 135, ticks 16296, elapsed 13, voice: 1 note: 59 velocity 0 event ('note', 16296, 2, 59, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	1,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 138, ticks 16314, elapsed 1, voice: 3 note: 43 velocity 0 event ('note', 16314, 1, 43, 0)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 139, ticks 16314, elapsed 0, voice: 2 note: 50 velocity 0 event ('note', 16314, 2, 50, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 142, ticks 16314, elapsed 0, voice: 0 note: 67 velocity 0 event ('note', 16314, 3, 67, 0)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 143, ticks 16320, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 16320, 1, 48, 100)
	0,((( 1 &4)<<5)|( 60 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 144, ticks 16320, elapsed 0, voice: 1 note: 60 velocity 100 event ('note', 16320, 2, 60, 100)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 145, ticks 16320, elapsed 0, voice: 2 note: 55 velocity 100 event ('note', 16320, 2, 55, 100)
	0,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 146, ticks 16320, elapsed 0, voice: 3 note: 48 velocity 100 event ('note', 16320, 2, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 147, ticks 16320, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 16320, 3, 60, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 148, ticks 16320, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 16320, 3, 55, 100)
	0,((( 0 &4)<<5)|( 72 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 149, ticks 16320, elapsed 0, voice: 0 note: 72 velocity 100 event ('note', 16320, 3, 72, 100)
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 150, ticks 16320, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 16320, 4, 36, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 151, ticks 16320, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 16320, 10, 35, 100)
	14,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 152, ticks 16548, elapsed 14, voice: 0 note: 35 velocity 0 event ('note', 16548, 10, 35, 0)
	14,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 153, ticks 16776, elapsed 14, voice: 3 note: 48 velocity 0 event ('note', 16776, 1, 48, 0)
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 155, ticks 16776, elapsed 0, voice: 2 note: 55 velocity 0 event ('note', 16776, 2, 55, 0)
	0,((( 1 &4)<<5)|( 60 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 156, ticks 16776, elapsed 0, voice: 1 note: 60 velocity 0 event ('note', 16776, 2, 60, 0)
	// Note off skipped, note 72 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 36 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 161, ticks 16800, elapsed 1, voice: 0 note: 47 velocity 100 event ('note', 16800, 1, 47, 100)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 162, ticks 16800, elapsed 0, voice: 1 note: 59 velocity 100 event ('note', 16800, 2, 59, 100)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 163, ticks 16800, elapsed 0, voice: 2 note: 47 velocity 100 event ('note', 16800, 2, 47, 100)
	0,((( 3 &4)<<5)|( 54 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 164, ticks 16800, elapsed 0, voice: 3 note: 54 velocity 100 event ('note', 16800, 2, 54, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 165, ticks 16800, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 16800, 3, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 166, ticks 16800, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 16800, 3, 54, 100)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 167, ticks 16800, elapsed 0, voice: 0 note: 71 velocity 100 event ('note', 16800, 3, 71, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 168, ticks 16800, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 16800, 4, 35, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 169, ticks 16800, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 16800, 10, 40, 100)
	14,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 170, ticks 17028, elapsed 14, voice: 2 note: 47 velocity 0 event ('note', 17028, 1, 47, 0)
	0,((( 3 &4)<<5)|( 54 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 171, ticks 17028, elapsed 0, voice: 3 note: 54 velocity 0 event ('note', 17028, 2, 54, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 173, ticks 17028, elapsed 0, voice: 1 note: 59 velocity 0 event ('note', 17028, 2, 59, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 178, ticks 17028, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 17028, 10, 40, 0)
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 179, ticks 17046, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 17046, 1, 43, 100)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 180, ticks 17046, elapsed 0, voice: 1 note: 55 velocity 100 event ('note', 17046, 2, 55, 100)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 181, ticks 17046, elapsed 0, voice: 2 note: 50 velocity 100 event ('note', 17046, 2, 50, 100)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 182, ticks 17046, elapsed 0, voice: 3 note: 43 velocity 100 event ('note', 17046, 2, 43, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 183, ticks 17046, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 17046, 3, 55, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 184, ticks 17046, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 17046, 3, 50, 100)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 185, ticks 17046, elapsed 0, voice: 0 note: 67 velocity 100 event ('note', 17046, 3, 67, 100)
	0,((( 0 &4)<<5)|( 31 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 186, ticks 17046, elapsed 0, voice: 0 note: 31 velocity 100 event ('note', 17046, 4, 31, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 187, ticks 17046, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 17046, 10, 40, 100)
	14,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 188, ticks 17274, elapsed 14, voice: 0 note: 40 velocity 0 event ('note', 17274, 10, 40, 0)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 189, ticks 17280, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 17280, 10, 35, 100)
	14,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 190, ticks 17502, elapsed 14, voice: 3 note: 43 velocity 0 event ('note', 17502, 1, 43, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 192, ticks 17502, elapsed 0, voice: 2 note: 50 velocity 0 event ('note', 17502, 2, 50, 0)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 193, ticks 17502, elapsed 0, voice: 1 note: 55 velocity 0 event ('note', 17502, 2, 55, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 197, ticks 17508, elapsed 0, voice: 0 note: 35 velocity 0 event ('note', 17508, 10, 35, 0)
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 198, ticks 17526, elapsed 1, voice: 0 note: 47 velocity 100 event ('note', 17526, 1, 47, 100)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 199, ticks 17526, elapsed 0, voice: 1 note: 59 velocity 100 event ('note', 17526, 2, 59, 100)
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 200, ticks 17526, elapsed 0, voice: 2 note: 54 velocity 100 event ('note', 17526, 2, 54, 100)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 201, ticks 17526, elapsed 0, voice: 3 note: 47 velocity 100 event ('note', 17526, 2, 47, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 202, ticks 17526, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 17526, 3, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 203, ticks 17526, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 17526, 3, 54, 100)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 204, ticks 17526, elapsed 0, voice: 0 note: 71 velocity 100 event ('note', 17526, 3, 71, 100)
	14,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 205, ticks 17760, elapsed 14, voice: 0 note: 35 velocity 100 event ('note', 17760, 4, 35, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 206, ticks 17760, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 17760, 10, 40, 100)
	// Note off skipped, note 31 not found in channels, probably interrupted
	14,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 208, ticks 17982, elapsed 14, voice: 3 note: 47 velocity 0 event ('note', 17982, 1, 47, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 210, ticks 17982, elapsed 0, voice: 2 note: 54 velocity 0 event ('note', 17982, 2, 54, 0)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 211, ticks 17982, elapsed 0, voice: 1 note: 59 velocity 0 event ('note', 17982, 2, 59, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 215, ticks 17988, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 17988, 10, 40, 0)
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 216, ticks 18006, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 18006, 1, 43, 100)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 217, ticks 18006, elapsed 0, voice: 1 note: 50 velocity 100 event ('note', 18006, 2, 50, 100)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 218, ticks 18006, elapsed 0, voice: 2 note: 55 velocity 100 event ('note', 18006, 2, 55, 100)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 219, ticks 18006, elapsed 0, voice: 3 note: 43 velocity 100 event ('note', 18006, 2, 43, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 220, ticks 18006, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 18006, 3, 50, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 221, ticks 18006, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 18006, 3, 55, 100)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 222, ticks 18006, elapsed 0, voice: 0 note: 67 velocity 100 event ('note', 18006, 3, 67, 100)
	// Note off skipped, note 35 not found in channels, probably interrupted
	14,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 224, ticks 18234, elapsed 14, voice: 3 note: 43 velocity 0 event ('note', 18234, 1, 43, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 226, ticks 18234, elapsed 0, voice: 2 note: 55 velocity 0 event ('note', 18234, 2, 55, 0)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 227, ticks 18234, elapsed 0, voice: 1 note: 50 velocity 0 event ('note', 18234, 2, 50, 0)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 228, ticks 18234, elapsed 0, voice: 0 note: 67 velocity 0 event ('note', 18234, 3, 67, 0)
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 231, ticks 18240, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 18240, 1, 48, 100)
	0,((( 1 &4)<<5)|( 60 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 232, ticks 18240, elapsed 0, voice: 1 note: 60 velocity 100 event ('note', 18240, 2, 60, 100)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 233, ticks 18240, elapsed 0, voice: 2 note: 55 velocity 100 event ('note', 18240, 2, 55, 100)
	0,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 234, ticks 18240, elapsed 0, voice: 3 note: 48 velocity 100 event ('note', 18240, 2, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 235, ticks 18240, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 18240, 3, 60, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 236, ticks 18240, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 18240, 3, 55, 100)
	0,((( 0 &4)<<5)|( 72 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 237, ticks 18240, elapsed 0, voice: 0 note: 72 velocity 100 event ('note', 18240, 3, 72, 100)
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 238, ticks 18240, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 18240, 4, 36, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 239, ticks 18240, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 18240, 10, 35, 100)
	14,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 240, ticks 18468, elapsed 14, voice: 0 note: 35 velocity 0 event ('note', 18468, 10, 35, 0)
	14,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 241, ticks 18696, elapsed 14, voice: 3 note: 48 velocity 0 event ('note', 18696, 1, 48, 0)
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 243, ticks 18696, elapsed 0, voice: 2 note: 55 velocity 0 event ('note', 18696, 2, 55, 0)
	0,((( 1 &4)<<5)|( 60 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 244, ticks 18696, elapsed 0, voice: 1 note: 60 velocity 0 event ('note', 18696, 2, 60, 0)
	// Note off skipped, note 72 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 36 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 249, ticks 18720, elapsed 1, voice: 0 note: 47 velocity 100 event ('note', 18720, 1, 47, 100)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 250, ticks 18720, elapsed 0, voice: 1 note: 59 velocity 100 event ('note', 18720, 2, 59, 100)
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 251, ticks 18720, elapsed 0, voice: 2 note: 54 velocity 100 event ('note', 18720, 2, 54, 100)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 252, ticks 18720, elapsed 0, voice: 3 note: 47 velocity 100 event ('note', 18720, 2, 47, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 253, ticks 18720, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 18720, 3, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 254, ticks 18720, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 18720, 3, 54, 100)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 255, ticks 18720, elapsed 0, voice: 0 note: 71 velocity 100 event ('note', 18720, 3, 71, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 256, ticks 18720, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 18720, 4, 35, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 257, ticks 18720, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 18720, 10, 40, 100)
	14,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 258, ticks 18948, elapsed 14, voice: 0 note: 40 velocity 0 event ('note', 18948, 10, 40, 0)
	14,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 259, ticks 19176, elapsed 14, voice: 3 note: 47 velocity 0 event ('note', 19176, 1, 47, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 261, ticks 19176, elapsed 0, voice: 2 note: 54 velocity 0 event ('note', 19176, 2, 54, 0)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 262, ticks 19176, elapsed 0, voice: 1 note: 59 velocity 0 event ('note', 19176, 2, 59, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 267, ticks 19200, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 19200, 1, 43, 100)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 268, ticks 19200, elapsed 0, voice: 1 note: 55 velocity 100 event ('note', 19200, 2, 55, 100)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 269, ticks 19200, elapsed 0, voice: 2 note: 50 velocity 100 event ('note', 19200, 2, 50, 100)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 270, ticks 19200, elapsed 0, voice: 3 note: 43 velocity 100 event ('note', 19200, 2, 43, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 271, ticks 19200, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 19200, 3, 55, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 272, ticks 19200, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 19200, 3, 50, 100)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 273, ticks 19200, elapsed 0, voice: 0 note: 67 velocity 100 event ('note', 19200, 3, 67, 100)
	0,((( 0 &4)<<5)|( 31 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 274, ticks 19200, elapsed 0, voice: 0 note: 31 velocity 100 event ('note', 19200, 4, 31, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 275, ticks 19200, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 19200, 10, 35, 100)
	14,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 276, ticks 19428, elapsed 14, voice: 0 note: 35 velocity 0 event ('note', 19428, 10, 35, 0)
	14,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 277, ticks 19656, elapsed 14, voice: 3 note: 43 velocity 0 event ('note', 19656, 1, 43, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 279, ticks 19656, elapsed 0, voice: 2 note: 50 velocity 0 event ('note', 19656, 2, 50, 0)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 280, ticks 19656, elapsed 0, voice: 1 note: 55 velocity 0 event ('note', 19656, 2, 55, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 31 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 285, ticks 19680, elapsed 1, voice: 0 note: 47 velocity 100 event ('note', 19680, 1, 47, 100)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 286, ticks 19680, elapsed 0, voice: 1 note: 59 velocity 100 event ('note', 19680, 2, 59, 100)
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 287, ticks 19680, elapsed 0, voice: 2 note: 54 velocity 100 event ('note', 19680, 2, 54, 100)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 288, ticks 19680, elapsed 0, voice: 3 note: 47 velocity 100 event ('note', 19680, 2, 47, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 289, ticks 19680, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 19680, 3, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 290, ticks 19680, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 19680, 3, 54, 100)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 291, ticks 19680, elapsed 0, voice: 0 note: 71 velocity 100 event ('note', 19680, 3, 71, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 292, ticks 19680, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 19680, 4, 35, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 293, ticks 19680, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 19680, 10, 40, 100)
	14,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 294, ticks 19908, elapsed 14, voice: 3 note: 47 velocity 0 event ('note', 19908, 1, 47, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 296, ticks 19908, elapsed 0, voice: 2 note: 54 velocity 0 event ('note', 19908, 2, 54, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 299, ticks 19908, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 19908, 10, 40, 0)
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 300, ticks 19926, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 19926, 1, 43, 100)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 301, ticks 19926, elapsed 0, voice: 2 note: 50 velocity 100 event ('note', 19926, 2, 50, 100)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 302, ticks 19926, elapsed 0, voice: 3 note: 55 velocity 100 event ('note', 19926, 2, 55, 100)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 303, ticks 19926, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 19926, 2, 43, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 304, ticks 19926, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 19926, 3, 50, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 305, ticks 19926, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 19926, 3, 55, 100)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 306, ticks 19926, elapsed 0, voice: 0 note: 67 velocity 100 event ('note', 19926, 3, 67, 100)
	13,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 307, ticks 20136, elapsed 13, voice: 1 note: 59 velocity 0 event ('note', 20136, 2, 59, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	1,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 311, ticks 20154, elapsed 1, voice: 2 note: 50 velocity 0 event ('note', 20154, 2, 50, 0)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 312, ticks 20154, elapsed 0, voice: 3 note: 55 velocity 0 event ('note', 20154, 2, 55, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 316, ticks 20154, elapsed 0, voice: 0 note: 67 velocity 0 event ('note', 20154, 3, 67, 0)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 317, ticks 20160, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 20160, 1, 48, 100)
	0,((( 1 &4)<<5)|( 60 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 318, ticks 20160, elapsed 0, voice: 1 note: 60 velocity 100 event ('note', 20160, 2, 60, 100)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 319, ticks 20160, elapsed 0, voice: 2 note: 55 velocity 100 event ('note', 20160, 2, 55, 100)
	0,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 320, ticks 20160, elapsed 0, voice: 3 note: 48 velocity 100 event ('note', 20160, 2, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 321, ticks 20160, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 20160, 3, 60, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 322, ticks 20160, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 20160, 3, 55, 100)
	0,((( 0 &4)<<5)|( 72 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 323, ticks 20160, elapsed 0, voice: 0 note: 72 velocity 100 event ('note', 20160, 3, 72, 100)
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 324, ticks 20160, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 20160, 4, 36, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 325, ticks 20160, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 20160, 10, 35, 100)
	// Note off skipped, note 36 not found in channels, probably interrupted
	14,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 327, ticks 20388, elapsed 14, voice: 0 note: 35 velocity 0 event ('note', 20388, 10, 35, 0)
	1,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 328, ticks 20406, elapsed 1, voice: 0 note: 36 velocity 100 event ('note', 20406, 4, 36, 100)
	13,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 329, ticks 20616, elapsed 13, voice: 3 note: 48 velocity 0 event ('note', 20616, 1, 48, 0)
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 331, ticks 20616, elapsed 0, voice: 2 note: 55 velocity 0 event ('note', 20616, 2, 55, 0)
	0,((( 1 &4)<<5)|( 60 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 332, ticks 20616, elapsed 0, voice: 1 note: 60 velocity 0 event ('note', 20616, 2, 60, 0)
	// Note off skipped, note 72 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 60 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 336, ticks 20634, elapsed 1, voice: 0 note: 36 velocity 0 event ('note', 20634, 4, 36, 0)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 337, ticks 20640, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 20640, 1, 47, 100)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 338, ticks 20640, elapsed 0, voice: 1 note: 59 velocity 100 event ('note', 20640, 2, 59, 100)
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 339, ticks 20640, elapsed 0, voice: 2 note: 54 velocity 100 event ('note', 20640, 2, 54, 100)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 340, ticks 20640, elapsed 0, voice: 3 note: 47 velocity 100 event ('note', 20640, 2, 47, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 341, ticks 20640, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 20640, 3, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 342, ticks 20640, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 20640, 3, 54, 100)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 343, ticks 20640, elapsed 0, voice: 0 note: 71 velocity 100 event ('note', 20640, 3, 71, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 344, ticks 20640, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 20640, 4, 35, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 345, ticks 20640, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 20640, 10, 40, 100)
	14,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 346, ticks 20868, elapsed 14, voice: 3 note: 47 velocity 0 event ('note', 20868, 1, 47, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 348, ticks 20868, elapsed 0, voice: 2 note: 54 velocity 0 event ('note', 20868, 2, 54, 0)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 349, ticks 20868, elapsed 0, voice: 1 note: 59 velocity 0 event ('note', 20868, 2, 59, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 354, ticks 20868, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 20868, 10, 40, 0)
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 355, ticks 20886, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 20886, 1, 43, 100)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 356, ticks 20886, elapsed 0, voice: 1 note: 55 velocity 100 event ('note', 20886, 2, 55, 100)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 357, ticks 20886, elapsed 0, voice: 2 note: 50 velocity 100 event ('note', 20886, 2, 50, 100)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 358, ticks 20886, elapsed 0, voice: 3 note: 43 velocity 100 event ('note', 20886, 2, 43, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 359, ticks 20886, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 20886, 3, 55, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 360, ticks 20886, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 20886, 3, 50, 100)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 361, ticks 20886, elapsed 0, voice: 0 note: 67 velocity 100 event ('note', 20886, 3, 67, 100)
	0,((( 0 &4)<<5)|( 31 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 362, ticks 20886, elapsed 0, voice: 0 note: 31 velocity 100 event ('note', 20886, 4, 31, 100)
	14,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 363, ticks 21114, elapsed 14, voice: 3 note: 43 velocity 0 event ('note', 21114, 1, 43, 0)
	0,((( 0 &4)<<5)|( 31 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 364, ticks 21114, elapsed 0, voice: 0 note: 31 velocity 0 event ('note', 21114, 4, 31, 0)
	16,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 365, ticks 21366, elapsed 16, voice: 1 note: 55 velocity 0 event ('note', 21366, 2, 55, 0)
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 367, ticks 21366, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 21366, 10, 38, 100)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 368, ticks 21379, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 21379, 10, 40, 100)
	13,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 369, ticks 21594, elapsed 13, voice: 0 note: 38 velocity 0 event ('note', 21594, 10, 38, 0)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 370, ticks 21600, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 21600, 10, 38, 100)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 371, ticks 21607, elapsed 0, voice: 1 note: 40 velocity 0 event ('note', 21607, 10, 40, 0)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 372, ticks 21612, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 21612, 10, 40, 100)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 373, ticks 21613, elapsed 0, voice: 2 note: 50 velocity 0 event ('note', 21613, 2, 50, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	13,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 377, ticks 21828, elapsed 13, voice: 0 note: 38 velocity 0 event ('note', 21828, 10, 38, 0)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 378, ticks 21840, elapsed 0, voice: 1 note: 40 velocity 0 event ('note', 21840, 10, 40, 0)
	31,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 379, ticks 22326, elapsed 31, voice: 0 note: 38 velocity 100 event ('note', 22326, 10, 38, 100)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 380, ticks 22339, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 22339, 10, 40, 100)
	13,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 381, ticks 22554, elapsed 13, voice: 0 note: 38 velocity 0 event ('note', 22554, 10, 38, 0)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 382, ticks 22560, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 22560, 10, 38, 100)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 383, ticks 22567, elapsed 0, voice: 1 note: 40 velocity 0 event ('note', 22567, 10, 40, 0)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 384, ticks 22572, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 22572, 10, 40, 100)
	13,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 385, ticks 22788, elapsed 13, voice: 0 note: 38 velocity 0 event ('note', 22788, 10, 38, 0)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 386, ticks 22800, elapsed 0, voice: 1 note: 40 velocity 0 event ('note', 22800, 10, 40, 0)
	15,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 387, ticks 23040, elapsed 15, voice: 0 note: 43 velocity 100 event ('note', 23040, 1, 43, 100)
	0,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 388, ticks 23040, elapsed 0, voice: 1 note: 43 velocity 100 event ('note', 23040, 2, 43, 100)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 389, ticks 23040, elapsed 0, voice: 2 note: 55 velocity 100 event ('note', 23040, 2, 55, 100)
	0,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 390, ticks 23040, elapsed 0, voice: 3 note: 50 velocity 100 event ('note', 23040, 2, 50, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 391, ticks 23040, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 23040, 3, 50, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 392, ticks 23040, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 23040, 3, 55, 100)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 393, ticks 23040, elapsed 0, voice: 0 note: 67 velocity 100 event ('note', 23040, 3, 67, 100)
	0,((( 0 &4)<<5)|( 31 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 394, ticks 23040, elapsed 0, voice: 0 note: 31 velocity 100 event ('note', 23040, 4, 31, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 395, ticks 23040, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 23040, 10, 35, 100)
	14,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 396, ticks 23268, elapsed 14, voice: 0 note: 35 velocity 0 event ('note', 23268, 10, 35, 0)
	14,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 397, ticks 23496, elapsed 14, voice: 1 note: 43 velocity 0 event ('note', 23496, 1, 43, 0)
	0,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 398, ticks 23496, elapsed 0, voice: 3 note: 50 velocity 0 event ('note', 23496, 2, 50, 0)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 399, ticks 23496, elapsed 0, voice: 2 note: 55 velocity 0 event ('note', 23496, 2, 55, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 31 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 405, ticks 23520, elapsed 1, voice: 0 note: 47 velocity 100 event ('note', 23520, 1, 47, 100)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 406, ticks 23520, elapsed 0, voice: 1 note: 59 velocity 100 event ('note', 23520, 2, 59, 100)
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 407, ticks 23520, elapsed 0, voice: 2 note: 54 velocity 100 event ('note', 23520, 2, 54, 100)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 408, ticks 23520, elapsed 0, voice: 3 note: 47 velocity 100 event ('note', 23520, 2, 47, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 409, ticks 23520, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 23520, 3, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 410, ticks 23520, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 23520, 3, 54, 100)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 411, ticks 23520, elapsed 0, voice: 0 note: 71 velocity 100 event ('note', 23520, 3, 71, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 412, ticks 23520, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 23520, 4, 35, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 413, ticks 23520, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 23520, 10, 40, 100)
	14,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 414, ticks 23748, elapsed 14, voice: 3 note: 47 velocity 0 event ('note', 23748, 1, 47, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 416, ticks 23748, elapsed 0, voice: 2 note: 54 velocity 0 event ('note', 23748, 2, 54, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 419, ticks 23748, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 23748, 10, 40, 0)
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 420, ticks 23766, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 23766, 1, 43, 100)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 421, ticks 23766, elapsed 0, voice: 2 note: 50 velocity 100 event ('note', 23766, 2, 50, 100)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 422, ticks 23766, elapsed 0, voice: 3 note: 43 velocity 100 event ('note', 23766, 2, 43, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 423, ticks 23766, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 23766, 3, 50, 100)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 424, ticks 23766, elapsed 0, voice: 0 note: 67 velocity 100 event ('note', 23766, 3, 67, 100)
	13,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 425, ticks 23976, elapsed 13, voice: 1 note: 59 velocity 0 event ('note', 23976, 2, 59, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	1,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 428, ticks 23994, elapsed 1, voice: 3 note: 43 velocity 0 event ('note', 23994, 1, 43, 0)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 429, ticks 23994, elapsed 0, voice: 2 note: 50 velocity 0 event ('note', 23994, 2, 50, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 432, ticks 23994, elapsed 0, voice: 0 note: 67 velocity 0 event ('note', 23994, 3, 67, 0)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 433, ticks 24000, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 24000, 1, 48, 100)
	0,((( 1 &4)<<5)|( 60 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 434, ticks 24000, elapsed 0, voice: 1 note: 60 velocity 100 event ('note', 24000, 2, 60, 100)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 435, ticks 24000, elapsed 0, voice: 2 note: 55 velocity 100 event ('note', 24000, 2, 55, 100)
	0,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 436, ticks 24000, elapsed 0, voice: 3 note: 48 velocity 100 event ('note', 24000, 2, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 437, ticks 24000, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 24000, 3, 60, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 438, ticks 24000, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 24000, 3, 55, 100)
	0,((( 0 &4)<<5)|( 72 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 439, ticks 24000, elapsed 0, voice: 0 note: 72 velocity 100 event ('note', 24000, 3, 72, 100)
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 440, ticks 24000, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 24000, 4, 36, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 441, ticks 24000, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 24000, 10, 35, 100)
	14,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 442, ticks 24228, elapsed 14, voice: 0 note: 35 velocity 0 event ('note', 24228, 10, 35, 0)
	14,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 443, ticks 24456, elapsed 14, voice: 3 note: 48 velocity 0 event ('note', 24456, 1, 48, 0)
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 445, ticks 24456, elapsed 0, voice: 2 note: 55 velocity 0 event ('note', 24456, 2, 55, 0)
	0,((( 1 &4)<<5)|( 60 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 446, ticks 24456, elapsed 0, voice: 1 note: 60 velocity 0 event ('note', 24456, 2, 60, 0)
	// Note off skipped, note 72 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 36 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 451, ticks 24480, elapsed 1, voice: 0 note: 47 velocity 100 event ('note', 24480, 1, 47, 100)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 452, ticks 24480, elapsed 0, voice: 1 note: 59 velocity 100 event ('note', 24480, 2, 59, 100)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 453, ticks 24480, elapsed 0, voice: 2 note: 47 velocity 100 event ('note', 24480, 2, 47, 100)
	0,((( 3 &4)<<5)|( 54 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 454, ticks 24480, elapsed 0, voice: 3 note: 54 velocity 100 event ('note', 24480, 2, 54, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 455, ticks 24480, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 24480, 3, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 456, ticks 24480, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 24480, 3, 54, 100)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 457, ticks 24480, elapsed 0, voice: 0 note: 71 velocity 100 event ('note', 24480, 3, 71, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 458, ticks 24480, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 24480, 4, 35, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 459, ticks 24480, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 24480, 10, 40, 100)
	14,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 460, ticks 24708, elapsed 14, voice: 2 note: 47 velocity 0 event ('note', 24708, 1, 47, 0)
	0,((( 3 &4)<<5)|( 54 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 461, ticks 24708, elapsed 0, voice: 3 note: 54 velocity 0 event ('note', 24708, 2, 54, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 463, ticks 24708, elapsed 0, voice: 1 note: 59 velocity 0 event ('note', 24708, 2, 59, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 468, ticks 24708, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 24708, 10, 40, 0)
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 469, ticks 24726, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 24726, 1, 43, 100)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 470, ticks 24726, elapsed 0, voice: 1 note: 55 velocity 100 event ('note', 24726, 2, 55, 100)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 471, ticks 24726, elapsed 0, voice: 2 note: 50 velocity 100 event ('note', 24726, 2, 50, 100)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 472, ticks 24726, elapsed 0, voice: 3 note: 43 velocity 100 event ('note', 24726, 2, 43, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 473, ticks 24726, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 24726, 3, 55, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 474, ticks 24726, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 24726, 3, 50, 100)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 475, ticks 24726, elapsed 0, voice: 0 note: 67 velocity 100 event ('note', 24726, 3, 67, 100)
	0,((( 0 &4)<<5)|( 31 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 476, ticks 24726, elapsed 0, voice: 0 note: 31 velocity 100 event ('note', 24726, 4, 31, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 477, ticks 24726, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 24726, 10, 40, 100)
	14,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 478, ticks 24954, elapsed 14, voice: 0 note: 40 velocity 0 event ('note', 24954, 10, 40, 0)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 479, ticks 24960, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 24960, 10, 35, 100)
	14,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 480, ticks 25182, elapsed 14, voice: 3 note: 43 velocity 0 event ('note', 25182, 1, 43, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 482, ticks 25182, elapsed 0, voice: 2 note: 50 velocity 0 event ('note', 25182, 2, 50, 0)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 483, ticks 25182, elapsed 0, voice: 1 note: 55 velocity 0 event ('note', 25182, 2, 55, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 487, ticks 25188, elapsed 0, voice: 0 note: 35 velocity 0 event ('note', 25188, 10, 35, 0)
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 488, ticks 25206, elapsed 1, voice: 0 note: 47 velocity 100 event ('note', 25206, 1, 47, 100)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 489, ticks 25206, elapsed 0, voice: 1 note: 59 velocity 100 event ('note', 25206, 2, 59, 100)
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 490, ticks 25206, elapsed 0, voice: 2 note: 54 velocity 100 event ('note', 25206, 2, 54, 100)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 491, ticks 25206, elapsed 0, voice: 3 note: 47 velocity 100 event ('note', 25206, 2, 47, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 492, ticks 25206, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 25206, 3, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 493, ticks 25206, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 25206, 3, 54, 100)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 494, ticks 25206, elapsed 0, voice: 0 note: 71 velocity 100 event ('note', 25206, 3, 71, 100)
	14,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 495, ticks 25440, elapsed 14, voice: 0 note: 35 velocity 100 event ('note', 25440, 4, 35, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 496, ticks 25440, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 25440, 10, 40, 100)
	// Note off skipped, note 31 not found in channels, probably interrupted
	14,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 498, ticks 25662, elapsed 14, voice: 3 note: 47 velocity 0 event ('note', 25662, 1, 47, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 500, ticks 25662, elapsed 0, voice: 2 note: 54 velocity 0 event ('note', 25662, 2, 54, 0)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 501, ticks 25662, elapsed 0, voice: 1 note: 59 velocity 0 event ('note', 25662, 2, 59, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 505, ticks 25668, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 25668, 10, 40, 0)
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 506, ticks 25686, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 25686, 1, 43, 100)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 507, ticks 25686, elapsed 0, voice: 1 note: 50 velocity 100 event ('note', 25686, 2, 50, 100)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 508, ticks 25686, elapsed 0, voice: 2 note: 55 velocity 100 event ('note', 25686, 2, 55, 100)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 509, ticks 25686, elapsed 0, voice: 3 note: 43 velocity 100 event ('note', 25686, 2, 43, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 510, ticks 25686, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 25686, 3, 50, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 511, ticks 25686, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 25686, 3, 55, 100)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 512, ticks 25686, elapsed 0, voice: 0 note: 67 velocity 100 event ('note', 25686, 3, 67, 100)
	// Note off skipped, note 35 not found in channels, probably interrupted
	14,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 514, ticks 25914, elapsed 14, voice: 3 note: 43 velocity 0 event ('note', 25914, 1, 43, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 516, ticks 25914, elapsed 0, voice: 2 note: 55 velocity 0 event ('note', 25914, 2, 55, 0)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 517, ticks 25914, elapsed 0, voice: 1 note: 50 velocity 0 event ('note', 25914, 2, 50, 0)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 518, ticks 25914, elapsed 0, voice: 0 note: 67 velocity 0 event ('note', 25914, 3, 67, 0)
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 521, ticks 25920, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 25920, 1, 48, 100)
	0,((( 1 &4)<<5)|( 60 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 522, ticks 25920, elapsed 0, voice: 1 note: 60 velocity 100 event ('note', 25920, 2, 60, 100)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 523, ticks 25920, elapsed 0, voice: 2 note: 55 velocity 100 event ('note', 25920, 2, 55, 100)
	0,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 524, ticks 25920, elapsed 0, voice: 3 note: 48 velocity 100 event ('note', 25920, 2, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 525, ticks 25920, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 25920, 3, 60, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 526, ticks 25920, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 25920, 3, 55, 100)
	0,((( 0 &4)<<5)|( 72 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 527, ticks 25920, elapsed 0, voice: 0 note: 72 velocity 100 event ('note', 25920, 3, 72, 100)
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 528, ticks 25920, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 25920, 4, 36, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 529, ticks 25920, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 25920, 10, 35, 100)
	14,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 530, ticks 26148, elapsed 14, voice: 0 note: 35 velocity 0 event ('note', 26148, 10, 35, 0)
	14,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 531, ticks 26376, elapsed 14, voice: 3 note: 48 velocity 0 event ('note', 26376, 1, 48, 0)
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 533, ticks 26376, elapsed 0, voice: 2 note: 55 velocity 0 event ('note', 26376, 2, 55, 0)
	0,((( 1 &4)<<5)|( 60 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 534, ticks 26376, elapsed 0, voice: 1 note: 60 velocity 0 event ('note', 26376, 2, 60, 0)
	// Note off skipped, note 72 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 36 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 539, ticks 26400, elapsed 1, voice: 0 note: 47 velocity 100 event ('note', 26400, 1, 47, 100)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 540, ticks 26400, elapsed 0, voice: 1 note: 59 velocity 100 event ('note', 26400, 2, 59, 100)
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 541, ticks 26400, elapsed 0, voice: 2 note: 54 velocity 100 event ('note', 26400, 2, 54, 100)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 542, ticks 26400, elapsed 0, voice: 3 note: 47 velocity 100 event ('note', 26400, 2, 47, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 543, ticks 26400, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 26400, 3, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 544, ticks 26400, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 26400, 3, 54, 100)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 545, ticks 26400, elapsed 0, voice: 0 note: 71 velocity 100 event ('note', 26400, 3, 71, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 546, ticks 26400, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 26400, 4, 35, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 547, ticks 26400, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 26400, 10, 40, 100)
	14,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 548, ticks 26628, elapsed 14, voice: 0 note: 40 velocity 0 event ('note', 26628, 10, 40, 0)
	14,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 549, ticks 26856, elapsed 14, voice: 3 note: 47 velocity 0 event ('note', 26856, 1, 47, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 551, ticks 26856, elapsed 0, voice: 2 note: 54 velocity 0 event ('note', 26856, 2, 54, 0)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 552, ticks 26856, elapsed 0, voice: 1 note: 59 velocity 0 event ('note', 26856, 2, 59, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 557, ticks 26880, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 26880, 1, 43, 100)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 558, ticks 26880, elapsed 0, voice: 1 note: 55 velocity 100 event ('note', 26880, 2, 55, 100)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 559, ticks 26880, elapsed 0, voice: 2 note: 50 velocity 100 event ('note', 26880, 2, 50, 100)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 560, ticks 26880, elapsed 0, voice: 3 note: 43 velocity 100 event ('note', 26880, 2, 43, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 561, ticks 26880, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 26880, 3, 55, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 562, ticks 26880, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 26880, 3, 50, 100)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 563, ticks 26880, elapsed 0, voice: 0 note: 67 velocity 100 event ('note', 26880, 3, 67, 100)
	0,((( 0 &4)<<5)|( 31 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 564, ticks 26880, elapsed 0, voice: 0 note: 31 velocity 100 event ('note', 26880, 4, 31, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 565, ticks 26880, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 26880, 10, 35, 100)
	14,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 566, ticks 27108, elapsed 14, voice: 0 note: 35 velocity 0 event ('note', 27108, 10, 35, 0)
	14,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 567, ticks 27336, elapsed 14, voice: 3 note: 43 velocity 0 event ('note', 27336, 1, 43, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 569, ticks 27336, elapsed 0, voice: 2 note: 50 velocity 0 event ('note', 27336, 2, 50, 0)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 570, ticks 27336, elapsed 0, voice: 1 note: 55 velocity 0 event ('note', 27336, 2, 55, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 31 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 575, ticks 27360, elapsed 1, voice: 0 note: 47 velocity 100 event ('note', 27360, 1, 47, 100)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 576, ticks 27360, elapsed 0, voice: 1 note: 59 velocity 100 event ('note', 27360, 2, 59, 100)
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 577, ticks 27360, elapsed 0, voice: 2 note: 54 velocity 100 event ('note', 27360, 2, 54, 100)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 578, ticks 27360, elapsed 0, voice: 3 note: 47 velocity 100 event ('note', 27360, 2, 47, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 579, ticks 27360, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 27360, 3, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 580, ticks 27360, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 27360, 3, 54, 100)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 581, ticks 27360, elapsed 0, voice: 0 note: 71 velocity 100 event ('note', 27360, 3, 71, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 582, ticks 27360, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 27360, 4, 35, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 583, ticks 27360, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 27360, 10, 40, 100)
	14,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 584, ticks 27588, elapsed 14, voice: 3 note: 47 velocity 0 event ('note', 27588, 1, 47, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 586, ticks 27588, elapsed 0, voice: 2 note: 54 velocity 0 event ('note', 27588, 2, 54, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 589, ticks 27588, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 27588, 10, 40, 0)
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 590, ticks 27606, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 27606, 1, 43, 100)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 591, ticks 27606, elapsed 0, voice: 2 note: 50 velocity 100 event ('note', 27606, 2, 50, 100)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 592, ticks 27606, elapsed 0, voice: 3 note: 55 velocity 100 event ('note', 27606, 2, 55, 100)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 593, ticks 27606, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 27606, 2, 43, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 594, ticks 27606, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 27606, 3, 50, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 595, ticks 27606, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 27606, 3, 55, 100)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 596, ticks 27606, elapsed 0, voice: 0 note: 67 velocity 100 event ('note', 27606, 3, 67, 100)
	13,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 597, ticks 27816, elapsed 13, voice: 1 note: 59 velocity 0 event ('note', 27816, 2, 59, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	1,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 601, ticks 27834, elapsed 1, voice: 2 note: 50 velocity 0 event ('note', 27834, 2, 50, 0)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 602, ticks 27834, elapsed 0, voice: 3 note: 55 velocity 0 event ('note', 27834, 2, 55, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 606, ticks 27834, elapsed 0, voice: 0 note: 67 velocity 0 event ('note', 27834, 3, 67, 0)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 607, ticks 27840, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 27840, 1, 48, 100)
	0,((( 1 &4)<<5)|( 60 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 608, ticks 27840, elapsed 0, voice: 1 note: 60 velocity 100 event ('note', 27840, 2, 60, 100)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 609, ticks 27840, elapsed 0, voice: 2 note: 55 velocity 100 event ('note', 27840, 2, 55, 100)
	0,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 610, ticks 27840, elapsed 0, voice: 3 note: 48 velocity 100 event ('note', 27840, 2, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 611, ticks 27840, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 27840, 3, 60, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 612, ticks 27840, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 27840, 3, 55, 100)
	0,((( 0 &4)<<5)|( 72 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 613, ticks 27840, elapsed 0, voice: 0 note: 72 velocity 100 event ('note', 27840, 3, 72, 100)
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 614, ticks 27840, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 27840, 4, 36, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 615, ticks 27840, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 27840, 10, 35, 100)
	// Note off skipped, note 36 not found in channels, probably interrupted
	14,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 617, ticks 28068, elapsed 14, voice: 0 note: 35 velocity 0 event ('note', 28068, 10, 35, 0)
	1,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 618, ticks 28086, elapsed 1, voice: 0 note: 36 velocity 100 event ('note', 28086, 4, 36, 100)
	13,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 619, ticks 28296, elapsed 13, voice: 3 note: 48 velocity 0 event ('note', 28296, 1, 48, 0)
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 621, ticks 28296, elapsed 0, voice: 2 note: 55 velocity 0 event ('note', 28296, 2, 55, 0)
	0,((( 1 &4)<<5)|( 60 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 622, ticks 28296, elapsed 0, voice: 1 note: 60 velocity 0 event ('note', 28296, 2, 60, 0)
	// Note off skipped, note 72 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 60 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 626, ticks 28314, elapsed 1, voice: 0 note: 36 velocity 0 event ('note', 28314, 4, 36, 0)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 627, ticks 28320, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 28320, 1, 47, 100)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 628, ticks 28320, elapsed 0, voice: 1 note: 59 velocity 100 event ('note', 28320, 2, 59, 100)
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 629, ticks 28320, elapsed 0, voice: 2 note: 54 velocity 100 event ('note', 28320, 2, 54, 100)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 630, ticks 28320, elapsed 0, voice: 3 note: 47 velocity 100 event ('note', 28320, 2, 47, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 631, ticks 28320, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 28320, 3, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 632, ticks 28320, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 28320, 3, 54, 100)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 633, ticks 28320, elapsed 0, voice: 0 note: 71 velocity 100 event ('note', 28320, 3, 71, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 634, ticks 28320, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 28320, 4, 35, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 635, ticks 28320, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 28320, 10, 40, 100)
	14,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 636, ticks 28548, elapsed 14, voice: 3 note: 47 velocity 0 event ('note', 28548, 1, 47, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 638, ticks 28548, elapsed 0, voice: 2 note: 54 velocity 0 event ('note', 28548, 2, 54, 0)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 639, ticks 28548, elapsed 0, voice: 1 note: 59 velocity 0 event ('note', 28548, 2, 59, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 644, ticks 28548, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 28548, 10, 40, 0)
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 645, ticks 28566, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 28566, 1, 43, 100)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 646, ticks 28566, elapsed 0, voice: 1 note: 55 velocity 100 event ('note', 28566, 2, 55, 100)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 647, ticks 28566, elapsed 0, voice: 2 note: 50 velocity 100 event ('note', 28566, 2, 50, 100)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 648, ticks 28566, elapsed 0, voice: 3 note: 43 velocity 100 event ('note', 28566, 2, 43, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 649, ticks 28566, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 28566, 3, 55, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 650, ticks 28566, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 28566, 3, 50, 100)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 651, ticks 28566, elapsed 0, voice: 0 note: 67 velocity 100 event ('note', 28566, 3, 67, 100)
	0,((( 0 &4)<<5)|( 31 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 652, ticks 28566, elapsed 0, voice: 0 note: 31 velocity 100 event ('note', 28566, 4, 31, 100)
	14,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 653, ticks 28794, elapsed 14, voice: 3 note: 43 velocity 0 event ('note', 28794, 1, 43, 0)
	0,((( 0 &4)<<5)|( 31 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 654, ticks 28794, elapsed 0, voice: 0 note: 31 velocity 0 event ('note', 28794, 4, 31, 0)
	16,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 655, ticks 29046, elapsed 16, voice: 1 note: 55 velocity 0 event ('note', 29046, 2, 55, 0)
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 657, ticks 29046, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 29046, 10, 38, 100)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 658, ticks 29059, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 29059, 10, 40, 100)
	13,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 659, ticks 29274, elapsed 13, voice: 0 note: 38 velocity 0 event ('note', 29274, 10, 38, 0)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 660, ticks 29280, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 29280, 10, 38, 100)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 661, ticks 29287, elapsed 0, voice: 1 note: 40 velocity 0 event ('note', 29287, 10, 40, 0)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 662, ticks 29292, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 29292, 10, 40, 100)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 663, ticks 29293, elapsed 0, voice: 2 note: 50 velocity 0 event ('note', 29293, 2, 50, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	13,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 667, ticks 29508, elapsed 13, voice: 0 note: 38 velocity 0 event ('note', 29508, 10, 38, 0)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 668, ticks 29520, elapsed 0, voice: 1 note: 40 velocity 0 event ('note', 29520, 10, 40, 0)
	31,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 669, ticks 30006, elapsed 31, voice: 0 note: 38 velocity 100 event ('note', 30006, 10, 38, 100)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 670, ticks 30019, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 30019, 10, 40, 100)
	13,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 671, ticks 30234, elapsed 13, voice: 0 note: 38 velocity 0 event ('note', 30234, 10, 38, 0)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 672, ticks 30240, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 30240, 10, 38, 100)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 673, ticks 30247, elapsed 0, voice: 1 note: 40 velocity 0 event ('note', 30247, 10, 40, 0)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 674, ticks 30252, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 30252, 10, 40, 100)
	13,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 675, ticks 30468, elapsed 13, voice: 0 note: 38 velocity 0 event ('note', 30468, 10, 38, 0)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 676, ticks 30480, elapsed 0, voice: 1 note: 40 velocity 0 event ('note', 30480, 10, 40, 0)
	15,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 677, ticks 30720, elapsed 15, voice: 0 note: 43 velocity 100 event ('note', 30720, 1, 43, 100)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 678, ticks 30720, elapsed 0, voice: 1 note: 50 velocity 100 event ('note', 30720, 2, 50, 100)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 679, ticks 30720, elapsed 0, voice: 2 note: 55 velocity 100 event ('note', 30720, 2, 55, 100)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 680, ticks 30720, elapsed 0, voice: 3 note: 43 velocity 100 event ('note', 30720, 2, 43, 100)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 681, ticks 30720, elapsed 0, voice: 0 note: 67 velocity 100 event ('note', 30720, 3, 67, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 682, ticks 30720, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 30720, 3, 55, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 683, ticks 30720, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 30720, 3, 50, 100)
	0,((( 0 &4)<<5)|( 31 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 684, ticks 30720, elapsed 0, voice: 0 note: 31 velocity 100 event ('note', 30720, 4, 31, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 685, ticks 30720, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 30720, 5, 55, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 686, ticks 30720, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 30720, 10, 35, 100)
	14,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 687, ticks 30948, elapsed 14, voice: 0 note: 35 velocity 0 event ('note', 30948, 10, 35, 0)
	14,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 688, ticks 31176, elapsed 14, voice: 3 note: 43 velocity 0 event ('note', 31176, 1, 43, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 690, ticks 31176, elapsed 0, voice: 2 note: 55 velocity 0 event ('note', 31176, 2, 55, 0)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 691, ticks 31176, elapsed 0, voice: 1 note: 50 velocity 0 event ('note', 31176, 2, 50, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 31 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 697, ticks 31200, elapsed 1, voice: 0 note: 47 velocity 100 event ('note', 31200, 1, 47, 100)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 698, ticks 31200, elapsed 0, voice: 1 note: 59 velocity 100 event ('note', 31200, 2, 59, 100)
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 699, ticks 31200, elapsed 0, voice: 2 note: 54 velocity 100 event ('note', 31200, 2, 54, 100)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 700, ticks 31200, elapsed 0, voice: 3 note: 47 velocity 100 event ('note', 31200, 2, 47, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 701, ticks 31200, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 31200, 3, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 702, ticks 31200, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 31200, 3, 54, 100)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 703, ticks 31200, elapsed 0, voice: 0 note: 71 velocity 100 event ('note', 31200, 3, 71, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 704, ticks 31200, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 31200, 4, 35, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 705, ticks 31200, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 31200, 5, 59, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 706, ticks 31200, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 31200, 10, 40, 100)
	7,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 707, ticks 31314, elapsed 7, voice: 1 note: 59 velocity 0 event ('note', 31314, 5, 59, 0)
	7,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 708, ticks 31428, elapsed 7, voice: 3 note: 47 velocity 0 event ('note', 31428, 1, 47, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 710, ticks 31428, elapsed 0, voice: 2 note: 54 velocity 0 event ('note', 31428, 2, 54, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 713, ticks 31428, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 31428, 10, 40, 0)
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 714, ticks 31446, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 31446, 1, 43, 100)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 715, ticks 31446, elapsed 0, voice: 1 note: 50 velocity 100 event ('note', 31446, 2, 50, 100)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 716, ticks 31446, elapsed 0, voice: 2 note: 43 velocity 100 event ('note', 31446, 2, 43, 100)
	0,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 717, ticks 31446, elapsed 0, voice: 3 note: 50 velocity 100 event ('note', 31446, 3, 50, 100)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 718, ticks 31446, elapsed 0, voice: 0 note: 67 velocity 100 event ('note', 31446, 3, 67, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 719, ticks 31446, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 31446, 5, 59, 100)
	13,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 720, ticks 31656, elapsed 13, voice: 0 note: 59 velocity 0 event ('note', 31656, 2, 59, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	1,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 723, ticks 31674, elapsed 1, voice: 2 note: 43 velocity 0 event ('note', 31674, 1, 43, 0)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 724, ticks 31674, elapsed 0, voice: 1 note: 50 velocity 0 event ('note', 31674, 2, 50, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 726, ticks 31674, elapsed 0, voice: 3 note: 50 velocity 0 event ('note', 31674, 3, 50, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 729, ticks 31680, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 31680, 1, 48, 100)
	0,((( 1 &4)<<5)|( 60 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 730, ticks 31680, elapsed 0, voice: 1 note: 60 velocity 100 event ('note', 31680, 2, 60, 100)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 731, ticks 31680, elapsed 0, voice: 2 note: 55 velocity 100 event ('note', 31680, 2, 55, 100)
	0,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 732, ticks 31680, elapsed 0, voice: 3 note: 48 velocity 100 event ('note', 31680, 2, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 733, ticks 31680, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 31680, 3, 60, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 734, ticks 31680, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 31680, 3, 55, 100)
	0,((( 0 &4)<<5)|( 72 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 735, ticks 31680, elapsed 0, voice: 0 note: 72 velocity 100 event ('note', 31680, 3, 72, 100)
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 736, ticks 31680, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 31680, 4, 36, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 737, ticks 31680, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 31680, 5, 60, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 738, ticks 31680, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 31680, 10, 35, 100)
	14,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 739, ticks 31908, elapsed 14, voice: 0 note: 35 velocity 0 event ('note', 31908, 10, 35, 0)
	14,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 740, ticks 32136, elapsed 14, voice: 3 note: 48 velocity 0 event ('note', 32136, 1, 48, 0)
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 742, ticks 32136, elapsed 0, voice: 2 note: 55 velocity 0 event ('note', 32136, 2, 55, 0)
	0,((( 1 &4)<<5)|( 60 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 743, ticks 32136, elapsed 0, voice: 1 note: 60 velocity 0 event ('note', 32136, 2, 60, 0)
	// Note off skipped, note 72 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 36 not found in channels, probably interrupted
	// Note off skipped, note 60 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 749, ticks 32160, elapsed 1, voice: 0 note: 47 velocity 100 event ('note', 32160, 1, 47, 100)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 750, ticks 32160, elapsed 0, voice: 1 note: 59 velocity 100 event ('note', 32160, 2, 59, 100)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 751, ticks 32160, elapsed 0, voice: 2 note: 47 velocity 100 event ('note', 32160, 2, 47, 100)
	0,((( 3 &4)<<5)|( 54 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 752, ticks 32160, elapsed 0, voice: 3 note: 54 velocity 100 event ('note', 32160, 2, 54, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 753, ticks 32160, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 32160, 3, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 754, ticks 32160, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 32160, 3, 54, 100)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 755, ticks 32160, elapsed 0, voice: 0 note: 71 velocity 100 event ('note', 32160, 3, 71, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 756, ticks 32160, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 32160, 4, 35, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 757, ticks 32160, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 32160, 5, 59, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 758, ticks 32160, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 32160, 10, 40, 100)
	14,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 759, ticks 32388, elapsed 14, voice: 2 note: 47 velocity 0 event ('note', 32388, 1, 47, 0)
	0,((( 3 &4)<<5)|( 54 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 760, ticks 32388, elapsed 0, voice: 3 note: 54 velocity 0 event ('note', 32388, 2, 54, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 762, ticks 32388, elapsed 0, voice: 1 note: 59 velocity 0 event ('note', 32388, 2, 59, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 768, ticks 32388, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 32388, 10, 40, 0)
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 769, ticks 32406, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 32406, 1, 43, 100)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 770, ticks 32406, elapsed 0, voice: 1 note: 55 velocity 100 event ('note', 32406, 2, 55, 100)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 771, ticks 32406, elapsed 0, voice: 2 note: 50 velocity 100 event ('note', 32406, 2, 50, 100)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 772, ticks 32406, elapsed 0, voice: 3 note: 43 velocity 100 event ('note', 32406, 2, 43, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 773, ticks 32406, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 32406, 3, 55, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 774, ticks 32406, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 32406, 3, 50, 100)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 775, ticks 32406, elapsed 0, voice: 0 note: 67 velocity 100 event ('note', 32406, 3, 67, 100)
	0,((( 0 &4)<<5)|( 31 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 776, ticks 32406, elapsed 0, voice: 0 note: 31 velocity 100 event ('note', 32406, 4, 31, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 777, ticks 32406, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 32406, 5, 55, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 778, ticks 32406, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 32406, 10, 40, 100)
	14,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 779, ticks 32634, elapsed 14, voice: 0 note: 40 velocity 0 event ('note', 32634, 10, 40, 0)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 780, ticks 32640, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 32640, 10, 35, 100)
	14,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 781, ticks 32862, elapsed 14, voice: 3 note: 43 velocity 0 event ('note', 32862, 1, 43, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 783, ticks 32862, elapsed 0, voice: 2 note: 50 velocity 0 event ('note', 32862, 2, 50, 0)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 784, ticks 32862, elapsed 0, voice: 1 note: 55 velocity 0 event ('note', 32862, 2, 55, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 789, ticks 32868, elapsed 0, voice: 0 note: 35 velocity 0 event ('note', 32868, 10, 35, 0)
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 790, ticks 32886, elapsed 1, voice: 0 note: 47 velocity 100 event ('note', 32886, 1, 47, 100)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 791, ticks 32886, elapsed 0, voice: 1 note: 59 velocity 100 event ('note', 32886, 2, 59, 100)
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 792, ticks 32886, elapsed 0, voice: 2 note: 54 velocity 100 event ('note', 32886, 2, 54, 100)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 793, ticks 32886, elapsed 0, voice: 3 note: 47 velocity 100 event ('note', 32886, 2, 47, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 794, ticks 32886, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 32886, 3, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 795, ticks 32886, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 32886, 3, 54, 100)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 796, ticks 32886, elapsed 0, voice: 0 note: 71 velocity 100 event ('note', 32886, 3, 71, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 797, ticks 32886, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 32886, 5, 59, 100)
	14,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 798, ticks 33120, elapsed 14, voice: 0 note: 35 velocity 100 event ('note', 33120, 4, 35, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 799, ticks 33120, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 33120, 10, 40, 100)
	// Note off skipped, note 31 not found in channels, probably interrupted
	14,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 801, ticks 33342, elapsed 14, voice: 3 note: 47 velocity 0 event ('note', 33342, 1, 47, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 803, ticks 33342, elapsed 0, voice: 2 note: 54 velocity 0 event ('note', 33342, 2, 54, 0)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 804, ticks 33342, elapsed 0, voice: 1 note: 59 velocity 0 event ('note', 33342, 2, 59, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 809, ticks 33348, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 33348, 10, 40, 0)
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 810, ticks 33366, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 33366, 1, 43, 100)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 811, ticks 33366, elapsed 0, voice: 1 note: 50 velocity 100 event ('note', 33366, 2, 50, 100)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 812, ticks 33366, elapsed 0, voice: 2 note: 55 velocity 100 event ('note', 33366, 2, 55, 100)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 813, ticks 33366, elapsed 0, voice: 3 note: 43 velocity 100 event ('note', 33366, 2, 43, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 814, ticks 33366, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 33366, 3, 50, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 815, ticks 33366, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 33366, 3, 55, 100)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 816, ticks 33366, elapsed 0, voice: 0 note: 67 velocity 100 event ('note', 33366, 3, 67, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 817, ticks 33366, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 33366, 5, 55, 100)
	// Note off skipped, note 35 not found in channels, probably interrupted
	14,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 819, ticks 33594, elapsed 14, voice: 3 note: 43 velocity 0 event ('note', 33594, 1, 43, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 821, ticks 33594, elapsed 0, voice: 0 note: 55 velocity 0 event ('note', 33594, 2, 55, 0)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 822, ticks 33594, elapsed 0, voice: 1 note: 50 velocity 0 event ('note', 33594, 2, 50, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 824, ticks 33594, elapsed 0, voice: 2 note: 55 velocity 0 event ('note', 33594, 3, 55, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 827, ticks 33600, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 33600, 1, 48, 100)
	0,((( 1 &4)<<5)|( 60 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 828, ticks 33600, elapsed 0, voice: 1 note: 60 velocity 100 event ('note', 33600, 2, 60, 100)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 829, ticks 33600, elapsed 0, voice: 2 note: 55 velocity 100 event ('note', 33600, 2, 55, 100)
	0,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 830, ticks 33600, elapsed 0, voice: 3 note: 48 velocity 100 event ('note', 33600, 2, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 831, ticks 33600, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 33600, 3, 60, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 832, ticks 33600, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 33600, 3, 55, 100)
	0,((( 0 &4)<<5)|( 72 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 833, ticks 33600, elapsed 0, voice: 0 note: 72 velocity 100 event ('note', 33600, 3, 72, 100)
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 834, ticks 33600, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 33600, 4, 36, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 835, ticks 33600, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 33600, 5, 60, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 836, ticks 33600, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 33600, 10, 35, 100)
	14,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 837, ticks 33828, elapsed 14, voice: 0 note: 35 velocity 0 event ('note', 33828, 10, 35, 0)
	14,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 838, ticks 34056, elapsed 14, voice: 3 note: 48 velocity 0 event ('note', 34056, 1, 48, 0)
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 840, ticks 34056, elapsed 0, voice: 2 note: 55 velocity 0 event ('note', 34056, 2, 55, 0)
	0,((( 1 &4)<<5)|( 60 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 841, ticks 34056, elapsed 0, voice: 1 note: 60 velocity 0 event ('note', 34056, 2, 60, 0)
	// Note off skipped, note 72 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 36 not found in channels, probably interrupted
	// Note off skipped, note 60 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 847, ticks 34080, elapsed 1, voice: 0 note: 47 velocity 100 event ('note', 34080, 1, 47, 100)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 848, ticks 34080, elapsed 0, voice: 1 note: 59 velocity 100 event ('note', 34080, 2, 59, 100)
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 849, ticks 34080, elapsed 0, voice: 2 note: 54 velocity 100 event ('note', 34080, 2, 54, 100)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 850, ticks 34080, elapsed 0, voice: 3 note: 47 velocity 100 event ('note', 34080, 2, 47, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 851, ticks 34080, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 34080, 3, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 852, ticks 34080, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 34080, 3, 54, 100)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 853, ticks 34080, elapsed 0, voice: 0 note: 71 velocity 100 event ('note', 34080, 3, 71, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 854, ticks 34080, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 34080, 4, 35, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 855, ticks 34080, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 34080, 5, 59, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 856, ticks 34080, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 34080, 10, 40, 100)
	14,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 857, ticks 34308, elapsed 14, voice: 0 note: 40 velocity 0 event ('note', 34308, 10, 40, 0)
	14,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 858, ticks 34536, elapsed 14, voice: 3 note: 47 velocity 0 event ('note', 34536, 1, 47, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 860, ticks 34536, elapsed 0, voice: 2 note: 54 velocity 0 event ('note', 34536, 2, 54, 0)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 861, ticks 34536, elapsed 0, voice: 1 note: 59 velocity 0 event ('note', 34536, 2, 59, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 867, ticks 34560, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 34560, 1, 43, 100)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 868, ticks 34560, elapsed 0, voice: 1 note: 55 velocity 100 event ('note', 34560, 2, 55, 100)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 869, ticks 34560, elapsed 0, voice: 2 note: 50 velocity 100 event ('note', 34560, 2, 50, 100)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 870, ticks 34560, elapsed 0, voice: 3 note: 43 velocity 100 event ('note', 34560, 2, 43, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 871, ticks 34560, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 34560, 3, 55, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 872, ticks 34560, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 34560, 3, 50, 100)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 873, ticks 34560, elapsed 0, voice: 0 note: 67 velocity 100 event ('note', 34560, 3, 67, 100)
	0,((( 0 &4)<<5)|( 31 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 874, ticks 34560, elapsed 0, voice: 0 note: 31 velocity 100 event ('note', 34560, 4, 31, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 875, ticks 34560, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 34560, 5, 55, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 876, ticks 34560, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 34560, 10, 35, 100)
	14,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 877, ticks 34788, elapsed 14, voice: 0 note: 35 velocity 0 event ('note', 34788, 10, 35, 0)
	14,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 878, ticks 35016, elapsed 14, voice: 3 note: 43 velocity 0 event ('note', 35016, 1, 43, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 880, ticks 35016, elapsed 0, voice: 2 note: 50 velocity 0 event ('note', 35016, 2, 50, 0)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 881, ticks 35016, elapsed 0, voice: 1 note: 55 velocity 0 event ('note', 35016, 2, 55, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 31 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 887, ticks 35040, elapsed 1, voice: 0 note: 47 velocity 100 event ('note', 35040, 1, 47, 100)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 888, ticks 35040, elapsed 0, voice: 1 note: 59 velocity 100 event ('note', 35040, 2, 59, 100)
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 889, ticks 35040, elapsed 0, voice: 2 note: 54 velocity 100 event ('note', 35040, 2, 54, 100)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 890, ticks 35040, elapsed 0, voice: 3 note: 47 velocity 100 event ('note', 35040, 2, 47, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 891, ticks 35040, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 35040, 3, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 892, ticks 35040, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 35040, 3, 54, 100)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 893, ticks 35040, elapsed 0, voice: 0 note: 71 velocity 100 event ('note', 35040, 3, 71, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 894, ticks 35040, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 35040, 4, 35, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 895, ticks 35040, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 35040, 5, 59, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 896, ticks 35040, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 35040, 10, 40, 100)
	14,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 897, ticks 35268, elapsed 14, voice: 3 note: 47 velocity 0 event ('note', 35268, 1, 47, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 899, ticks 35268, elapsed 0, voice: 2 note: 54 velocity 0 event ('note', 35268, 2, 54, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 902, ticks 35268, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 35268, 10, 40, 0)
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 903, ticks 35286, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 35286, 1, 43, 100)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 904, ticks 35286, elapsed 0, voice: 2 note: 50 velocity 100 event ('note', 35286, 2, 50, 100)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 905, ticks 35286, elapsed 0, voice: 3 note: 55 velocity 100 event ('note', 35286, 2, 55, 100)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 906, ticks 35286, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 35286, 2, 43, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 907, ticks 35286, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 35286, 3, 50, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 908, ticks 35286, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 35286, 3, 55, 100)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 909, ticks 35286, elapsed 0, voice: 0 note: 67 velocity 100 event ('note', 35286, 3, 67, 100)
	13,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 910, ticks 35496, elapsed 13, voice: 1 note: 59 velocity 0 event ('note', 35496, 2, 59, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	1,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 915, ticks 35514, elapsed 1, voice: 2 note: 50 velocity 0 event ('note', 35514, 2, 50, 0)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 916, ticks 35514, elapsed 0, voice: 3 note: 55 velocity 0 event ('note', 35514, 2, 55, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 920, ticks 35514, elapsed 0, voice: 0 note: 67 velocity 0 event ('note', 35514, 3, 67, 0)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 921, ticks 35520, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 35520, 1, 48, 100)
	0,((( 1 &4)<<5)|( 60 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 922, ticks 35520, elapsed 0, voice: 1 note: 60 velocity 100 event ('note', 35520, 2, 60, 100)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 923, ticks 35520, elapsed 0, voice: 2 note: 55 velocity 100 event ('note', 35520, 2, 55, 100)
	0,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 924, ticks 35520, elapsed 0, voice: 3 note: 48 velocity 100 event ('note', 35520, 2, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 925, ticks 35520, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 35520, 3, 60, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 926, ticks 35520, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 35520, 3, 55, 100)
	0,((( 0 &4)<<5)|( 72 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 927, ticks 35520, elapsed 0, voice: 0 note: 72 velocity 100 event ('note', 35520, 3, 72, 100)
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 928, ticks 35520, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 35520, 4, 36, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 929, ticks 35520, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 35520, 5, 60, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 930, ticks 35520, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 35520, 10, 35, 100)
	// Note off skipped, note 36 not found in channels, probably interrupted
	14,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 932, ticks 35748, elapsed 14, voice: 0 note: 35 velocity 0 event ('note', 35748, 10, 35, 0)
	1,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 933, ticks 35766, elapsed 1, voice: 0 note: 36 velocity 100 event ('note', 35766, 4, 36, 100)
	13,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 934, ticks 35976, elapsed 13, voice: 3 note: 48 velocity 0 event ('note', 35976, 1, 48, 0)
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 936, ticks 35976, elapsed 0, voice: 2 note: 55 velocity 0 event ('note', 35976, 2, 55, 0)
	0,((( 1 &4)<<5)|( 60 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 937, ticks 35976, elapsed 0, voice: 1 note: 60 velocity 0 event ('note', 35976, 2, 60, 0)
	// Note off skipped, note 72 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 60 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 942, ticks 35994, elapsed 1, voice: 0 note: 36 velocity 0 event ('note', 35994, 4, 36, 0)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 943, ticks 36000, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 36000, 1, 47, 100)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 944, ticks 36000, elapsed 0, voice: 1 note: 59 velocity 100 event ('note', 36000, 2, 59, 100)
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 945, ticks 36000, elapsed 0, voice: 2 note: 54 velocity 100 event ('note', 36000, 2, 54, 100)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 946, ticks 36000, elapsed 0, voice: 3 note: 47 velocity 100 event ('note', 36000, 2, 47, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 947, ticks 36000, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 36000, 3, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 948, ticks 36000, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 36000, 3, 54, 100)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 949, ticks 36000, elapsed 0, voice: 0 note: 71 velocity 100 event ('note', 36000, 3, 71, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 950, ticks 36000, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 36000, 4, 35, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 951, ticks 36000, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 36000, 5, 59, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 952, ticks 36000, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 36000, 10, 40, 100)
	14,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 953, ticks 36228, elapsed 14, voice: 3 note: 47 velocity 0 event ('note', 36228, 1, 47, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 955, ticks 36228, elapsed 0, voice: 2 note: 54 velocity 0 event ('note', 36228, 2, 54, 0)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 956, ticks 36228, elapsed 0, voice: 1 note: 59 velocity 0 event ('note', 36228, 2, 59, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 961, ticks 36228, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 36228, 10, 40, 0)
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 962, ticks 36246, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 36246, 1, 43, 100)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 963, ticks 36246, elapsed 0, voice: 1 note: 55 velocity 100 event ('note', 36246, 2, 55, 100)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 964, ticks 36246, elapsed 0, voice: 2 note: 50 velocity 100 event ('note', 36246, 2, 50, 100)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 965, ticks 36246, elapsed 0, voice: 3 note: 43 velocity 100 event ('note', 36246, 2, 43, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 966, ticks 36246, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 36246, 3, 55, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 967, ticks 36246, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 36246, 3, 50, 100)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 968, ticks 36246, elapsed 0, voice: 0 note: 67 velocity 100 event ('note', 36246, 3, 67, 100)
	0,((( 0 &4)<<5)|( 31 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 969, ticks 36246, elapsed 0, voice: 0 note: 31 velocity 100 event ('note', 36246, 4, 31, 100)
	// Note off skipped, note 59 not found in channels, probably interrupted
	14,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 971, ticks 36474, elapsed 14, voice: 3 note: 43 velocity 0 event ('note', 36474, 1, 43, 0)
	0,((( 0 &4)<<5)|( 31 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 972, ticks 36474, elapsed 0, voice: 0 note: 31 velocity 0 event ('note', 36474, 4, 31, 0)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 973, ticks 36480, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 36480, 5, 55, 100)
	15,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 974, ticks 36726, elapsed 15, voice: 0 note: 55 velocity 0 event ('note', 36726, 2, 55, 0)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 975, ticks 36726, elapsed 0, voice: 1 note: 55 velocity 0 event ('note', 36726, 3, 55, 0)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 976, ticks 36726, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 36726, 10, 38, 100)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 977, ticks 36739, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 36739, 10, 40, 100)
	13,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 978, ticks 36954, elapsed 13, voice: 0 note: 38 velocity 0 event ('note', 36954, 10, 38, 0)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 979, ticks 36960, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 36960, 10, 38, 100)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 980, ticks 36967, elapsed 0, voice: 1 note: 40 velocity 0 event ('note', 36967, 10, 40, 0)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 981, ticks 36972, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 36972, 10, 40, 100)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 982, ticks 36973, elapsed 0, voice: 2 note: 50 velocity 0 event ('note', 36973, 2, 50, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	13,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 986, ticks 37188, elapsed 13, voice: 0 note: 38 velocity 0 event ('note', 37188, 10, 38, 0)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 987, ticks 37200, elapsed 0, voice: 1 note: 40 velocity 0 event ('note', 37200, 10, 40, 0)
	// Note off skipped, note 55 not found in channels, probably interrupted
	31,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 989, ticks 37686, elapsed 31, voice: 0 note: 38 velocity 100 event ('note', 37686, 10, 38, 100)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 990, ticks 37699, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 37699, 10, 40, 100)
	13,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 991, ticks 37914, elapsed 13, voice: 0 note: 38 velocity 0 event ('note', 37914, 10, 38, 0)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 992, ticks 37920, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 37920, 5, 55, 100)
	0,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 993, ticks 37920, elapsed 0, voice: 2 note: 38 velocity 100 event ('note', 37920, 10, 38, 100)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 994, ticks 37927, elapsed 0, voice: 1 note: 40 velocity 0 event ('note', 37927, 10, 40, 0)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 995, ticks 37932, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 37932, 10, 40, 100)
	13,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 996, ticks 38148, elapsed 13, voice: 2 note: 38 velocity 0 event ('note', 38148, 10, 38, 0)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 997, ticks 38160, elapsed 0, voice: 1 note: 40 velocity 0 event ('note', 38160, 10, 40, 0)
	13,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 998, ticks 38376, elapsed 13, voice: 0 note: 55 velocity 0 event ('note', 38376, 5, 55, 0)
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 999, ticks 38400, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 38400, 1, 43, 100)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1000, ticks 38400, elapsed 0, voice: 1 note: 50 velocity 100 event ('note', 38400, 2, 50, 100)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1001, ticks 38400, elapsed 0, voice: 2 note: 55 velocity 100 event ('note', 38400, 2, 55, 100)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1002, ticks 38400, elapsed 0, voice: 3 note: 43 velocity 100 event ('note', 38400, 2, 43, 100)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1003, ticks 38400, elapsed 0, voice: 0 note: 67 velocity 100 event ('note', 38400, 3, 67, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1004, ticks 38400, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 38400, 3, 55, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1005, ticks 38400, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 38400, 3, 50, 100)
	0,((( 0 &4)<<5)|( 31 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1006, ticks 38400, elapsed 0, voice: 0 note: 31 velocity 100 event ('note', 38400, 4, 31, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1007, ticks 38400, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 38400, 5, 55, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1008, ticks 38400, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 38400, 10, 35, 100)
	14,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1009, ticks 38628, elapsed 14, voice: 0 note: 35 velocity 0 event ('note', 38628, 10, 35, 0)
	14,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1010, ticks 38856, elapsed 14, voice: 3 note: 43 velocity 0 event ('note', 38856, 1, 43, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1012, ticks 38856, elapsed 0, voice: 2 note: 55 velocity 0 event ('note', 38856, 2, 55, 0)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1013, ticks 38856, elapsed 0, voice: 1 note: 50 velocity 0 event ('note', 38856, 2, 50, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 31 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1019, ticks 38880, elapsed 1, voice: 0 note: 47 velocity 100 event ('note', 38880, 1, 47, 100)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1020, ticks 38880, elapsed 0, voice: 1 note: 59 velocity 100 event ('note', 38880, 2, 59, 100)
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1021, ticks 38880, elapsed 0, voice: 2 note: 54 velocity 100 event ('note', 38880, 2, 54, 100)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1022, ticks 38880, elapsed 0, voice: 3 note: 47 velocity 100 event ('note', 38880, 2, 47, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1023, ticks 38880, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 38880, 3, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1024, ticks 38880, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 38880, 3, 54, 100)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1025, ticks 38880, elapsed 0, voice: 0 note: 71 velocity 100 event ('note', 38880, 3, 71, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1026, ticks 38880, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 38880, 4, 35, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1027, ticks 38880, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 38880, 5, 59, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1028, ticks 38880, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 38880, 10, 40, 100)
	7,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1029, ticks 38994, elapsed 7, voice: 1 note: 59 velocity 0 event ('note', 38994, 5, 59, 0)
	7,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1030, ticks 39108, elapsed 7, voice: 3 note: 47 velocity 0 event ('note', 39108, 1, 47, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1032, ticks 39108, elapsed 0, voice: 2 note: 54 velocity 0 event ('note', 39108, 2, 54, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1035, ticks 39108, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 39108, 10, 40, 0)
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1036, ticks 39126, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 39126, 1, 43, 100)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1037, ticks 39126, elapsed 0, voice: 1 note: 50 velocity 100 event ('note', 39126, 2, 50, 100)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1038, ticks 39126, elapsed 0, voice: 2 note: 43 velocity 100 event ('note', 39126, 2, 43, 100)
	0,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1039, ticks 39126, elapsed 0, voice: 3 note: 50 velocity 100 event ('note', 39126, 3, 50, 100)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1040, ticks 39126, elapsed 0, voice: 0 note: 67 velocity 100 event ('note', 39126, 3, 67, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1041, ticks 39126, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 39126, 5, 59, 100)
	13,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1042, ticks 39336, elapsed 13, voice: 0 note: 59 velocity 0 event ('note', 39336, 2, 59, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	1,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1045, ticks 39354, elapsed 1, voice: 2 note: 43 velocity 0 event ('note', 39354, 1, 43, 0)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1046, ticks 39354, elapsed 0, voice: 1 note: 50 velocity 0 event ('note', 39354, 2, 50, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1048, ticks 39354, elapsed 0, voice: 3 note: 50 velocity 0 event ('note', 39354, 3, 50, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1051, ticks 39360, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 39360, 1, 48, 100)
	0,((( 1 &4)<<5)|( 60 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1052, ticks 39360, elapsed 0, voice: 1 note: 60 velocity 100 event ('note', 39360, 2, 60, 100)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1053, ticks 39360, elapsed 0, voice: 2 note: 55 velocity 100 event ('note', 39360, 2, 55, 100)
	0,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1054, ticks 39360, elapsed 0, voice: 3 note: 48 velocity 100 event ('note', 39360, 2, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1055, ticks 39360, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 39360, 3, 60, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1056, ticks 39360, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 39360, 3, 55, 100)
	0,((( 0 &4)<<5)|( 72 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1057, ticks 39360, elapsed 0, voice: 0 note: 72 velocity 100 event ('note', 39360, 3, 72, 100)
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1058, ticks 39360, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 39360, 4, 36, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1059, ticks 39360, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 39360, 5, 60, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1060, ticks 39360, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 39360, 10, 35, 100)
	14,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1061, ticks 39588, elapsed 14, voice: 0 note: 35 velocity 0 event ('note', 39588, 10, 35, 0)
	14,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1062, ticks 39816, elapsed 14, voice: 3 note: 48 velocity 0 event ('note', 39816, 1, 48, 0)
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1064, ticks 39816, elapsed 0, voice: 2 note: 55 velocity 0 event ('note', 39816, 2, 55, 0)
	0,((( 1 &4)<<5)|( 60 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1065, ticks 39816, elapsed 0, voice: 1 note: 60 velocity 0 event ('note', 39816, 2, 60, 0)
	// Note off skipped, note 72 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 36 not found in channels, probably interrupted
	// Note off skipped, note 60 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1071, ticks 39840, elapsed 1, voice: 0 note: 47 velocity 100 event ('note', 39840, 1, 47, 100)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1072, ticks 39840, elapsed 0, voice: 1 note: 59 velocity 100 event ('note', 39840, 2, 59, 100)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1073, ticks 39840, elapsed 0, voice: 2 note: 47 velocity 100 event ('note', 39840, 2, 47, 100)
	0,((( 3 &4)<<5)|( 54 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1074, ticks 39840, elapsed 0, voice: 3 note: 54 velocity 100 event ('note', 39840, 2, 54, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1075, ticks 39840, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 39840, 3, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1076, ticks 39840, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 39840, 3, 54, 100)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1077, ticks 39840, elapsed 0, voice: 0 note: 71 velocity 100 event ('note', 39840, 3, 71, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1078, ticks 39840, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 39840, 4, 35, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1079, ticks 39840, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 39840, 5, 59, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1080, ticks 39840, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 39840, 10, 40, 100)
	14,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1081, ticks 40068, elapsed 14, voice: 2 note: 47 velocity 0 event ('note', 40068, 1, 47, 0)
	0,((( 3 &4)<<5)|( 54 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1082, ticks 40068, elapsed 0, voice: 3 note: 54 velocity 0 event ('note', 40068, 2, 54, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1084, ticks 40068, elapsed 0, voice: 1 note: 59 velocity 0 event ('note', 40068, 2, 59, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1090, ticks 40068, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 40068, 10, 40, 0)
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1091, ticks 40086, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 40086, 1, 43, 100)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1092, ticks 40086, elapsed 0, voice: 1 note: 55 velocity 100 event ('note', 40086, 2, 55, 100)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1093, ticks 40086, elapsed 0, voice: 2 note: 50 velocity 100 event ('note', 40086, 2, 50, 100)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1094, ticks 40086, elapsed 0, voice: 3 note: 43 velocity 100 event ('note', 40086, 2, 43, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1095, ticks 40086, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 40086, 3, 55, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1096, ticks 40086, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 40086, 3, 50, 100)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1097, ticks 40086, elapsed 0, voice: 0 note: 67 velocity 100 event ('note', 40086, 3, 67, 100)
	0,((( 0 &4)<<5)|( 31 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1098, ticks 40086, elapsed 0, voice: 0 note: 31 velocity 100 event ('note', 40086, 4, 31, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1099, ticks 40086, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 40086, 5, 55, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1100, ticks 40086, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 40086, 10, 40, 100)
	14,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1101, ticks 40314, elapsed 14, voice: 0 note: 40 velocity 0 event ('note', 40314, 10, 40, 0)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1102, ticks 40320, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 40320, 10, 35, 100)
	14,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1103, ticks 40542, elapsed 14, voice: 3 note: 43 velocity 0 event ('note', 40542, 1, 43, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1105, ticks 40542, elapsed 0, voice: 2 note: 50 velocity 0 event ('note', 40542, 2, 50, 0)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1106, ticks 40542, elapsed 0, voice: 1 note: 55 velocity 0 event ('note', 40542, 2, 55, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1111, ticks 40548, elapsed 0, voice: 0 note: 35 velocity 0 event ('note', 40548, 10, 35, 0)
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1112, ticks 40566, elapsed 1, voice: 0 note: 47 velocity 100 event ('note', 40566, 1, 47, 100)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1113, ticks 40566, elapsed 0, voice: 1 note: 59 velocity 100 event ('note', 40566, 2, 59, 100)
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1114, ticks 40566, elapsed 0, voice: 2 note: 54 velocity 100 event ('note', 40566, 2, 54, 100)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1115, ticks 40566, elapsed 0, voice: 3 note: 47 velocity 100 event ('note', 40566, 2, 47, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1116, ticks 40566, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 40566, 3, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1117, ticks 40566, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 40566, 3, 54, 100)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1118, ticks 40566, elapsed 0, voice: 0 note: 71 velocity 100 event ('note', 40566, 3, 71, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1119, ticks 40566, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 40566, 5, 59, 100)
	14,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1120, ticks 40800, elapsed 14, voice: 0 note: 35 velocity 100 event ('note', 40800, 4, 35, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1121, ticks 40800, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 40800, 10, 40, 100)
	// Note off skipped, note 31 not found in channels, probably interrupted
	14,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1123, ticks 41022, elapsed 14, voice: 3 note: 47 velocity 0 event ('note', 41022, 1, 47, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1125, ticks 41022, elapsed 0, voice: 2 note: 54 velocity 0 event ('note', 41022, 2, 54, 0)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1126, ticks 41022, elapsed 0, voice: 1 note: 59 velocity 0 event ('note', 41022, 2, 59, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1131, ticks 41028, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 41028, 10, 40, 0)
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1132, ticks 41046, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 41046, 1, 43, 100)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1133, ticks 41046, elapsed 0, voice: 1 note: 50 velocity 100 event ('note', 41046, 2, 50, 100)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1134, ticks 41046, elapsed 0, voice: 2 note: 55 velocity 100 event ('note', 41046, 2, 55, 100)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1135, ticks 41046, elapsed 0, voice: 3 note: 43 velocity 100 event ('note', 41046, 2, 43, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1136, ticks 41046, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 41046, 3, 50, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1137, ticks 41046, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 41046, 3, 55, 100)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1138, ticks 41046, elapsed 0, voice: 0 note: 67 velocity 100 event ('note', 41046, 3, 67, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1139, ticks 41046, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 41046, 5, 55, 100)
	// Note off skipped, note 35 not found in channels, probably interrupted
	14,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1141, ticks 41274, elapsed 14, voice: 3 note: 43 velocity 0 event ('note', 41274, 1, 43, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1143, ticks 41274, elapsed 0, voice: 0 note: 55 velocity 0 event ('note', 41274, 2, 55, 0)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1144, ticks 41274, elapsed 0, voice: 1 note: 50 velocity 0 event ('note', 41274, 2, 50, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1146, ticks 41274, elapsed 0, voice: 2 note: 55 velocity 0 event ('note', 41274, 3, 55, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1149, ticks 41280, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 41280, 1, 48, 100)
	0,((( 1 &4)<<5)|( 60 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1150, ticks 41280, elapsed 0, voice: 1 note: 60 velocity 100 event ('note', 41280, 2, 60, 100)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1151, ticks 41280, elapsed 0, voice: 2 note: 55 velocity 100 event ('note', 41280, 2, 55, 100)
	0,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1152, ticks 41280, elapsed 0, voice: 3 note: 48 velocity 100 event ('note', 41280, 2, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1153, ticks 41280, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 41280, 3, 60, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1154, ticks 41280, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 41280, 3, 55, 100)
	0,((( 0 &4)<<5)|( 72 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1155, ticks 41280, elapsed 0, voice: 0 note: 72 velocity 100 event ('note', 41280, 3, 72, 100)
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1156, ticks 41280, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 41280, 4, 36, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1157, ticks 41280, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 41280, 5, 60, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1158, ticks 41280, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 41280, 10, 35, 100)
	14,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1159, ticks 41508, elapsed 14, voice: 0 note: 35 velocity 0 event ('note', 41508, 10, 35, 0)
	14,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1160, ticks 41736, elapsed 14, voice: 3 note: 48 velocity 0 event ('note', 41736, 1, 48, 0)
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1162, ticks 41736, elapsed 0, voice: 2 note: 55 velocity 0 event ('note', 41736, 2, 55, 0)
	0,((( 1 &4)<<5)|( 60 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1163, ticks 41736, elapsed 0, voice: 1 note: 60 velocity 0 event ('note', 41736, 2, 60, 0)
	// Note off skipped, note 72 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 36 not found in channels, probably interrupted
	// Note off skipped, note 60 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1169, ticks 41760, elapsed 1, voice: 0 note: 47 velocity 100 event ('note', 41760, 1, 47, 100)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1170, ticks 41760, elapsed 0, voice: 1 note: 59 velocity 100 event ('note', 41760, 2, 59, 100)
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1171, ticks 41760, elapsed 0, voice: 2 note: 54 velocity 100 event ('note', 41760, 2, 54, 100)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1172, ticks 41760, elapsed 0, voice: 3 note: 47 velocity 100 event ('note', 41760, 2, 47, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1173, ticks 41760, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 41760, 3, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1174, ticks 41760, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 41760, 3, 54, 100)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1175, ticks 41760, elapsed 0, voice: 0 note: 71 velocity 100 event ('note', 41760, 3, 71, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1176, ticks 41760, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 41760, 4, 35, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1177, ticks 41760, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 41760, 5, 59, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1178, ticks 41760, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 41760, 10, 40, 100)
	14,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1179, ticks 41988, elapsed 14, voice: 0 note: 40 velocity 0 event ('note', 41988, 10, 40, 0)
	14,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1180, ticks 42216, elapsed 14, voice: 3 note: 47 velocity 0 event ('note', 42216, 1, 47, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1182, ticks 42216, elapsed 0, voice: 2 note: 54 velocity 0 event ('note', 42216, 2, 54, 0)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1183, ticks 42216, elapsed 0, voice: 1 note: 59 velocity 0 event ('note', 42216, 2, 59, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1189, ticks 42240, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 42240, 1, 43, 100)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1190, ticks 42240, elapsed 0, voice: 1 note: 55 velocity 100 event ('note', 42240, 2, 55, 100)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1191, ticks 42240, elapsed 0, voice: 2 note: 50 velocity 100 event ('note', 42240, 2, 50, 100)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1192, ticks 42240, elapsed 0, voice: 3 note: 43 velocity 100 event ('note', 42240, 2, 43, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1193, ticks 42240, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 42240, 3, 55, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1194, ticks 42240, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 42240, 3, 50, 100)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1195, ticks 42240, elapsed 0, voice: 0 note: 67 velocity 100 event ('note', 42240, 3, 67, 100)
	0,((( 0 &4)<<5)|( 31 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1196, ticks 42240, elapsed 0, voice: 0 note: 31 velocity 100 event ('note', 42240, 4, 31, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1197, ticks 42240, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 42240, 5, 55, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1198, ticks 42240, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 42240, 10, 35, 100)
	14,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1199, ticks 42468, elapsed 14, voice: 0 note: 35 velocity 0 event ('note', 42468, 10, 35, 0)
	14,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1200, ticks 42696, elapsed 14, voice: 3 note: 43 velocity 0 event ('note', 42696, 1, 43, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1202, ticks 42696, elapsed 0, voice: 2 note: 50 velocity 0 event ('note', 42696, 2, 50, 0)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1203, ticks 42696, elapsed 0, voice: 1 note: 55 velocity 0 event ('note', 42696, 2, 55, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 31 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1209, ticks 42720, elapsed 1, voice: 0 note: 47 velocity 100 event ('note', 42720, 1, 47, 100)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1210, ticks 42720, elapsed 0, voice: 1 note: 59 velocity 100 event ('note', 42720, 2, 59, 100)
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1211, ticks 42720, elapsed 0, voice: 2 note: 54 velocity 100 event ('note', 42720, 2, 54, 100)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1212, ticks 42720, elapsed 0, voice: 3 note: 47 velocity 100 event ('note', 42720, 2, 47, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1213, ticks 42720, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 42720, 3, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1214, ticks 42720, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 42720, 3, 54, 100)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1215, ticks 42720, elapsed 0, voice: 0 note: 71 velocity 100 event ('note', 42720, 3, 71, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1216, ticks 42720, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 42720, 4, 35, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1217, ticks 42720, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 42720, 5, 59, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1218, ticks 42720, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 42720, 10, 40, 100)
	14,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1219, ticks 42948, elapsed 14, voice: 3 note: 47 velocity 0 event ('note', 42948, 1, 47, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1221, ticks 42948, elapsed 0, voice: 2 note: 54 velocity 0 event ('note', 42948, 2, 54, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1224, ticks 42948, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 42948, 10, 40, 0)
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1225, ticks 42966, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 42966, 1, 43, 100)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1226, ticks 42966, elapsed 0, voice: 2 note: 50 velocity 100 event ('note', 42966, 2, 50, 100)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1227, ticks 42966, elapsed 0, voice: 3 note: 55 velocity 100 event ('note', 42966, 2, 55, 100)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1228, ticks 42966, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 42966, 2, 43, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1229, ticks 42966, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 42966, 3, 50, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1230, ticks 42966, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 42966, 3, 55, 100)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1231, ticks 42966, elapsed 0, voice: 0 note: 67 velocity 100 event ('note', 42966, 3, 67, 100)
	13,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1232, ticks 43176, elapsed 13, voice: 1 note: 59 velocity 0 event ('note', 43176, 2, 59, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	1,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1237, ticks 43194, elapsed 1, voice: 2 note: 50 velocity 0 event ('note', 43194, 2, 50, 0)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1238, ticks 43194, elapsed 0, voice: 3 note: 55 velocity 0 event ('note', 43194, 2, 55, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1242, ticks 43194, elapsed 0, voice: 0 note: 67 velocity 0 event ('note', 43194, 3, 67, 0)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1243, ticks 43200, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 43200, 1, 48, 100)
	0,((( 1 &4)<<5)|( 60 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1244, ticks 43200, elapsed 0, voice: 1 note: 60 velocity 100 event ('note', 43200, 2, 60, 100)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1245, ticks 43200, elapsed 0, voice: 2 note: 55 velocity 100 event ('note', 43200, 2, 55, 100)
	0,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1246, ticks 43200, elapsed 0, voice: 3 note: 48 velocity 100 event ('note', 43200, 2, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1247, ticks 43200, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 43200, 3, 60, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1248, ticks 43200, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 43200, 3, 55, 100)
	0,((( 0 &4)<<5)|( 72 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1249, ticks 43200, elapsed 0, voice: 0 note: 72 velocity 100 event ('note', 43200, 3, 72, 100)
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1250, ticks 43200, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 43200, 4, 36, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1251, ticks 43200, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 43200, 5, 60, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1252, ticks 43200, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 43200, 10, 35, 100)
	// Note off skipped, note 36 not found in channels, probably interrupted
	14,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1254, ticks 43428, elapsed 14, voice: 0 note: 35 velocity 0 event ('note', 43428, 10, 35, 0)
	1,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1255, ticks 43446, elapsed 1, voice: 0 note: 36 velocity 100 event ('note', 43446, 4, 36, 100)
	13,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1256, ticks 43656, elapsed 13, voice: 3 note: 48 velocity 0 event ('note', 43656, 1, 48, 0)
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1258, ticks 43656, elapsed 0, voice: 2 note: 55 velocity 0 event ('note', 43656, 2, 55, 0)
	0,((( 1 &4)<<5)|( 60 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1259, ticks 43656, elapsed 0, voice: 1 note: 60 velocity 0 event ('note', 43656, 2, 60, 0)
	// Note off skipped, note 72 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 60 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1264, ticks 43674, elapsed 1, voice: 0 note: 36 velocity 0 event ('note', 43674, 4, 36, 0)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1265, ticks 43680, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 43680, 1, 47, 100)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1266, ticks 43680, elapsed 0, voice: 1 note: 59 velocity 100 event ('note', 43680, 2, 59, 100)
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1267, ticks 43680, elapsed 0, voice: 2 note: 54 velocity 100 event ('note', 43680, 2, 54, 100)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1268, ticks 43680, elapsed 0, voice: 3 note: 47 velocity 100 event ('note', 43680, 2, 47, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1269, ticks 43680, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 43680, 3, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1270, ticks 43680, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 43680, 3, 54, 100)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1271, ticks 43680, elapsed 0, voice: 0 note: 71 velocity 100 event ('note', 43680, 3, 71, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1272, ticks 43680, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 43680, 4, 35, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1273, ticks 43680, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 43680, 5, 59, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1274, ticks 43680, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 43680, 10, 40, 100)
	14,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1275, ticks 43908, elapsed 14, voice: 3 note: 47 velocity 0 event ('note', 43908, 1, 47, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1277, ticks 43908, elapsed 0, voice: 2 note: 54 velocity 0 event ('note', 43908, 2, 54, 0)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1278, ticks 43908, elapsed 0, voice: 1 note: 59 velocity 0 event ('note', 43908, 2, 59, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1283, ticks 43908, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 43908, 10, 40, 0)
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1284, ticks 43926, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 43926, 1, 43, 100)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1285, ticks 43926, elapsed 0, voice: 1 note: 55 velocity 100 event ('note', 43926, 2, 55, 100)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1286, ticks 43926, elapsed 0, voice: 2 note: 50 velocity 100 event ('note', 43926, 2, 50, 100)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1287, ticks 43926, elapsed 0, voice: 3 note: 43 velocity 100 event ('note', 43926, 2, 43, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1288, ticks 43926, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 43926, 3, 55, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1289, ticks 43926, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 43926, 3, 50, 100)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1290, ticks 43926, elapsed 0, voice: 0 note: 67 velocity 100 event ('note', 43926, 3, 67, 100)
	0,((( 0 &4)<<5)|( 31 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1291, ticks 43926, elapsed 0, voice: 0 note: 31 velocity 100 event ('note', 43926, 4, 31, 100)
	// Note off skipped, note 59 not found in channels, probably interrupted
	14,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1293, ticks 44154, elapsed 14, voice: 3 note: 43 velocity 0 event ('note', 44154, 1, 43, 0)
	0,((( 0 &4)<<5)|( 31 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1294, ticks 44154, elapsed 0, voice: 0 note: 31 velocity 0 event ('note', 44154, 4, 31, 0)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1295, ticks 44160, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 44160, 5, 55, 100)
	15,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1296, ticks 44406, elapsed 15, voice: 0 note: 55 velocity 0 event ('note', 44406, 2, 55, 0)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1297, ticks 44406, elapsed 0, voice: 1 note: 55 velocity 0 event ('note', 44406, 3, 55, 0)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1298, ticks 44406, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 44406, 10, 40, 100)
	7,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1299, ticks 44520, elapsed 7, voice: 0 note: 40 velocity 0 event ('note', 44520, 10, 40, 0)
	1,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1300, ticks 44536, elapsed 1, voice: 0 note: 40 velocity 100 event ('note', 44536, 10, 40, 100)
	7,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1301, ticks 44650, elapsed 7, voice: 0 note: 40 velocity 0 event ('note', 44650, 10, 40, 0)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1302, ticks 44652, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 44652, 10, 40, 100)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1303, ticks 44653, elapsed 0, voice: 2 note: 50 velocity 0 event ('note', 44653, 2, 50, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	7,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1305, ticks 44766, elapsed 7, voice: 0 note: 40 velocity 0 event ('note', 44766, 10, 40, 0)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1306, ticks 44769, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 44769, 10, 40, 100)
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	7,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1309, ticks 44883, elapsed 7, voice: 0 note: 40 velocity 0 event ('note', 44883, 10, 40, 0)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1310, ticks 44886, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 44886, 10, 40, 100)
	0,((( 1 &4)<<5)|( 38 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1311, ticks 44886, elapsed 0, voice: 1 note: 38 velocity 100 event ('note', 44886, 10, 38, 100)
	7,((( 1 &4)<<5)|( 38 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1312, ticks 45000, elapsed 7, voice: 1 note: 38 velocity 0 event ('note', 45000, 10, 38, 0)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1313, ticks 45000, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 45000, 10, 40, 0)
	1,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1314, ticks 45016, elapsed 1, voice: 0 note: 40 velocity 100 event ('note', 45016, 10, 40, 100)
	0,((( 1 &4)<<5)|( 38 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1315, ticks 45016, elapsed 0, voice: 1 note: 38 velocity 100 event ('note', 45016, 10, 38, 100)
	// Note off skipped, note 55 not found in channels, probably interrupted
	6,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1317, ticks 45120, elapsed 6, voice: 2 note: 62 velocity 100 event ('note', 45120, 5, 62, 100)
	0,((( 1 &4)<<5)|( 38 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1318, ticks 45130, elapsed 0, voice: 1 note: 38 velocity 0 event ('note', 45130, 10, 38, 0)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1319, ticks 45130, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 45130, 10, 40, 0)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1320, ticks 45132, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 45132, 10, 40, 100)
	0,((( 1 &4)<<5)|( 38 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1321, ticks 45132, elapsed 0, voice: 1 note: 38 velocity 100 event ('note', 45132, 10, 38, 100)
	7,((( 1 &4)<<5)|( 38 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1322, ticks 45246, elapsed 7, voice: 1 note: 38 velocity 0 event ('note', 45246, 10, 38, 0)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1323, ticks 45246, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 45246, 10, 40, 0)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1324, ticks 45249, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 45249, 10, 40, 100)
	0,((( 1 &4)<<5)|( 38 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1325, ticks 45249, elapsed 0, voice: 1 note: 38 velocity 100 event ('note', 45249, 10, 38, 100)
	6,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1326, ticks 45348, elapsed 6, voice: 2 note: 62 velocity 0 event ('note', 45348, 5, 62, 0)
	0,((( 1 &4)<<5)|( 38 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1327, ticks 45363, elapsed 0, voice: 1 note: 38 velocity 0 event ('note', 45363, 10, 38, 0)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1328, ticks 45363, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 45363, 10, 40, 0)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1329, ticks 45366, elapsed 0, voice: 0 note: 62 velocity 100 event ('note', 45366, 5, 62, 100)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1330, ticks 45366, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 45366, 10, 40, 100)
	0,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1331, ticks 45366, elapsed 0, voice: 2 note: 38 velocity 100 event ('note', 45366, 10, 38, 100)
	7,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1332, ticks 45480, elapsed 7, voice: 2 note: 38 velocity 0 event ('note', 45480, 10, 38, 0)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1333, ticks 45480, elapsed 0, voice: 1 note: 40 velocity 0 event ('note', 45480, 10, 40, 0)
	1,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1334, ticks 45496, elapsed 1, voice: 1 note: 40 velocity 100 event ('note', 45496, 10, 40, 100)
	0,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1335, ticks 45496, elapsed 0, voice: 2 note: 38 velocity 100 event ('note', 45496, 10, 38, 100)
	6,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1336, ticks 45594, elapsed 6, voice: 0 note: 62 velocity 0 event ('note', 45594, 5, 62, 0)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1337, ticks 45600, elapsed 0, voice: 0 note: 62 velocity 100 event ('note', 45600, 5, 62, 100)
	0,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1338, ticks 45610, elapsed 0, voice: 2 note: 38 velocity 0 event ('note', 45610, 10, 38, 0)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1339, ticks 45610, elapsed 0, voice: 1 note: 40 velocity 0 event ('note', 45610, 10, 40, 0)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1340, ticks 45612, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 45612, 10, 40, 100)
	0,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1341, ticks 45612, elapsed 0, voice: 2 note: 38 velocity 100 event ('note', 45612, 10, 38, 100)
	7,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1342, ticks 45726, elapsed 7, voice: 2 note: 38 velocity 0 event ('note', 45726, 10, 38, 0)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1343, ticks 45726, elapsed 0, voice: 1 note: 40 velocity 0 event ('note', 45726, 10, 40, 0)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1344, ticks 45729, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 45729, 10, 40, 100)
	0,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1345, ticks 45729, elapsed 0, voice: 2 note: 38 velocity 100 event ('note', 45729, 10, 38, 100)
	7,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1346, ticks 45843, elapsed 7, voice: 2 note: 38 velocity 0 event ('note', 45843, 10, 38, 0)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1347, ticks 45843, elapsed 0, voice: 1 note: 40 velocity 0 event ('note', 45843, 10, 40, 0)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1348, ticks 45846, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 45846, 10, 40, 100)
	0,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1349, ticks 45846, elapsed 0, voice: 2 note: 38 velocity 100 event ('note', 45846, 10, 38, 100)
	7,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1350, ticks 45960, elapsed 7, voice: 2 note: 38 velocity 0 event ('note', 45960, 10, 38, 0)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1351, ticks 45960, elapsed 0, voice: 1 note: 40 velocity 0 event ('note', 45960, 10, 40, 0)
	6,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1352, ticks 46056, elapsed 6, voice: 0 note: 62 velocity 0 event ('note', 46056, 5, 62, 0)
	1,((( 0 &4)<<5)|( 28 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1353, ticks 46080, elapsed 1, voice: 0 note: 28 velocity 100 event ('note', 46080, 1, 28, 100)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1354, ticks 46080, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 46080, 1, 40, 100)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1355, ticks 46080, elapsed 0, voice: 2 note: 47 velocity 100 event ('note', 46080, 2, 47, 100)
	0,((( 3 &4)<<5)|( 40 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1356, ticks 46080, elapsed 0, voice: 3 note: 40 velocity 100 event ('note', 46080, 2, 40, 100)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1357, ticks 46080, elapsed 0, voice: 0 note: 64 velocity 100 event ('note', 46080, 3, 64, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1358, ticks 46080, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 46080, 3, 47, 100)
	0,((( 0 &4)<<5)|( 28 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1359, ticks 46080, elapsed 0, voice: 0 note: 28 velocity 100 event ('note', 46080, 4, 28, 100)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1360, ticks 46080, elapsed 0, voice: 0 note: 62 velocity 100 event ('note', 46080, 5, 62, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1361, ticks 46080, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 46080, 10, 35, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1362, ticks 46092, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 46092, 2, 52, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1363, ticks 46092, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 46092, 3, 52, 100)
	13,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1364, ticks 46308, elapsed 13, voice: 1 note: 40 velocity 0 event ('note', 46308, 2, 40, 0)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1365, ticks 46308, elapsed 0, voice: 2 note: 47 velocity 0 event ('note', 46308, 2, 47, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1369, ticks 46320, elapsed 0, voice: 0 note: 52 velocity 0 event ('note', 46320, 2, 52, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1371, ticks 46326, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 46326, 2, 47, 100)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1372, ticks 46326, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 46326, 2, 40, 100)
	0,((( 2 &4)<<5)|( 52 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1373, ticks 46326, elapsed 0, voice: 2 note: 52 velocity 100 event ('note', 46326, 2, 52, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1374, ticks 46326, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 46326, 3, 47, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1375, ticks 46326, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 46326, 3, 52, 100)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1376, ticks 46326, elapsed 0, voice: 0 note: 64 velocity 100 event ('note', 46326, 3, 64, 100)
	13,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1377, ticks 46536, elapsed 13, voice: 1 note: 40 velocity 0 event ('note', 46536, 1, 40, 0)
	// Note off skipped, note 28 not found in channels, probably interrupted
	// Note off skipped, note 28 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	1,((( 2 &4)<<5)|( 52 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1381, ticks 46554, elapsed 1, voice: 2 note: 52 velocity 0 event ('note', 46554, 2, 52, 0)
	0,((( 3 &4)<<5)|( 40 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1382, ticks 46554, elapsed 0, voice: 3 note: 40 velocity 0 event ('note', 46554, 2, 40, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1384, ticks 46554, elapsed 0, voice: 0 note: 64 velocity 0 event ('note', 46554, 3, 64, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1387, ticks 46560, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 46560, 2, 40, 100)
	0,((( 1 &4)<<5)|( 47 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1388, ticks 46560, elapsed 0, voice: 1 note: 47 velocity 100 event ('note', 46560, 2, 47, 100)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1389, ticks 46560, elapsed 0, voice: 2 note: 47 velocity 100 event ('note', 46560, 3, 47, 100)
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1390, ticks 46560, elapsed 0, voice: 3 note: 64 velocity 100 event ('note', 46560, 3, 64, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1391, ticks 46560, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 46560, 5, 59, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1392, ticks 46560, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 46560, 10, 40, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1393, ticks 46572, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 46572, 2, 52, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1394, ticks 46572, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 46572, 3, 52, 100)
	13,((( 1 &4)<<5)|( 47 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1395, ticks 46788, elapsed 13, voice: 1 note: 47 velocity 0 event ('note', 46788, 2, 47, 0)
	// Note off skipped, note 40 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1397, ticks 46788, elapsed 0, voice: 3 note: 64 velocity 0 event ('note', 46788, 3, 64, 0)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1398, ticks 46788, elapsed 0, voice: 2 note: 47 velocity 0 event ('note', 46788, 3, 47, 0)
	// Note off skipped, note 40 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1400, ticks 46800, elapsed 0, voice: 0 note: 52 velocity 0 event ('note', 46800, 2, 52, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1402, ticks 46806, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 46806, 2, 47, 100)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1403, ticks 46806, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 46806, 2, 40, 100)
	0,((( 2 &4)<<5)|( 52 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1404, ticks 46806, elapsed 0, voice: 2 note: 52 velocity 100 event ('note', 46806, 2, 52, 100)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1405, ticks 46806, elapsed 0, voice: 3 note: 47 velocity 100 event ('note', 46806, 3, 47, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1406, ticks 46806, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 46806, 3, 52, 100)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1407, ticks 46806, elapsed 0, voice: 0 note: 64 velocity 100 event ('note', 46806, 3, 64, 100)
	14,((( 2 &4)<<5)|( 52 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1408, ticks 47034, elapsed 14, voice: 2 note: 52 velocity 0 event ('note', 47034, 2, 52, 0)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1409, ticks 47034, elapsed 0, voice: 1 note: 40 velocity 0 event ('note', 47034, 2, 40, 0)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1410, ticks 47034, elapsed 0, voice: 3 note: 47 velocity 0 event ('note', 47034, 2, 47, 0)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1411, ticks 47034, elapsed 0, voice: 0 note: 64 velocity 0 event ('note', 47034, 3, 64, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1414, ticks 47040, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 47040, 1, 50, 100)
	0,((( 1 &4)<<5)|( 38 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1415, ticks 47040, elapsed 0, voice: 1 note: 38 velocity 100 event ('note', 47040, 1, 38, 100)
	0,((( 2 &4)<<5)|( 40 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1416, ticks 47040, elapsed 0, voice: 2 note: 40 velocity 100 event ('note', 47040, 2, 40, 100)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1417, ticks 47040, elapsed 0, voice: 3 note: 47 velocity 100 event ('note', 47040, 2, 47, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1418, ticks 47040, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 47040, 3, 47, 100)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1419, ticks 47040, elapsed 0, voice: 0 note: 64 velocity 100 event ('note', 47040, 3, 64, 100)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1420, ticks 47040, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 47040, 4, 38, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1421, ticks 47040, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 47040, 10, 35, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1422, ticks 47052, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 47052, 2, 52, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1423, ticks 47052, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 47052, 3, 52, 100)
	13,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1424, ticks 47268, elapsed 13, voice: 3 note: 47 velocity 0 event ('note', 47268, 2, 47, 0)
	0,((( 2 &4)<<5)|( 40 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1425, ticks 47268, elapsed 0, voice: 2 note: 40 velocity 0 event ('note', 47268, 2, 40, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1429, ticks 47280, elapsed 0, voice: 0 note: 52 velocity 0 event ('note', 47280, 2, 52, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1431, ticks 47286, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 47286, 2, 47, 100)
	0,((( 2 &4)<<5)|( 40 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1432, ticks 47286, elapsed 0, voice: 2 note: 40 velocity 100 event ('note', 47286, 2, 40, 100)
	0,((( 3 &4)<<5)|( 52 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1433, ticks 47286, elapsed 0, voice: 3 note: 52 velocity 100 event ('note', 47286, 2, 52, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1434, ticks 47286, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 47286, 3, 47, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1435, ticks 47286, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 47286, 3, 52, 100)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1436, ticks 47286, elapsed 0, voice: 0 note: 64 velocity 100 event ('note', 47286, 3, 64, 100)
	13,((( 1 &4)<<5)|( 38 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1437, ticks 47496, elapsed 13, voice: 1 note: 38 velocity 0 event ('note', 47496, 1, 38, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	1,((( 3 &4)<<5)|( 52 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1440, ticks 47514, elapsed 1, voice: 3 note: 52 velocity 0 event ('note', 47514, 2, 52, 0)
	0,((( 2 &4)<<5)|( 40 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1441, ticks 47514, elapsed 0, voice: 2 note: 40 velocity 0 event ('note', 47514, 2, 40, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1443, ticks 47514, elapsed 0, voice: 0 note: 64 velocity 0 event ('note', 47514, 3, 64, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1446, ticks 47520, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 47520, 2, 40, 100)
	0,((( 1 &4)<<5)|( 47 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1447, ticks 47520, elapsed 0, voice: 1 note: 47 velocity 100 event ('note', 47520, 2, 47, 100)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1448, ticks 47520, elapsed 0, voice: 2 note: 47 velocity 100 event ('note', 47520, 3, 47, 100)
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1449, ticks 47520, elapsed 0, voice: 3 note: 64 velocity 100 event ('note', 47520, 3, 64, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1450, ticks 47520, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 47520, 10, 40, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1451, ticks 47532, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 47532, 2, 52, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1452, ticks 47532, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 47532, 3, 52, 100)
	13,((( 1 &4)<<5)|( 47 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1453, ticks 47748, elapsed 13, voice: 1 note: 47 velocity 0 event ('note', 47748, 2, 47, 0)
	// Note off skipped, note 40 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1455, ticks 47748, elapsed 0, voice: 3 note: 64 velocity 0 event ('note', 47748, 3, 64, 0)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1456, ticks 47748, elapsed 0, voice: 2 note: 47 velocity 0 event ('note', 47748, 3, 47, 0)
	// Note off skipped, note 40 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1458, ticks 47760, elapsed 0, voice: 0 note: 52 velocity 0 event ('note', 47760, 2, 52, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1460, ticks 47766, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 47766, 2, 47, 100)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1461, ticks 47766, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 47766, 2, 40, 100)
	0,((( 2 &4)<<5)|( 52 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1462, ticks 47766, elapsed 0, voice: 2 note: 52 velocity 100 event ('note', 47766, 2, 52, 100)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1463, ticks 47766, elapsed 0, voice: 3 note: 47 velocity 100 event ('note', 47766, 3, 47, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1464, ticks 47766, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 47766, 3, 52, 100)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1465, ticks 47766, elapsed 0, voice: 0 note: 64 velocity 100 event ('note', 47766, 3, 64, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1466, ticks 47766, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 47766, 10, 40, 100)
	14,((( 2 &4)<<5)|( 52 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1467, ticks 47994, elapsed 14, voice: 2 note: 52 velocity 0 event ('note', 47994, 2, 52, 0)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1468, ticks 47994, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 47994, 2, 40, 0)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1469, ticks 47994, elapsed 0, voice: 3 note: 47 velocity 0 event ('note', 47994, 2, 47, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1473, ticks 47994, elapsed 0, voice: 1 note: 40 velocity 0 event ('note', 47994, 10, 40, 0)
	0,((( 0 &4)<<5)|( 28 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1474, ticks 48000, elapsed 0, voice: 0 note: 28 velocity 100 event ('note', 48000, 1, 28, 100)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1475, ticks 48000, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 48000, 1, 40, 100)
	0,((( 2 &4)<<5)|( 40 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1476, ticks 48000, elapsed 0, voice: 2 note: 40 velocity 100 event ('note', 48000, 2, 40, 100)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1477, ticks 48000, elapsed 0, voice: 3 note: 47 velocity 100 event ('note', 48000, 2, 47, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1478, ticks 48000, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 48000, 3, 47, 100)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1479, ticks 48000, elapsed 0, voice: 0 note: 64 velocity 100 event ('note', 48000, 3, 64, 100)
	0,((( 0 &4)<<5)|( 28 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1480, ticks 48000, elapsed 0, voice: 0 note: 28 velocity 100 event ('note', 48000, 4, 28, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1481, ticks 48000, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 48000, 10, 35, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1482, ticks 48012, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 48012, 2, 52, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1483, ticks 48012, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 48012, 3, 52, 100)
	13,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1484, ticks 48228, elapsed 13, voice: 3 note: 47 velocity 0 event ('note', 48228, 2, 47, 0)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1485, ticks 48228, elapsed 0, voice: 1 note: 40 velocity 0 event ('note', 48228, 2, 40, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1489, ticks 48240, elapsed 0, voice: 0 note: 52 velocity 0 event ('note', 48240, 2, 52, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1491, ticks 48246, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 48246, 2, 47, 100)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1492, ticks 48246, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 48246, 2, 40, 100)
	0,((( 3 &4)<<5)|( 52 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1493, ticks 48246, elapsed 0, voice: 3 note: 52 velocity 100 event ('note', 48246, 2, 52, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1494, ticks 48246, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 48246, 3, 47, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1495, ticks 48246, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 48246, 3, 52, 100)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1496, ticks 48246, elapsed 0, voice: 0 note: 64 velocity 100 event ('note', 48246, 3, 64, 100)
	13,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1497, ticks 48456, elapsed 13, voice: 1 note: 40 velocity 0 event ('note', 48456, 1, 40, 0)
	// Note off skipped, note 28 not found in channels, probably interrupted
	// Note off skipped, note 28 not found in channels, probably interrupted
	1,((( 3 &4)<<5)|( 52 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1500, ticks 48474, elapsed 1, voice: 3 note: 52 velocity 0 event ('note', 48474, 2, 52, 0)
	0,((( 2 &4)<<5)|( 40 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1501, ticks 48474, elapsed 0, voice: 2 note: 40 velocity 0 event ('note', 48474, 2, 40, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1503, ticks 48474, elapsed 0, voice: 0 note: 64 velocity 0 event ('note', 48474, 3, 64, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1506, ticks 48480, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 48480, 2, 40, 100)
	0,((( 1 &4)<<5)|( 47 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1507, ticks 48480, elapsed 0, voice: 1 note: 47 velocity 100 event ('note', 48480, 2, 47, 100)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1508, ticks 48480, elapsed 0, voice: 2 note: 47 velocity 100 event ('note', 48480, 3, 47, 100)
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1509, ticks 48480, elapsed 0, voice: 3 note: 64 velocity 100 event ('note', 48480, 3, 64, 100)
	// Note off skipped, note 59 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1511, ticks 48480, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 48480, 10, 40, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1512, ticks 48492, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 48492, 2, 52, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1513, ticks 48492, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 48492, 3, 52, 100)
	13,((( 1 &4)<<5)|( 47 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1514, ticks 48708, elapsed 13, voice: 1 note: 47 velocity 0 event ('note', 48708, 2, 47, 0)
	// Note off skipped, note 40 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1516, ticks 48708, elapsed 0, voice: 3 note: 64 velocity 0 event ('note', 48708, 3, 64, 0)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1517, ticks 48708, elapsed 0, voice: 2 note: 47 velocity 0 event ('note', 48708, 3, 47, 0)
	// Note off skipped, note 40 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1519, ticks 48720, elapsed 0, voice: 0 note: 52 velocity 0 event ('note', 48720, 2, 52, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1521, ticks 48726, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 48726, 2, 47, 100)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1522, ticks 48726, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 48726, 2, 40, 100)
	0,((( 2 &4)<<5)|( 52 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1523, ticks 48726, elapsed 0, voice: 2 note: 52 velocity 100 event ('note', 48726, 2, 52, 100)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1524, ticks 48726, elapsed 0, voice: 3 note: 47 velocity 100 event ('note', 48726, 3, 47, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1525, ticks 48726, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 48726, 3, 52, 100)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1526, ticks 48726, elapsed 0, voice: 0 note: 64 velocity 100 event ('note', 48726, 3, 64, 100)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1527, ticks 48739, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 48739, 4, 38, 100)
	13,((( 2 &4)<<5)|( 52 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1528, ticks 48954, elapsed 13, voice: 2 note: 52 velocity 0 event ('note', 48954, 2, 52, 0)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1529, ticks 48954, elapsed 0, voice: 1 note: 40 velocity 0 event ('note', 48954, 2, 40, 0)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1530, ticks 48954, elapsed 0, voice: 3 note: 47 velocity 0 event ('note', 48954, 2, 47, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1534, ticks 48960, elapsed 0, voice: 1 note: 50 velocity 100 event ('note', 48960, 1, 50, 100)
	0,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1535, ticks 48960, elapsed 0, voice: 2 note: 38 velocity 100 event ('note', 48960, 1, 38, 100)
	0,((( 3 &4)<<5)|( 40 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1536, ticks 48960, elapsed 0, voice: 3 note: 40 velocity 100 event ('note', 48960, 2, 40, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1537, ticks 48960, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 48960, 2, 47, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1538, ticks 48960, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 48960, 3, 47, 100)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1539, ticks 48960, elapsed 0, voice: 0 note: 64 velocity 100 event ('note', 48960, 3, 64, 100)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1540, ticks 48960, elapsed 0, voice: 0 note: 62 velocity 100 event ('note', 48960, 5, 62, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1541, ticks 48960, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 48960, 10, 35, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1542, ticks 48972, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 48972, 2, 52, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1543, ticks 48972, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 48972, 3, 52, 100)
	13,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1544, ticks 49188, elapsed 13, voice: 2 note: 38 velocity 0 event ('note', 49188, 1, 38, 0)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1545, ticks 49188, elapsed 0, voice: 1 note: 50 velocity 0 event ('note', 49188, 1, 50, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 40 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1547, ticks 49188, elapsed 0, voice: 3 note: 40 velocity 0 event ('note', 49188, 2, 40, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1552, ticks 49200, elapsed 0, voice: 0 note: 52 velocity 0 event ('note', 49200, 2, 52, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1554, ticks 49206, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 49206, 1, 48, 100)
	0,((( 1 &4)<<5)|( 36 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1555, ticks 49206, elapsed 0, voice: 1 note: 36 velocity 100 event ('note', 49206, 1, 36, 100)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1556, ticks 49206, elapsed 0, voice: 2 note: 47 velocity 100 event ('note', 49206, 2, 47, 100)
	0,((( 3 &4)<<5)|( 40 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1557, ticks 49206, elapsed 0, voice: 3 note: 40 velocity 100 event ('note', 49206, 2, 40, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1558, ticks 49206, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 49206, 2, 52, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1559, ticks 49206, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 49206, 3, 47, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1560, ticks 49206, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 49206, 3, 52, 100)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1561, ticks 49206, elapsed 0, voice: 0 note: 64 velocity 100 event ('note', 49206, 3, 64, 100)
	// Note off skipped, note 62 not found in channels, probably interrupted
	14,((( 1 &4)<<5)|( 36 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1563, ticks 49434, elapsed 14, voice: 1 note: 36 velocity 0 event ('note', 49434, 1, 36, 0)
	// Note off skipped, note 48 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 40 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1566, ticks 49434, elapsed 0, voice: 3 note: 40 velocity 0 event ('note', 49434, 2, 40, 0)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1567, ticks 49434, elapsed 0, voice: 2 note: 47 velocity 0 event ('note', 49434, 2, 47, 0)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1568, ticks 49434, elapsed 0, voice: 0 note: 64 velocity 0 event ('note', 49434, 3, 64, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1571, ticks 49440, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 49440, 1, 47, 100)
	0,((( 1 &4)<<5)|( 35 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1572, ticks 49440, elapsed 0, voice: 1 note: 35 velocity 100 event ('note', 49440, 1, 35, 100)
	0,((( 2 &4)<<5)|( 40 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1573, ticks 49440, elapsed 0, voice: 2 note: 40 velocity 100 event ('note', 49440, 2, 40, 100)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1574, ticks 49440, elapsed 0, voice: 3 note: 47 velocity 100 event ('note', 49440, 2, 47, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1575, ticks 49440, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 49440, 3, 47, 100)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1576, ticks 49440, elapsed 0, voice: 0 note: 64 velocity 100 event ('note', 49440, 3, 64, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1577, ticks 49440, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 49440, 4, 40, 100)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1578, ticks 49440, elapsed 0, voice: 0 note: 62 velocity 100 event ('note', 49440, 5, 62, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1579, ticks 49440, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 49440, 10, 40, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1580, ticks 49452, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 49452, 2, 52, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1581, ticks 49452, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 49452, 3, 52, 100)
	13,((( 1 &4)<<5)|( 35 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1582, ticks 49668, elapsed 13, voice: 1 note: 35 velocity 0 event ('note', 49668, 1, 35, 0)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1583, ticks 49668, elapsed 0, voice: 3 note: 47 velocity 0 event ('note', 49668, 1, 47, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 40 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1585, ticks 49668, elapsed 0, voice: 2 note: 40 velocity 0 event ('note', 49668, 2, 40, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 40 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1589, ticks 49680, elapsed 0, voice: 0 note: 52 velocity 0 event ('note', 49680, 2, 52, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1591, ticks 49686, elapsed 0, voice: 0 note: 45 velocity 100 event ('note', 49686, 1, 45, 100)
	0,((( 1 &4)<<5)|( 33 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1592, ticks 49686, elapsed 0, voice: 1 note: 33 velocity 100 event ('note', 49686, 1, 33, 100)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1593, ticks 49686, elapsed 0, voice: 2 note: 47 velocity 100 event ('note', 49686, 2, 47, 100)
	0,((( 3 &4)<<5)|( 40 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1594, ticks 49686, elapsed 0, voice: 3 note: 40 velocity 100 event ('note', 49686, 2, 40, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1595, ticks 49686, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 49686, 2, 52, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1596, ticks 49686, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 49686, 3, 47, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1597, ticks 49686, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 49686, 3, 52, 100)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1598, ticks 49686, elapsed 0, voice: 0 note: 62 velocity 100 event ('note', 49686, 3, 62, 100)
	13,((( 3 &4)<<5)|( 40 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1599, ticks 49896, elapsed 13, voice: 3 note: 40 velocity 0 event ('note', 49896, 4, 40, 0)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1600, ticks 49896, elapsed 0, voice: 0 note: 62 velocity 0 event ('note', 49896, 5, 62, 0)
	1,((( 1 &4)<<5)|( 33 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1601, ticks 49914, elapsed 1, voice: 1 note: 33 velocity 0 event ('note', 49914, 1, 33, 0)
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 40 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1605, ticks 49914, elapsed 0, voice: 2 note: 47 velocity 0 event ('note', 49914, 2, 47, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1609, ticks 49920, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 49920, 1, 36, 100)
	0,((( 1 &4)<<5)|( 48 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1610, ticks 49920, elapsed 0, voice: 1 note: 48 velocity 100 event ('note', 49920, 2, 48, 100)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1611, ticks 49920, elapsed 0, voice: 2 note: 43 velocity 100 event ('note', 49920, 2, 43, 100)
	0,((( 3 &4)<<5)|( 36 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1612, ticks 49920, elapsed 0, voice: 3 note: 36 velocity 100 event ('note', 49920, 2, 36, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1613, ticks 49920, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 49920, 3, 48, 100)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1614, ticks 49920, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 49920, 3, 43, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1615, ticks 49920, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 49920, 3, 60, 100)
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1616, ticks 49920, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 49920, 4, 36, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1617, ticks 49920, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 49920, 5, 55, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1618, ticks 49920, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 49920, 10, 35, 100)
	14,((( 3 &4)<<5)|( 36 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1619, ticks 50148, elapsed 14, voice: 3 note: 36 velocity 0 event ('note', 50148, 2, 36, 0)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1620, ticks 50148, elapsed 0, voice: 2 note: 43 velocity 0 event ('note', 50148, 2, 43, 0)
	0,((( 1 &4)<<5)|( 48 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1621, ticks 50148, elapsed 0, voice: 1 note: 48 velocity 0 event ('note', 50148, 2, 48, 0)
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1625, ticks 50148, elapsed 0, voice: 0 note: 35 velocity 0 event ('note', 50148, 10, 35, 0)
	1,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1626, ticks 50166, elapsed 1, voice: 0 note: 36 velocity 100 event ('note', 50166, 2, 36, 100)
	0,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1627, ticks 50166, elapsed 0, voice: 1 note: 43 velocity 100 event ('note', 50166, 2, 43, 100)
	0,((( 2 &4)<<5)|( 48 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1628, ticks 50166, elapsed 0, voice: 2 note: 48 velocity 100 event ('note', 50166, 2, 48, 100)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1629, ticks 50166, elapsed 0, voice: 3 note: 43 velocity 100 event ('note', 50166, 3, 43, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1630, ticks 50166, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 50166, 3, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1631, ticks 50166, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 50166, 3, 60, 100)
	// Note off skipped, note 36 not found in channels, probably interrupted
	// Note off skipped, note 36 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	14,((( 2 &4)<<5)|( 48 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1635, ticks 50394, elapsed 14, voice: 2 note: 48 velocity 0 event ('note', 50394, 2, 48, 0)
	0,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1636, ticks 50394, elapsed 0, voice: 1 note: 43 velocity 0 event ('note', 50394, 2, 43, 0)
	// Note off skipped, note 36 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1638, ticks 50394, elapsed 0, voice: 0 note: 60 velocity 0 event ('note', 50394, 3, 60, 0)
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1640, ticks 50394, elapsed 0, voice: 3 note: 43 velocity 0 event ('note', 50394, 3, 43, 0)
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1641, ticks 50400, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 50400, 1, 36, 100)
	0,((( 1 &4)<<5)|( 36 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1642, ticks 50400, elapsed 0, voice: 1 note: 36 velocity 100 event ('note', 50400, 2, 36, 100)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1643, ticks 50400, elapsed 0, voice: 2 note: 43 velocity 100 event ('note', 50400, 2, 43, 100)
	0,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1644, ticks 50400, elapsed 0, voice: 3 note: 48 velocity 100 event ('note', 50400, 2, 48, 100)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1645, ticks 50400, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 50400, 3, 43, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1646, ticks 50400, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 50400, 3, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1647, ticks 50400, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 50400, 3, 60, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1648, ticks 50400, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 50400, 4, 35, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1649, ticks 50400, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 50400, 5, 55, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1650, ticks 50400, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 50400, 10, 40, 100)
	14,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1651, ticks 50628, elapsed 14, voice: 3 note: 48 velocity 0 event ('note', 50628, 2, 48, 0)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1652, ticks 50628, elapsed 0, voice: 2 note: 43 velocity 0 event ('note', 50628, 2, 43, 0)
	0,((( 1 &4)<<5)|( 36 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1653, ticks 50628, elapsed 0, voice: 1 note: 36 velocity 0 event ('note', 50628, 2, 36, 0)
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1657, ticks 50628, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 50628, 10, 40, 0)
	1,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1658, ticks 50646, elapsed 1, voice: 0 note: 36 velocity 100 event ('note', 50646, 2, 36, 100)
	0,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1659, ticks 50646, elapsed 0, voice: 1 note: 43 velocity 100 event ('note', 50646, 2, 43, 100)
	0,((( 2 &4)<<5)|( 48 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1660, ticks 50646, elapsed 0, voice: 2 note: 48 velocity 100 event ('note', 50646, 2, 48, 100)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1661, ticks 50646, elapsed 0, voice: 3 note: 43 velocity 100 event ('note', 50646, 3, 43, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1662, ticks 50646, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 50646, 3, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1663, ticks 50646, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 50646, 3, 60, 100)
	// Note off skipped, note 36 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	14,((( 2 &4)<<5)|( 48 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1667, ticks 50874, elapsed 14, voice: 2 note: 48 velocity 0 event ('note', 50874, 2, 48, 0)
	0,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1668, ticks 50874, elapsed 0, voice: 1 note: 43 velocity 0 event ('note', 50874, 2, 43, 0)
	// Note off skipped, note 36 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1670, ticks 50874, elapsed 0, voice: 0 note: 60 velocity 0 event ('note', 50874, 3, 60, 0)
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1672, ticks 50874, elapsed 0, voice: 3 note: 43 velocity 0 event ('note', 50874, 3, 43, 0)
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1673, ticks 50880, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 50880, 1, 36, 100)
	0,((( 1 &4)<<5)|( 36 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1674, ticks 50880, elapsed 0, voice: 1 note: 36 velocity 100 event ('note', 50880, 2, 36, 100)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1675, ticks 50880, elapsed 0, voice: 2 note: 43 velocity 100 event ('note', 50880, 2, 43, 100)
	0,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1676, ticks 50880, elapsed 0, voice: 3 note: 48 velocity 100 event ('note', 50880, 2, 48, 100)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1677, ticks 50880, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 50880, 3, 43, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1678, ticks 50880, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 50880, 3, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1679, ticks 50880, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 50880, 3, 60, 100)
	0,((( 0 &4)<<5)|( 33 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1680, ticks 50880, elapsed 0, voice: 0 note: 33 velocity 100 event ('note', 50880, 4, 33, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1681, ticks 50880, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 50880, 5, 55, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1682, ticks 50880, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 50880, 10, 35, 100)
	14,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1683, ticks 51108, elapsed 14, voice: 3 note: 48 velocity 0 event ('note', 51108, 2, 48, 0)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1684, ticks 51108, elapsed 0, voice: 2 note: 43 velocity 0 event ('note', 51108, 2, 43, 0)
	0,((( 1 &4)<<5)|( 36 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1685, ticks 51108, elapsed 0, voice: 1 note: 36 velocity 0 event ('note', 51108, 2, 36, 0)
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1690, ticks 51108, elapsed 0, voice: 0 note: 35 velocity 0 event ('note', 51108, 10, 35, 0)
	1,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1691, ticks 51126, elapsed 1, voice: 0 note: 36 velocity 100 event ('note', 51126, 2, 36, 100)
	0,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1692, ticks 51126, elapsed 0, voice: 1 note: 43 velocity 100 event ('note', 51126, 2, 43, 100)
	0,((( 2 &4)<<5)|( 48 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1693, ticks 51126, elapsed 0, voice: 2 note: 48 velocity 100 event ('note', 51126, 2, 48, 100)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1694, ticks 51126, elapsed 0, voice: 3 note: 43 velocity 100 event ('note', 51126, 3, 43, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1695, ticks 51126, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 51126, 3, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1696, ticks 51126, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 51126, 3, 60, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1697, ticks 51126, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 51126, 5, 60, 100)
	// Note off skipped, note 36 not found in channels, probably interrupted
	// Note off skipped, note 33 not found in channels, probably interrupted
	14,((( 2 &4)<<5)|( 48 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1700, ticks 51354, elapsed 14, voice: 2 note: 48 velocity 0 event ('note', 51354, 2, 48, 0)
	0,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1701, ticks 51354, elapsed 0, voice: 1 note: 43 velocity 0 event ('note', 51354, 2, 43, 0)
	// Note off skipped, note 36 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1703, ticks 51354, elapsed 0, voice: 0 note: 60 velocity 0 event ('note', 51354, 3, 60, 0)
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1705, ticks 51354, elapsed 0, voice: 3 note: 43 velocity 0 event ('note', 51354, 3, 43, 0)
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1706, ticks 51360, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 51360, 1, 36, 100)
	0,((( 1 &4)<<5)|( 36 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1707, ticks 51360, elapsed 0, voice: 1 note: 36 velocity 100 event ('note', 51360, 2, 36, 100)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1708, ticks 51360, elapsed 0, voice: 2 note: 43 velocity 100 event ('note', 51360, 2, 43, 100)
	0,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1709, ticks 51360, elapsed 0, voice: 3 note: 48 velocity 100 event ('note', 51360, 2, 48, 100)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1710, ticks 51360, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 51360, 3, 43, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1711, ticks 51360, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 51360, 3, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1712, ticks 51360, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 51360, 3, 60, 100)
	0,((( 0 &4)<<5)|( 31 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1713, ticks 51360, elapsed 0, voice: 0 note: 31 velocity 100 event ('note', 51360, 4, 31, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1714, ticks 51360, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 51360, 10, 40, 100)
	// Note off skipped, note 60 not found in channels, probably interrupted
	14,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1716, ticks 51588, elapsed 14, voice: 3 note: 48 velocity 0 event ('note', 51588, 2, 48, 0)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1717, ticks 51588, elapsed 0, voice: 2 note: 43 velocity 0 event ('note', 51588, 2, 43, 0)
	0,((( 1 &4)<<5)|( 36 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1718, ticks 51588, elapsed 0, voice: 1 note: 36 velocity 0 event ('note', 51588, 2, 36, 0)
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1722, ticks 51588, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 51588, 10, 40, 0)
	1,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1723, ticks 51606, elapsed 1, voice: 0 note: 36 velocity 100 event ('note', 51606, 2, 36, 100)
	0,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1724, ticks 51606, elapsed 0, voice: 1 note: 43 velocity 100 event ('note', 51606, 2, 43, 100)
	0,((( 2 &4)<<5)|( 48 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1725, ticks 51606, elapsed 0, voice: 2 note: 48 velocity 100 event ('note', 51606, 2, 48, 100)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1726, ticks 51606, elapsed 0, voice: 3 note: 43 velocity 100 event ('note', 51606, 3, 43, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1727, ticks 51606, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 51606, 3, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1728, ticks 51606, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 51606, 3, 60, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1729, ticks 51606, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 51606, 5, 60, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1730, ticks 51606, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 51606, 10, 40, 100)
	// Note off skipped, note 36 not found in channels, probably interrupted
	// Note off skipped, note 31 not found in channels, probably interrupted
	14,((( 2 &4)<<5)|( 48 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1733, ticks 51834, elapsed 14, voice: 2 note: 48 velocity 0 event ('note', 51834, 2, 48, 0)
	0,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1734, ticks 51834, elapsed 0, voice: 1 note: 43 velocity 0 event ('note', 51834, 2, 43, 0)
	// Note off skipped, note 36 not found in channels, probably interrupted
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1738, ticks 51834, elapsed 0, voice: 3 note: 43 velocity 0 event ('note', 51834, 3, 43, 0)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1739, ticks 51834, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 51834, 10, 40, 0)
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1740, ticks 51840, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 51840, 1, 36, 100)
	0,((( 1 &4)<<5)|( 36 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1741, ticks 51840, elapsed 0, voice: 1 note: 36 velocity 100 event ('note', 51840, 2, 36, 100)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1742, ticks 51840, elapsed 0, voice: 2 note: 43 velocity 100 event ('note', 51840, 2, 43, 100)
	0,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1743, ticks 51840, elapsed 0, voice: 3 note: 48 velocity 100 event ('note', 51840, 2, 48, 100)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1744, ticks 51840, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 51840, 3, 43, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1745, ticks 51840, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 51840, 3, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1746, ticks 51840, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 51840, 3, 60, 100)
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1747, ticks 51840, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 51840, 4, 36, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1748, ticks 51840, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 51840, 10, 35, 100)
	14,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1749, ticks 52068, elapsed 14, voice: 3 note: 48 velocity 0 event ('note', 52068, 2, 48, 0)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1750, ticks 52068, elapsed 0, voice: 2 note: 43 velocity 0 event ('note', 52068, 2, 43, 0)
	0,((( 1 &4)<<5)|( 36 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1751, ticks 52068, elapsed 0, voice: 1 note: 36 velocity 0 event ('note', 52068, 2, 36, 0)
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1755, ticks 52068, elapsed 0, voice: 0 note: 35 velocity 0 event ('note', 52068, 10, 35, 0)
	1,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1756, ticks 52086, elapsed 1, voice: 0 note: 36 velocity 100 event ('note', 52086, 2, 36, 100)
	0,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1757, ticks 52086, elapsed 0, voice: 1 note: 43 velocity 100 event ('note', 52086, 2, 43, 100)
	0,((( 2 &4)<<5)|( 48 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1758, ticks 52086, elapsed 0, voice: 2 note: 48 velocity 100 event ('note', 52086, 2, 48, 100)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1759, ticks 52086, elapsed 0, voice: 3 note: 43 velocity 100 event ('note', 52086, 3, 43, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1760, ticks 52086, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 52086, 3, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1761, ticks 52086, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 52086, 3, 60, 100)
	// Note off skipped, note 36 not found in channels, probably interrupted
	// Note off skipped, note 36 not found in channels, probably interrupted
	14,((( 2 &4)<<5)|( 48 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1764, ticks 52314, elapsed 14, voice: 2 note: 48 velocity 0 event ('note', 52314, 2, 48, 0)
	0,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1765, ticks 52314, elapsed 0, voice: 1 note: 43 velocity 0 event ('note', 52314, 2, 43, 0)
	// Note off skipped, note 36 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1767, ticks 52314, elapsed 0, voice: 0 note: 60 velocity 0 event ('note', 52314, 3, 60, 0)
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1769, ticks 52314, elapsed 0, voice: 3 note: 43 velocity 0 event ('note', 52314, 3, 43, 0)
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1770, ticks 52320, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 52320, 1, 36, 100)
	0,((( 1 &4)<<5)|( 36 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1771, ticks 52320, elapsed 0, voice: 1 note: 36 velocity 100 event ('note', 52320, 2, 36, 100)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1772, ticks 52320, elapsed 0, voice: 2 note: 43 velocity 100 event ('note', 52320, 2, 43, 100)
	0,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1773, ticks 52320, elapsed 0, voice: 3 note: 48 velocity 100 event ('note', 52320, 2, 48, 100)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1774, ticks 52320, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 52320, 3, 43, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1775, ticks 52320, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 52320, 3, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1776, ticks 52320, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 52320, 3, 60, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1777, ticks 52320, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 52320, 4, 35, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1778, ticks 52320, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 52320, 10, 40, 100)
	14,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1779, ticks 52548, elapsed 14, voice: 3 note: 48 velocity 0 event ('note', 52548, 2, 48, 0)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1780, ticks 52548, elapsed 0, voice: 2 note: 43 velocity 0 event ('note', 52548, 2, 43, 0)
	0,((( 1 &4)<<5)|( 36 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1781, ticks 52548, elapsed 0, voice: 1 note: 36 velocity 0 event ('note', 52548, 2, 36, 0)
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1785, ticks 52548, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 52548, 10, 40, 0)
	1,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1786, ticks 52566, elapsed 1, voice: 0 note: 36 velocity 100 event ('note', 52566, 2, 36, 100)
	0,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1787, ticks 52566, elapsed 0, voice: 1 note: 43 velocity 100 event ('note', 52566, 2, 43, 100)
	0,((( 2 &4)<<5)|( 48 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1788, ticks 52566, elapsed 0, voice: 2 note: 48 velocity 100 event ('note', 52566, 2, 48, 100)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1789, ticks 52566, elapsed 0, voice: 3 note: 43 velocity 100 event ('note', 52566, 3, 43, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1790, ticks 52566, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 52566, 3, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1791, ticks 52566, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 52566, 3, 60, 100)
	// Note off skipped, note 36 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	14,((( 2 &4)<<5)|( 48 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1794, ticks 52794, elapsed 14, voice: 2 note: 48 velocity 0 event ('note', 52794, 2, 48, 0)
	0,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1795, ticks 52794, elapsed 0, voice: 1 note: 43 velocity 0 event ('note', 52794, 2, 43, 0)
	// Note off skipped, note 36 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1797, ticks 52794, elapsed 0, voice: 0 note: 60 velocity 0 event ('note', 52794, 3, 60, 0)
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1799, ticks 52794, elapsed 0, voice: 3 note: 43 velocity 0 event ('note', 52794, 3, 43, 0)
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1800, ticks 52800, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 52800, 1, 36, 100)
	0,((( 1 &4)<<5)|( 36 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1801, ticks 52800, elapsed 0, voice: 1 note: 36 velocity 100 event ('note', 52800, 2, 36, 100)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1802, ticks 52800, elapsed 0, voice: 2 note: 43 velocity 100 event ('note', 52800, 2, 43, 100)
	0,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1803, ticks 52800, elapsed 0, voice: 3 note: 48 velocity 100 event ('note', 52800, 2, 48, 100)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1804, ticks 52800, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 52800, 3, 43, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1805, ticks 52800, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 52800, 3, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1806, ticks 52800, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 52800, 3, 60, 100)
	0,((( 0 &4)<<5)|( 33 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1807, ticks 52800, elapsed 0, voice: 0 note: 33 velocity 100 event ('note', 52800, 4, 33, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1808, ticks 52800, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 52800, 5, 55, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1809, ticks 52800, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 52800, 10, 35, 100)
	// Note off skipped, note 60 not found in channels, probably interrupted
	14,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1811, ticks 53028, elapsed 14, voice: 3 note: 48 velocity 0 event ('note', 53028, 2, 48, 0)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1812, ticks 53028, elapsed 0, voice: 2 note: 43 velocity 0 event ('note', 53028, 2, 43, 0)
	0,((( 1 &4)<<5)|( 36 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1813, ticks 53028, elapsed 0, voice: 1 note: 36 velocity 0 event ('note', 53028, 2, 36, 0)
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1818, ticks 53028, elapsed 0, voice: 0 note: 35 velocity 0 event ('note', 53028, 10, 35, 0)
	1,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1819, ticks 53046, elapsed 1, voice: 0 note: 36 velocity 100 event ('note', 53046, 2, 36, 100)
	0,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1820, ticks 53046, elapsed 0, voice: 1 note: 43 velocity 100 event ('note', 53046, 2, 43, 100)
	0,((( 2 &4)<<5)|( 48 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1821, ticks 53046, elapsed 0, voice: 2 note: 48 velocity 100 event ('note', 53046, 2, 48, 100)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1822, ticks 53046, elapsed 0, voice: 3 note: 43 velocity 100 event ('note', 53046, 3, 43, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1823, ticks 53046, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 53046, 3, 48, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1824, ticks 53046, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 53046, 3, 59, 100)
	0,((( 0 &4)<<5)|( 58 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1825, ticks 53046, elapsed 0, voice: 0 note: 58 velocity 100 event ('note', 53046, 5, 58, 100)
	// Note off skipped, note 36 not found in channels, probably interrupted
	// Note off skipped, note 33 not found in channels, probably interrupted
	14,((( 2 &4)<<5)|( 48 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1828, ticks 53274, elapsed 14, voice: 2 note: 48 velocity 0 event ('note', 53274, 2, 48, 0)
	0,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1829, ticks 53274, elapsed 0, voice: 1 note: 43 velocity 0 event ('note', 53274, 2, 43, 0)
	// Note off skipped, note 36 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1833, ticks 53274, elapsed 0, voice: 3 note: 43 velocity 0 event ('note', 53274, 3, 43, 0)
	0,((( 0 &4)<<5)|( 58 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1834, ticks 53274, elapsed 0, voice: 0 note: 58 velocity 0 event ('note', 53274, 5, 58, 0)
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1835, ticks 53280, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 53280, 1, 36, 100)
	0,((( 1 &4)<<5)|( 36 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1836, ticks 53280, elapsed 0, voice: 1 note: 36 velocity 100 event ('note', 53280, 2, 36, 100)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1837, ticks 53280, elapsed 0, voice: 2 note: 43 velocity 100 event ('note', 53280, 2, 43, 100)
	0,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1838, ticks 53280, elapsed 0, voice: 3 note: 48 velocity 100 event ('note', 53280, 2, 48, 100)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1839, ticks 53280, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 53280, 3, 43, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1840, ticks 53280, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 53280, 3, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1841, ticks 53280, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 53280, 3, 60, 100)
	0,((( 0 &4)<<5)|( 31 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1842, ticks 53280, elapsed 0, voice: 0 note: 31 velocity 100 event ('note', 53280, 4, 31, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1843, ticks 53280, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 53280, 5, 60, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1844, ticks 53280, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 53280, 10, 40, 100)
	14,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1845, ticks 53508, elapsed 14, voice: 3 note: 48 velocity 0 event ('note', 53508, 2, 48, 0)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1846, ticks 53508, elapsed 0, voice: 2 note: 43 velocity 0 event ('note', 53508, 2, 43, 0)
	0,((( 1 &4)<<5)|( 36 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1847, ticks 53508, elapsed 0, voice: 1 note: 36 velocity 0 event ('note', 53508, 2, 36, 0)
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1851, ticks 53508, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 53508, 10, 40, 0)
	1,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1852, ticks 53526, elapsed 1, voice: 0 note: 36 velocity 100 event ('note', 53526, 2, 36, 100)
	0,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1853, ticks 53526, elapsed 0, voice: 1 note: 43 velocity 100 event ('note', 53526, 2, 43, 100)
	0,((( 2 &4)<<5)|( 48 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1854, ticks 53526, elapsed 0, voice: 2 note: 48 velocity 100 event ('note', 53526, 2, 48, 100)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1855, ticks 53526, elapsed 0, voice: 3 note: 43 velocity 100 event ('note', 53526, 3, 43, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1856, ticks 53526, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 53526, 3, 48, 100)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1857, ticks 53526, elapsed 0, voice: 0 note: 62 velocity 100 event ('note', 53526, 3, 62, 100)
	// Note off skipped, note 36 not found in channels, probably interrupted
	// Note off skipped, note 31 not found in channels, probably interrupted
	// Note off skipped, note 60 not found in channels, probably interrupted
	14,((( 2 &4)<<5)|( 48 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1861, ticks 53754, elapsed 14, voice: 2 note: 48 velocity 0 event ('note', 53754, 2, 48, 0)
	0,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1862, ticks 53754, elapsed 0, voice: 1 note: 43 velocity 0 event ('note', 53754, 2, 43, 0)
	// Note off skipped, note 36 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1864, ticks 53754, elapsed 0, voice: 0 note: 62 velocity 0 event ('note', 53754, 3, 62, 0)
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1866, ticks 53754, elapsed 0, voice: 3 note: 43 velocity 0 event ('note', 53754, 3, 43, 0)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1867, ticks 53760, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 53760, 1, 40, 100)
	0,((( 1 &4)<<5)|( 28 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1868, ticks 53760, elapsed 0, voice: 1 note: 28 velocity 100 event ('note', 53760, 1, 28, 100)
	0,((( 2 &4)<<5)|( 40 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1869, ticks 53760, elapsed 0, voice: 2 note: 40 velocity 100 event ('note', 53760, 2, 40, 100)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1870, ticks 53760, elapsed 0, voice: 3 note: 47 velocity 100 event ('note', 53760, 2, 47, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1871, ticks 53760, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 53760, 3, 47, 100)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1872, ticks 53760, elapsed 0, voice: 0 note: 64 velocity 100 event ('note', 53760, 3, 64, 100)
	0,((( 0 &4)<<5)|( 28 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1873, ticks 53760, elapsed 0, voice: 0 note: 28 velocity 100 event ('note', 53760, 4, 28, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1874, ticks 53760, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 53760, 5, 59, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1875, ticks 53760, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 53760, 10, 35, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1876, ticks 53772, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 53772, 2, 52, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1877, ticks 53772, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 53772, 3, 52, 100)
	13,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1878, ticks 53988, elapsed 13, voice: 3 note: 47 velocity 0 event ('note', 53988, 2, 47, 0)
	0,((( 2 &4)<<5)|( 40 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1879, ticks 53988, elapsed 0, voice: 2 note: 40 velocity 0 event ('note', 53988, 2, 40, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1883, ticks 54000, elapsed 0, voice: 0 note: 52 velocity 0 event ('note', 54000, 2, 52, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1885, ticks 54006, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 54006, 2, 47, 100)
	0,((( 2 &4)<<5)|( 40 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1886, ticks 54006, elapsed 0, voice: 2 note: 40 velocity 100 event ('note', 54006, 2, 40, 100)
	0,((( 3 &4)<<5)|( 52 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1887, ticks 54006, elapsed 0, voice: 3 note: 52 velocity 100 event ('note', 54006, 2, 52, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1888, ticks 54006, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 54006, 3, 47, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1889, ticks 54006, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 54006, 3, 52, 100)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1890, ticks 54006, elapsed 0, voice: 0 note: 64 velocity 100 event ('note', 54006, 3, 64, 100)
	13,((( 1 &4)<<5)|( 28 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1891, ticks 54216, elapsed 13, voice: 1 note: 28 velocity 0 event ('note', 54216, 1, 28, 0)
	0,((( 2 &4)<<5)|( 40 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1892, ticks 54216, elapsed 0, voice: 2 note: 40 velocity 0 event ('note', 54216, 1, 40, 0)
	// Note off skipped, note 28 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	1,((( 3 &4)<<5)|( 52 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1895, ticks 54234, elapsed 1, voice: 3 note: 52 velocity 0 event ('note', 54234, 2, 52, 0)
	// Note off skipped, note 40 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1898, ticks 54234, elapsed 0, voice: 0 note: 64 velocity 0 event ('note', 54234, 3, 64, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1901, ticks 54240, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 54240, 2, 40, 100)
	0,((( 1 &4)<<5)|( 47 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1902, ticks 54240, elapsed 0, voice: 1 note: 47 velocity 100 event ('note', 54240, 2, 47, 100)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1903, ticks 54240, elapsed 0, voice: 2 note: 47 velocity 100 event ('note', 54240, 3, 47, 100)
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1904, ticks 54240, elapsed 0, voice: 3 note: 64 velocity 100 event ('note', 54240, 3, 64, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1905, ticks 54240, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 54240, 5, 55, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1906, ticks 54240, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 54240, 10, 40, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1907, ticks 54252, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 54252, 2, 52, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1908, ticks 54252, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 54252, 3, 52, 100)
	13,((( 1 &4)<<5)|( 47 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1909, ticks 54468, elapsed 13, voice: 1 note: 47 velocity 0 event ('note', 54468, 2, 47, 0)
	// Note off skipped, note 40 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1911, ticks 54468, elapsed 0, voice: 3 note: 64 velocity 0 event ('note', 54468, 3, 64, 0)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1912, ticks 54468, elapsed 0, voice: 2 note: 47 velocity 0 event ('note', 54468, 3, 47, 0)
	// Note off skipped, note 40 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1914, ticks 54480, elapsed 0, voice: 0 note: 52 velocity 0 event ('note', 54480, 2, 52, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1916, ticks 54486, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 54486, 2, 47, 100)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1917, ticks 54486, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 54486, 2, 40, 100)
	0,((( 2 &4)<<5)|( 52 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1918, ticks 54486, elapsed 0, voice: 2 note: 52 velocity 100 event ('note', 54486, 2, 52, 100)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1919, ticks 54486, elapsed 0, voice: 3 note: 47 velocity 100 event ('note', 54486, 3, 47, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1920, ticks 54486, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 54486, 3, 52, 100)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1921, ticks 54486, elapsed 0, voice: 0 note: 64 velocity 100 event ('note', 54486, 3, 64, 100)
	// Note off skipped, note 55 not found in channels, probably interrupted
	14,((( 2 &4)<<5)|( 52 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1923, ticks 54714, elapsed 14, voice: 2 note: 52 velocity 0 event ('note', 54714, 2, 52, 0)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1924, ticks 54714, elapsed 0, voice: 1 note: 40 velocity 0 event ('note', 54714, 2, 40, 0)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1925, ticks 54714, elapsed 0, voice: 3 note: 47 velocity 0 event ('note', 54714, 2, 47, 0)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1926, ticks 54714, elapsed 0, voice: 0 note: 64 velocity 0 event ('note', 54714, 3, 64, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1929, ticks 54720, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 54720, 1, 50, 100)
	0,((( 1 &4)<<5)|( 38 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1930, ticks 54720, elapsed 0, voice: 1 note: 38 velocity 100 event ('note', 54720, 1, 38, 100)
	0,((( 2 &4)<<5)|( 40 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1931, ticks 54720, elapsed 0, voice: 2 note: 40 velocity 100 event ('note', 54720, 2, 40, 100)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1932, ticks 54720, elapsed 0, voice: 3 note: 47 velocity 100 event ('note', 54720, 2, 47, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1933, ticks 54720, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 54720, 3, 47, 100)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1934, ticks 54720, elapsed 0, voice: 0 note: 64 velocity 100 event ('note', 54720, 3, 64, 100)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1935, ticks 54720, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 54720, 4, 38, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1936, ticks 54720, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 54720, 5, 52, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1937, ticks 54720, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 54720, 10, 35, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1938, ticks 54732, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 54732, 2, 52, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1939, ticks 54732, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 54732, 3, 52, 100)
	13,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1940, ticks 54948, elapsed 13, voice: 3 note: 47 velocity 0 event ('note', 54948, 2, 47, 0)
	0,((( 2 &4)<<5)|( 40 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1941, ticks 54948, elapsed 0, voice: 2 note: 40 velocity 0 event ('note', 54948, 2, 40, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1945, ticks 54960, elapsed 0, voice: 0 note: 52 velocity 0 event ('note', 54960, 2, 52, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1947, ticks 54966, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 54966, 2, 47, 100)
	0,((( 2 &4)<<5)|( 40 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1948, ticks 54966, elapsed 0, voice: 2 note: 40 velocity 100 event ('note', 54966, 2, 40, 100)
	0,((( 3 &4)<<5)|( 52 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1949, ticks 54966, elapsed 0, voice: 3 note: 52 velocity 100 event ('note', 54966, 2, 52, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1950, ticks 54966, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 54966, 3, 47, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1951, ticks 54966, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 54966, 3, 52, 100)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1952, ticks 54966, elapsed 0, voice: 0 note: 64 velocity 100 event ('note', 54966, 3, 64, 100)
	13,((( 1 &4)<<5)|( 38 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1953, ticks 55176, elapsed 13, voice: 1 note: 38 velocity 0 event ('note', 55176, 1, 38, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	1,((( 3 &4)<<5)|( 52 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1956, ticks 55194, elapsed 1, voice: 3 note: 52 velocity 0 event ('note', 55194, 2, 52, 0)
	0,((( 2 &4)<<5)|( 40 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1957, ticks 55194, elapsed 0, voice: 2 note: 40 velocity 0 event ('note', 55194, 2, 40, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1959, ticks 55194, elapsed 0, voice: 0 note: 64 velocity 0 event ('note', 55194, 3, 64, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1962, ticks 55200, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 55200, 2, 40, 100)
	0,((( 1 &4)<<5)|( 47 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1963, ticks 55200, elapsed 0, voice: 1 note: 47 velocity 100 event ('note', 55200, 2, 47, 100)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1964, ticks 55200, elapsed 0, voice: 2 note: 47 velocity 100 event ('note', 55200, 3, 47, 100)
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1965, ticks 55200, elapsed 0, voice: 3 note: 64 velocity 100 event ('note', 55200, 3, 64, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1966, ticks 55200, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 55200, 10, 40, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1967, ticks 55212, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 55212, 2, 52, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1968, ticks 55212, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 55212, 3, 52, 100)
	13,((( 1 &4)<<5)|( 47 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1969, ticks 55428, elapsed 13, voice: 1 note: 47 velocity 0 event ('note', 55428, 2, 47, 0)
	// Note off skipped, note 40 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1971, ticks 55428, elapsed 0, voice: 3 note: 64 velocity 0 event ('note', 55428, 3, 64, 0)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1972, ticks 55428, elapsed 0, voice: 2 note: 47 velocity 0 event ('note', 55428, 3, 47, 0)
	// Note off skipped, note 40 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1974, ticks 55440, elapsed 0, voice: 0 note: 52 velocity 0 event ('note', 55440, 2, 52, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1976, ticks 55446, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 55446, 2, 47, 100)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1977, ticks 55446, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 55446, 2, 40, 100)
	0,((( 2 &4)<<5)|( 52 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1978, ticks 55446, elapsed 0, voice: 2 note: 52 velocity 100 event ('note', 55446, 2, 52, 100)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1979, ticks 55446, elapsed 0, voice: 3 note: 47 velocity 100 event ('note', 55446, 3, 47, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1980, ticks 55446, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 55446, 3, 52, 100)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1981, ticks 55446, elapsed 0, voice: 0 note: 64 velocity 100 event ('note', 55446, 3, 64, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1982, ticks 55446, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 55446, 10, 40, 100)
	14,((( 2 &4)<<5)|( 52 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1983, ticks 55674, elapsed 14, voice: 2 note: 52 velocity 0 event ('note', 55674, 2, 52, 0)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1984, ticks 55674, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 55674, 2, 40, 0)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1985, ticks 55674, elapsed 0, voice: 3 note: 47 velocity 0 event ('note', 55674, 2, 47, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1989, ticks 55674, elapsed 0, voice: 1 note: 40 velocity 0 event ('note', 55674, 10, 40, 0)
	0,((( 0 &4)<<5)|( 28 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1990, ticks 55680, elapsed 0, voice: 0 note: 28 velocity 100 event ('note', 55680, 1, 28, 100)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1991, ticks 55680, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 55680, 1, 40, 100)
	0,((( 2 &4)<<5)|( 40 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1992, ticks 55680, elapsed 0, voice: 2 note: 40 velocity 100 event ('note', 55680, 2, 40, 100)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1993, ticks 55680, elapsed 0, voice: 3 note: 47 velocity 100 event ('note', 55680, 2, 47, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1994, ticks 55680, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 55680, 3, 47, 100)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1995, ticks 55680, elapsed 0, voice: 0 note: 64 velocity 100 event ('note', 55680, 3, 64, 100)
	0,((( 0 &4)<<5)|( 28 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1996, ticks 55680, elapsed 0, voice: 0 note: 28 velocity 100 event ('note', 55680, 4, 28, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1997, ticks 55680, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 55680, 10, 35, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1998, ticks 55692, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 55692, 2, 52, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1999, ticks 55692, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 55692, 3, 52, 100)
	13,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2000, ticks 55908, elapsed 13, voice: 3 note: 47 velocity 0 event ('note', 55908, 2, 47, 0)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2001, ticks 55908, elapsed 0, voice: 1 note: 40 velocity 0 event ('note', 55908, 2, 40, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2005, ticks 55920, elapsed 0, voice: 0 note: 52 velocity 0 event ('note', 55920, 2, 52, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2007, ticks 55926, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 55926, 2, 47, 100)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2008, ticks 55926, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 55926, 2, 40, 100)
	0,((( 3 &4)<<5)|( 52 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2009, ticks 55926, elapsed 0, voice: 3 note: 52 velocity 100 event ('note', 55926, 2, 52, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2010, ticks 55926, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 55926, 3, 47, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2011, ticks 55926, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 55926, 3, 52, 100)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2012, ticks 55926, elapsed 0, voice: 0 note: 64 velocity 100 event ('note', 55926, 3, 64, 100)
	13,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2013, ticks 56136, elapsed 13, voice: 1 note: 40 velocity 0 event ('note', 56136, 1, 40, 0)
	// Note off skipped, note 28 not found in channels, probably interrupted
	// Note off skipped, note 28 not found in channels, probably interrupted
	1,((( 3 &4)<<5)|( 52 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2016, ticks 56154, elapsed 1, voice: 3 note: 52 velocity 0 event ('note', 56154, 2, 52, 0)
	0,((( 2 &4)<<5)|( 40 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2017, ticks 56154, elapsed 0, voice: 2 note: 40 velocity 0 event ('note', 56154, 2, 40, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2019, ticks 56154, elapsed 0, voice: 0 note: 64 velocity 0 event ('note', 56154, 3, 64, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2022, ticks 56160, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 56160, 2, 40, 100)
	0,((( 1 &4)<<5)|( 47 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2023, ticks 56160, elapsed 0, voice: 1 note: 47 velocity 100 event ('note', 56160, 2, 47, 100)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2024, ticks 56160, elapsed 0, voice: 2 note: 47 velocity 100 event ('note', 56160, 3, 47, 100)
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2025, ticks 56160, elapsed 0, voice: 3 note: 64 velocity 100 event ('note', 56160, 3, 64, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2026, ticks 56160, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 56160, 10, 40, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2027, ticks 56172, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 56172, 2, 52, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2028, ticks 56172, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 56172, 3, 52, 100)
	13,((( 1 &4)<<5)|( 47 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2029, ticks 56388, elapsed 13, voice: 1 note: 47 velocity 0 event ('note', 56388, 2, 47, 0)
	// Note off skipped, note 40 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2031, ticks 56388, elapsed 0, voice: 3 note: 64 velocity 0 event ('note', 56388, 3, 64, 0)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2032, ticks 56388, elapsed 0, voice: 2 note: 47 velocity 0 event ('note', 56388, 3, 47, 0)
	// Note off skipped, note 40 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2034, ticks 56400, elapsed 0, voice: 0 note: 52 velocity 0 event ('note', 56400, 2, 52, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2036, ticks 56406, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 56406, 2, 47, 100)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2037, ticks 56406, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 56406, 2, 40, 100)
	0,((( 2 &4)<<5)|( 52 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2038, ticks 56406, elapsed 0, voice: 2 note: 52 velocity 100 event ('note', 56406, 2, 52, 100)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2039, ticks 56406, elapsed 0, voice: 3 note: 47 velocity 100 event ('note', 56406, 3, 47, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2040, ticks 56406, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 56406, 3, 52, 100)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2041, ticks 56406, elapsed 0, voice: 0 note: 64 velocity 100 event ('note', 56406, 3, 64, 100)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2042, ticks 56419, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 56419, 4, 38, 100)
	13,((( 2 &4)<<5)|( 52 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2043, ticks 56634, elapsed 13, voice: 2 note: 52 velocity 0 event ('note', 56634, 2, 52, 0)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2044, ticks 56634, elapsed 0, voice: 1 note: 40 velocity 0 event ('note', 56634, 2, 40, 0)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2045, ticks 56634, elapsed 0, voice: 3 note: 47 velocity 0 event ('note', 56634, 2, 47, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2049, ticks 56640, elapsed 0, voice: 1 note: 50 velocity 100 event ('note', 56640, 1, 50, 100)
	0,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2050, ticks 56640, elapsed 0, voice: 2 note: 38 velocity 100 event ('note', 56640, 1, 38, 100)
	0,((( 3 &4)<<5)|( 40 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2051, ticks 56640, elapsed 0, voice: 3 note: 40 velocity 100 event ('note', 56640, 2, 40, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2052, ticks 56640, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 56640, 2, 47, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2053, ticks 56640, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 56640, 3, 47, 100)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2054, ticks 56640, elapsed 0, voice: 0 note: 64 velocity 100 event ('note', 56640, 3, 64, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2055, ticks 56640, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 56640, 10, 35, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2056, ticks 56652, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 56652, 2, 52, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2057, ticks 56652, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 56652, 3, 52, 100)
	13,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2058, ticks 56868, elapsed 13, voice: 2 note: 38 velocity 0 event ('note', 56868, 1, 38, 0)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2059, ticks 56868, elapsed 0, voice: 1 note: 50 velocity 0 event ('note', 56868, 1, 50, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 40 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2061, ticks 56868, elapsed 0, voice: 3 note: 40 velocity 0 event ('note', 56868, 2, 40, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2066, ticks 56880, elapsed 0, voice: 0 note: 52 velocity 0 event ('note', 56880, 2, 52, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2068, ticks 56886, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 56886, 1, 48, 100)
	0,((( 1 &4)<<5)|( 36 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2069, ticks 56886, elapsed 0, voice: 1 note: 36 velocity 100 event ('note', 56886, 1, 36, 100)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2070, ticks 56886, elapsed 0, voice: 2 note: 47 velocity 100 event ('note', 56886, 2, 47, 100)
	0,((( 3 &4)<<5)|( 40 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2071, ticks 56886, elapsed 0, voice: 3 note: 40 velocity 100 event ('note', 56886, 2, 40, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2072, ticks 56886, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 56886, 2, 52, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2073, ticks 56886, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 56886, 3, 47, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2074, ticks 56886, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 56886, 3, 52, 100)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2075, ticks 56886, elapsed 0, voice: 0 note: 64 velocity 100 event ('note', 56886, 3, 64, 100)
	14,((( 1 &4)<<5)|( 36 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2076, ticks 57114, elapsed 14, voice: 1 note: 36 velocity 0 event ('note', 57114, 1, 36, 0)
	// Note off skipped, note 48 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 40 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2079, ticks 57114, elapsed 0, voice: 3 note: 40 velocity 0 event ('note', 57114, 2, 40, 0)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2080, ticks 57114, elapsed 0, voice: 2 note: 47 velocity 0 event ('note', 57114, 2, 47, 0)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2081, ticks 57114, elapsed 0, voice: 0 note: 64 velocity 0 event ('note', 57114, 3, 64, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2084, ticks 57120, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 57120, 1, 47, 100)
	0,((( 1 &4)<<5)|( 35 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2085, ticks 57120, elapsed 0, voice: 1 note: 35 velocity 100 event ('note', 57120, 1, 35, 100)
	0,((( 2 &4)<<5)|( 40 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2086, ticks 57120, elapsed 0, voice: 2 note: 40 velocity 100 event ('note', 57120, 2, 40, 100)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2087, ticks 57120, elapsed 0, voice: 3 note: 47 velocity 100 event ('note', 57120, 2, 47, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2088, ticks 57120, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 57120, 3, 47, 100)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2089, ticks 57120, elapsed 0, voice: 0 note: 64 velocity 100 event ('note', 57120, 3, 64, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2090, ticks 57120, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 57120, 4, 40, 100)
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2092, ticks 57120, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 57120, 5, 59, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2093, ticks 57120, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 57120, 10, 40, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2094, ticks 57132, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 57132, 2, 52, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2095, ticks 57132, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 57132, 3, 52, 100)
	13,((( 1 &4)<<5)|( 35 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2096, ticks 57348, elapsed 13, voice: 1 note: 35 velocity 0 event ('note', 57348, 1, 35, 0)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2097, ticks 57348, elapsed 0, voice: 3 note: 47 velocity 0 event ('note', 57348, 1, 47, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 40 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2099, ticks 57348, elapsed 0, voice: 2 note: 40 velocity 0 event ('note', 57348, 2, 40, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 40 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2103, ticks 57360, elapsed 0, voice: 0 note: 52 velocity 0 event ('note', 57360, 2, 52, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2105, ticks 57366, elapsed 0, voice: 0 note: 45 velocity 100 event ('note', 57366, 1, 45, 100)
	0,((( 1 &4)<<5)|( 33 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2106, ticks 57366, elapsed 0, voice: 1 note: 33 velocity 100 event ('note', 57366, 1, 33, 100)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2107, ticks 57366, elapsed 0, voice: 2 note: 47 velocity 100 event ('note', 57366, 2, 47, 100)
	0,((( 3 &4)<<5)|( 40 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2108, ticks 57366, elapsed 0, voice: 3 note: 40 velocity 100 event ('note', 57366, 2, 40, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2109, ticks 57366, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 57366, 2, 52, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2110, ticks 57366, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 57366, 3, 47, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2111, ticks 57366, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 57366, 3, 52, 100)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2112, ticks 57366, elapsed 0, voice: 0 note: 62 velocity 100 event ('note', 57366, 3, 62, 100)
	13,((( 3 &4)<<5)|( 40 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2113, ticks 57576, elapsed 13, voice: 3 note: 40 velocity 0 event ('note', 57576, 4, 40, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	1,((( 1 &4)<<5)|( 33 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2115, ticks 57594, elapsed 1, voice: 1 note: 33 velocity 0 event ('note', 57594, 1, 33, 0)
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 40 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2119, ticks 57594, elapsed 0, voice: 2 note: 47 velocity 0 event ('note', 57594, 2, 47, 0)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2120, ticks 57594, elapsed 0, voice: 0 note: 62 velocity 0 event ('note', 57594, 3, 62, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2123, ticks 57600, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 57600, 1, 36, 100)
	0,((( 1 &4)<<5)|( 48 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2124, ticks 57600, elapsed 0, voice: 1 note: 48 velocity 100 event ('note', 57600, 2, 48, 100)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2125, ticks 57600, elapsed 0, voice: 2 note: 43 velocity 100 event ('note', 57600, 2, 43, 100)
	0,((( 3 &4)<<5)|( 36 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2126, ticks 57600, elapsed 0, voice: 3 note: 36 velocity 100 event ('note', 57600, 2, 36, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2127, ticks 57600, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 57600, 3, 48, 100)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2128, ticks 57600, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 57600, 3, 43, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2129, ticks 57600, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 57600, 3, 60, 100)
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2130, ticks 57600, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 57600, 4, 36, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2131, ticks 57600, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 57600, 5, 59, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2132, ticks 57600, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 57600, 10, 35, 100)
	14,((( 3 &4)<<5)|( 36 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2133, ticks 57828, elapsed 14, voice: 3 note: 36 velocity 0 event ('note', 57828, 2, 36, 0)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2134, ticks 57828, elapsed 0, voice: 2 note: 43 velocity 0 event ('note', 57828, 2, 43, 0)
	0,((( 1 &4)<<5)|( 48 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2135, ticks 57828, elapsed 0, voice: 1 note: 48 velocity 0 event ('note', 57828, 2, 48, 0)
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2139, ticks 57828, elapsed 0, voice: 0 note: 35 velocity 0 event ('note', 57828, 10, 35, 0)
	1,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2140, ticks 57846, elapsed 1, voice: 0 note: 48 velocity 100 event ('note', 57846, 2, 48, 100)
	0,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2141, ticks 57846, elapsed 0, voice: 1 note: 43 velocity 100 event ('note', 57846, 2, 43, 100)
	0,((( 2 &4)<<5)|( 36 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2142, ticks 57846, elapsed 0, voice: 2 note: 36 velocity 100 event ('note', 57846, 2, 36, 100)
	0,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2143, ticks 57846, elapsed 0, voice: 3 note: 48 velocity 100 event ('note', 57846, 3, 48, 100)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2144, ticks 57846, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 57846, 3, 43, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2145, ticks 57846, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 57846, 3, 60, 100)
	13,((( 2 &4)<<5)|( 36 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2146, ticks 58056, elapsed 13, voice: 2 note: 36 velocity 0 event ('note', 58056, 1, 36, 0)
	// Note off skipped, note 36 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 36 not found in channels, probably interrupted
	1,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2150, ticks 58074, elapsed 1, voice: 1 note: 43 velocity 0 event ('note', 58074, 2, 43, 0)
	0,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2151, ticks 58074, elapsed 0, voice: 3 note: 48 velocity 0 event ('note', 58074, 2, 48, 0)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2152, ticks 58074, elapsed 0, voice: 0 note: 60 velocity 0 event ('note', 58074, 3, 60, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2155, ticks 58080, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 58080, 1, 36, 100)
	0,((( 1 &4)<<5)|( 36 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2156, ticks 58080, elapsed 0, voice: 1 note: 36 velocity 100 event ('note', 58080, 2, 36, 100)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2157, ticks 58080, elapsed 0, voice: 2 note: 43 velocity 100 event ('note', 58080, 2, 43, 100)
	0,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2158, ticks 58080, elapsed 0, voice: 3 note: 48 velocity 100 event ('note', 58080, 2, 48, 100)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2159, ticks 58080, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 58080, 3, 43, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2160, ticks 58080, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 58080, 3, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2161, ticks 58080, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 58080, 3, 60, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2162, ticks 58080, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 58080, 4, 35, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2163, ticks 58080, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 58080, 5, 55, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2164, ticks 58080, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 58080, 10, 40, 100)
	14,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2165, ticks 58308, elapsed 14, voice: 3 note: 48 velocity 0 event ('note', 58308, 2, 48, 0)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2166, ticks 58308, elapsed 0, voice: 2 note: 43 velocity 0 event ('note', 58308, 2, 43, 0)
	0,((( 1 &4)<<5)|( 36 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2167, ticks 58308, elapsed 0, voice: 1 note: 36 velocity 0 event ('note', 58308, 2, 36, 0)
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2172, ticks 58308, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 58308, 10, 40, 0)
	1,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2173, ticks 58326, elapsed 1, voice: 0 note: 48 velocity 100 event ('note', 58326, 2, 48, 100)
	0,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2174, ticks 58326, elapsed 0, voice: 1 note: 43 velocity 100 event ('note', 58326, 2, 43, 100)
	0,((( 2 &4)<<5)|( 36 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2175, ticks 58326, elapsed 0, voice: 2 note: 36 velocity 100 event ('note', 58326, 2, 36, 100)
	0,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2176, ticks 58326, elapsed 0, voice: 3 note: 48 velocity 100 event ('note', 58326, 3, 48, 100)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2177, ticks 58326, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 58326, 3, 43, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2178, ticks 58326, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 58326, 3, 60, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2179, ticks 58326, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 58326, 5, 59, 100)
	13,((( 2 &4)<<5)|( 36 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2180, ticks 58536, elapsed 13, voice: 2 note: 36 velocity 0 event ('note', 58536, 1, 36, 0)
	// Note off skipped, note 35 not found in channels, probably interrupted
	// Note off skipped, note 36 not found in channels, probably interrupted
	1,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2183, ticks 58554, elapsed 1, voice: 1 note: 43 velocity 0 event ('note', 58554, 2, 43, 0)
	0,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2184, ticks 58554, elapsed 0, voice: 3 note: 48 velocity 0 event ('note', 58554, 2, 48, 0)
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 36 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2188, ticks 58560, elapsed 0, voice: 1 note: 36 velocity 100 event ('note', 58560, 1, 36, 100)
	0,((( 2 &4)<<5)|( 36 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2189, ticks 58560, elapsed 0, voice: 2 note: 36 velocity 100 event ('note', 58560, 2, 36, 100)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2190, ticks 58560, elapsed 0, voice: 3 note: 43 velocity 100 event ('note', 58560, 2, 43, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2191, ticks 58560, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 58560, 2, 48, 100)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2192, ticks 58560, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 58560, 3, 43, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2193, ticks 58560, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 58560, 3, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2194, ticks 58560, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 58560, 3, 60, 100)
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2195, ticks 58560, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 58560, 4, 36, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2196, ticks 58560, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 58560, 10, 35, 100)
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	14,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2199, ticks 58788, elapsed 14, voice: 3 note: 43 velocity 0 event ('note', 58788, 2, 43, 0)
	0,((( 1 &4)<<5)|( 36 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2200, ticks 58788, elapsed 0, voice: 1 note: 36 velocity 0 event ('note', 58788, 2, 36, 0)
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2204, ticks 58788, elapsed 0, voice: 0 note: 35 velocity 0 event ('note', 58788, 10, 35, 0)
	1,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2205, ticks 58806, elapsed 1, voice: 0 note: 48 velocity 100 event ('note', 58806, 2, 48, 100)
	0,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2206, ticks 58806, elapsed 0, voice: 1 note: 43 velocity 100 event ('note', 58806, 2, 43, 100)
	0,((( 3 &4)<<5)|( 36 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2207, ticks 58806, elapsed 0, voice: 3 note: 36 velocity 100 event ('note', 58806, 2, 36, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2208, ticks 58806, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 58806, 3, 48, 100)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2209, ticks 58806, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 58806, 3, 43, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2210, ticks 58806, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 58806, 3, 60, 100)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2211, ticks 58806, elapsed 0, voice: 0 note: 57 velocity 100 event ('note', 58806, 5, 57, 100)
	13,((( 2 &4)<<5)|( 36 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2212, ticks 59016, elapsed 13, voice: 2 note: 36 velocity 0 event ('note', 59016, 1, 36, 0)
	0,((( 3 &4)<<5)|( 36 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2213, ticks 59016, elapsed 0, voice: 3 note: 36 velocity 0 event ('note', 59016, 4, 36, 0)
	// Note off skipped, note 36 not found in channels, probably interrupted
	1,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2215, ticks 59034, elapsed 1, voice: 1 note: 43 velocity 0 event ('note', 59034, 2, 43, 0)
	// Note off skipped, note 48 not found in channels, probably interrupted
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2220, ticks 59034, elapsed 0, voice: 0 note: 57 velocity 0 event ('note', 59034, 5, 57, 0)
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2221, ticks 59040, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 59040, 1, 36, 100)
	0,((( 1 &4)<<5)|( 36 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2222, ticks 59040, elapsed 0, voice: 1 note: 36 velocity 100 event ('note', 59040, 2, 36, 100)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2223, ticks 59040, elapsed 0, voice: 2 note: 43 velocity 100 event ('note', 59040, 2, 43, 100)
	0,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2224, ticks 59040, elapsed 0, voice: 3 note: 48 velocity 100 event ('note', 59040, 2, 48, 100)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2225, ticks 59040, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 59040, 3, 43, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2226, ticks 59040, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 59040, 3, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2227, ticks 59040, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 59040, 3, 60, 100)
	0,((( 0 &4)<<5)|( 37 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2228, ticks 59040, elapsed 0, voice: 0 note: 37 velocity 100 event ('note', 59040, 4, 37, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2229, ticks 59040, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 59040, 5, 55, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2230, ticks 59040, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 59040, 10, 40, 100)
	14,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2231, ticks 59268, elapsed 14, voice: 3 note: 48 velocity 0 event ('note', 59268, 2, 48, 0)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2232, ticks 59268, elapsed 0, voice: 2 note: 43 velocity 0 event ('note', 59268, 2, 43, 0)
	0,((( 1 &4)<<5)|( 36 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2233, ticks 59268, elapsed 0, voice: 1 note: 36 velocity 0 event ('note', 59268, 2, 36, 0)
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2237, ticks 59268, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 59268, 10, 40, 0)
	1,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2238, ticks 59286, elapsed 1, voice: 0 note: 48 velocity 100 event ('note', 59286, 2, 48, 100)
	0,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2239, ticks 59286, elapsed 0, voice: 1 note: 43 velocity 100 event ('note', 59286, 2, 43, 100)
	0,((( 2 &4)<<5)|( 36 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2240, ticks 59286, elapsed 0, voice: 2 note: 36 velocity 100 event ('note', 59286, 2, 36, 100)
	0,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2241, ticks 59286, elapsed 0, voice: 3 note: 48 velocity 100 event ('note', 59286, 3, 48, 100)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2242, ticks 59286, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 59286, 3, 43, 100)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2243, ticks 59286, elapsed 0, voice: 0 note: 61 velocity 100 event ('note', 59286, 3, 61, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2244, ticks 59286, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 59286, 10, 40, 100)
	13,((( 2 &4)<<5)|( 36 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2245, ticks 59496, elapsed 13, voice: 2 note: 36 velocity 0 event ('note', 59496, 1, 36, 0)
	// Note off skipped, note 37 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 36 not found in channels, probably interrupted
	1,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2249, ticks 59514, elapsed 1, voice: 1 note: 43 velocity 0 event ('note', 59514, 2, 43, 0)
	0,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2250, ticks 59514, elapsed 0, voice: 3 note: 48 velocity 0 event ('note', 59514, 2, 48, 0)
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2254, ticks 59514, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 59514, 10, 40, 0)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2255, ticks 59520, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 59520, 1, 38, 100)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2256, ticks 59520, elapsed 0, voice: 1 note: 50 velocity 100 event ('note', 59520, 2, 50, 100)
	0,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2257, ticks 59520, elapsed 0, voice: 2 note: 38 velocity 100 event ('note', 59520, 2, 38, 100)
	0,((( 3 &4)<<5)|( 45 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2258, ticks 59520, elapsed 0, voice: 3 note: 45 velocity 100 event ('note', 59520, 2, 45, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2259, ticks 59520, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 59520, 3, 50, 100)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2260, ticks 59520, elapsed 0, voice: 0 note: 45 velocity 100 event ('note', 59520, 3, 45, 100)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2261, ticks 59520, elapsed 0, voice: 0 note: 62 velocity 100 event ('note', 59520, 3, 62, 100)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2262, ticks 59520, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 59520, 4, 38, 100)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2263, ticks 59520, elapsed 0, voice: 0 note: 57 velocity 100 event ('note', 59520, 5, 57, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2264, ticks 59520, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 59520, 10, 35, 100)
	14,((( 3 &4)<<5)|( 45 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2265, ticks 59748, elapsed 14, voice: 3 note: 45 velocity 0 event ('note', 59748, 2, 45, 0)
	0,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2266, ticks 59748, elapsed 0, voice: 2 note: 38 velocity 0 event ('note', 59748, 2, 38, 0)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2267, ticks 59748, elapsed 0, voice: 1 note: 50 velocity 0 event ('note', 59748, 2, 50, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2271, ticks 59748, elapsed 0, voice: 0 note: 35 velocity 0 event ('note', 59748, 10, 35, 0)
	1,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2272, ticks 59766, elapsed 1, voice: 0 note: 38 velocity 100 event ('note', 59766, 2, 38, 100)
	0,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2273, ticks 59766, elapsed 0, voice: 1 note: 45 velocity 100 event ('note', 59766, 2, 45, 100)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2274, ticks 59766, elapsed 0, voice: 2 note: 50 velocity 100 event ('note', 59766, 2, 50, 100)
	0,((( 3 &4)<<5)|( 45 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2275, ticks 59766, elapsed 0, voice: 3 note: 45 velocity 100 event ('note', 59766, 3, 45, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2276, ticks 59766, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 59766, 3, 50, 100)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2277, ticks 59766, elapsed 0, voice: 0 note: 62 velocity 100 event ('note', 59766, 3, 62, 100)
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	14,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2280, ticks 59994, elapsed 14, voice: 2 note: 50 velocity 0 event ('note', 59994, 2, 50, 0)
	0,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2281, ticks 59994, elapsed 0, voice: 1 note: 45 velocity 0 event ('note', 59994, 2, 45, 0)
	// Note off skipped, note 38 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2283, ticks 59994, elapsed 0, voice: 0 note: 62 velocity 0 event ('note', 59994, 3, 62, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 45 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2285, ticks 59994, elapsed 0, voice: 3 note: 45 velocity 0 event ('note', 59994, 3, 45, 0)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2286, ticks 60000, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 60000, 1, 38, 100)
	0,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2287, ticks 60000, elapsed 0, voice: 1 note: 45 velocity 100 event ('note', 60000, 2, 45, 100)
	0,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2288, ticks 60000, elapsed 0, voice: 2 note: 38 velocity 100 event ('note', 60000, 2, 38, 100)
	0,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2289, ticks 60000, elapsed 0, voice: 3 note: 50 velocity 100 event ('note', 60000, 2, 50, 100)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2290, ticks 60000, elapsed 0, voice: 0 note: 45 velocity 100 event ('note', 60000, 3, 45, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2291, ticks 60000, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 60000, 3, 50, 100)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2292, ticks 60000, elapsed 0, voice: 0 note: 62 velocity 100 event ('note', 60000, 3, 62, 100)
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2293, ticks 60000, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 60000, 4, 36, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2294, ticks 60000, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 60000, 10, 40, 100)
	14,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2295, ticks 60228, elapsed 14, voice: 3 note: 50 velocity 0 event ('note', 60228, 2, 50, 0)
	0,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2296, ticks 60228, elapsed 0, voice: 2 note: 38 velocity 0 event ('note', 60228, 2, 38, 0)
	0,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2297, ticks 60228, elapsed 0, voice: 1 note: 45 velocity 0 event ('note', 60228, 2, 45, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2301, ticks 60228, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 60228, 10, 40, 0)
	1,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2302, ticks 60246, elapsed 1, voice: 0 note: 38 velocity 100 event ('note', 60246, 2, 38, 100)
	0,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2303, ticks 60246, elapsed 0, voice: 1 note: 45 velocity 100 event ('note', 60246, 2, 45, 100)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2304, ticks 60246, elapsed 0, voice: 2 note: 50 velocity 100 event ('note', 60246, 2, 50, 100)
	0,((( 3 &4)<<5)|( 45 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2305, ticks 60246, elapsed 0, voice: 3 note: 45 velocity 100 event ('note', 60246, 3, 45, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2306, ticks 60246, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 60246, 3, 50, 100)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2307, ticks 60246, elapsed 0, voice: 0 note: 62 velocity 100 event ('note', 60246, 3, 62, 100)
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 36 not found in channels, probably interrupted
	14,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2310, ticks 60474, elapsed 14, voice: 2 note: 50 velocity 0 event ('note', 60474, 2, 50, 0)
	0,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2311, ticks 60474, elapsed 0, voice: 1 note: 45 velocity 0 event ('note', 60474, 2, 45, 0)
	// Note off skipped, note 38 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2313, ticks 60474, elapsed 0, voice: 0 note: 62 velocity 0 event ('note', 60474, 3, 62, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 45 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2315, ticks 60474, elapsed 0, voice: 3 note: 45 velocity 0 event ('note', 60474, 3, 45, 0)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2316, ticks 60480, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 60480, 1, 38, 100)
	0,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2317, ticks 60480, elapsed 0, voice: 1 note: 45 velocity 100 event ('note', 60480, 2, 45, 100)
	0,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2318, ticks 60480, elapsed 0, voice: 2 note: 38 velocity 100 event ('note', 60480, 2, 38, 100)
	0,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2319, ticks 60480, elapsed 0, voice: 3 note: 50 velocity 100 event ('note', 60480, 2, 50, 100)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2320, ticks 60480, elapsed 0, voice: 0 note: 45 velocity 100 event ('note', 60480, 3, 45, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2321, ticks 60480, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 60480, 3, 50, 100)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2322, ticks 60480, elapsed 0, voice: 0 note: 62 velocity 100 event ('note', 60480, 3, 62, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2323, ticks 60480, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 60480, 4, 35, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2324, ticks 60480, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 60480, 10, 35, 100)
	14,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2325, ticks 60708, elapsed 14, voice: 3 note: 50 velocity 0 event ('note', 60708, 2, 50, 0)
	0,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2326, ticks 60708, elapsed 0, voice: 2 note: 38 velocity 0 event ('note', 60708, 2, 38, 0)
	0,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2327, ticks 60708, elapsed 0, voice: 1 note: 45 velocity 0 event ('note', 60708, 2, 45, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2331, ticks 60708, elapsed 0, voice: 0 note: 35 velocity 0 event ('note', 60708, 10, 35, 0)
	1,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2332, ticks 60726, elapsed 1, voice: 0 note: 38 velocity 100 event ('note', 60726, 2, 38, 100)
	0,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2333, ticks 60726, elapsed 0, voice: 1 note: 45 velocity 100 event ('note', 60726, 2, 45, 100)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2334, ticks 60726, elapsed 0, voice: 2 note: 50 velocity 100 event ('note', 60726, 2, 50, 100)
	0,((( 3 &4)<<5)|( 45 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2335, ticks 60726, elapsed 0, voice: 3 note: 45 velocity 100 event ('note', 60726, 3, 45, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2336, ticks 60726, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 60726, 3, 50, 100)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2337, ticks 60726, elapsed 0, voice: 0 note: 62 velocity 100 event ('note', 60726, 3, 62, 100)
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	14,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2340, ticks 60954, elapsed 14, voice: 2 note: 50 velocity 0 event ('note', 60954, 2, 50, 0)
	0,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2341, ticks 60954, elapsed 0, voice: 1 note: 45 velocity 0 event ('note', 60954, 2, 45, 0)
	// Note off skipped, note 38 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2343, ticks 60954, elapsed 0, voice: 0 note: 62 velocity 0 event ('note', 60954, 3, 62, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 45 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2345, ticks 60954, elapsed 0, voice: 3 note: 45 velocity 0 event ('note', 60954, 3, 45, 0)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2346, ticks 60960, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 60960, 1, 38, 100)
	0,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2347, ticks 60960, elapsed 0, voice: 1 note: 45 velocity 100 event ('note', 60960, 2, 45, 100)
	0,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2348, ticks 60960, elapsed 0, voice: 2 note: 38 velocity 100 event ('note', 60960, 2, 38, 100)
	0,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2349, ticks 60960, elapsed 0, voice: 3 note: 50 velocity 100 event ('note', 60960, 2, 50, 100)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2350, ticks 60960, elapsed 0, voice: 0 note: 45 velocity 100 event ('note', 60960, 3, 45, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2351, ticks 60960, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 60960, 3, 50, 100)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2352, ticks 60960, elapsed 0, voice: 0 note: 62 velocity 100 event ('note', 60960, 3, 62, 100)
	0,((( 0 &4)<<5)|( 33 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2353, ticks 60960, elapsed 0, voice: 0 note: 33 velocity 100 event ('note', 60960, 4, 33, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2354, ticks 60960, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 60960, 10, 40, 100)
	14,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2355, ticks 61188, elapsed 14, voice: 3 note: 50 velocity 0 event ('note', 61188, 2, 50, 0)
	0,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2356, ticks 61188, elapsed 0, voice: 2 note: 38 velocity 0 event ('note', 61188, 2, 38, 0)
	0,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2357, ticks 61188, elapsed 0, voice: 1 note: 45 velocity 0 event ('note', 61188, 2, 45, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2361, ticks 61188, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 61188, 10, 40, 0)
	1,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2362, ticks 61206, elapsed 1, voice: 0 note: 38 velocity 100 event ('note', 61206, 2, 38, 100)
	0,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2363, ticks 61206, elapsed 0, voice: 1 note: 45 velocity 100 event ('note', 61206, 2, 45, 100)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2364, ticks 61206, elapsed 0, voice: 2 note: 50 velocity 100 event ('note', 61206, 2, 50, 100)
	0,((( 3 &4)<<5)|( 45 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2365, ticks 61206, elapsed 0, voice: 3 note: 45 velocity 100 event ('note', 61206, 3, 45, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2366, ticks 61206, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 61206, 3, 50, 100)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2367, ticks 61206, elapsed 0, voice: 0 note: 62 velocity 100 event ('note', 61206, 3, 62, 100)
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 33 not found in channels, probably interrupted
	14,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2370, ticks 61434, elapsed 14, voice: 2 note: 50 velocity 0 event ('note', 61434, 2, 50, 0)
	0,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2371, ticks 61434, elapsed 0, voice: 1 note: 45 velocity 0 event ('note', 61434, 2, 45, 0)
	// Note off skipped, note 38 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2373, ticks 61434, elapsed 0, voice: 0 note: 62 velocity 0 event ('note', 61434, 3, 62, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 45 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2375, ticks 61434, elapsed 0, voice: 3 note: 45 velocity 0 event ('note', 61434, 3, 45, 0)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2376, ticks 61440, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 61440, 1, 38, 100)
	0,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2377, ticks 61440, elapsed 0, voice: 1 note: 45 velocity 100 event ('note', 61440, 2, 45, 100)
	0,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2378, ticks 61440, elapsed 0, voice: 2 note: 38 velocity 100 event ('note', 61440, 2, 38, 100)
	0,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2379, ticks 61440, elapsed 0, voice: 3 note: 50 velocity 100 event ('note', 61440, 2, 50, 100)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2380, ticks 61440, elapsed 0, voice: 0 note: 45 velocity 100 event ('note', 61440, 3, 45, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2381, ticks 61440, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 61440, 3, 50, 100)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2382, ticks 61440, elapsed 0, voice: 0 note: 62 velocity 100 event ('note', 61440, 3, 62, 100)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2383, ticks 61440, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 61440, 4, 38, 100)
	// Note off skipped, note 57 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2385, ticks 61440, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 61440, 10, 35, 100)
	14,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2386, ticks 61668, elapsed 14, voice: 3 note: 50 velocity 0 event ('note', 61668, 2, 50, 0)
	0,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2387, ticks 61668, elapsed 0, voice: 2 note: 38 velocity 0 event ('note', 61668, 2, 38, 0)
	0,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2388, ticks 61668, elapsed 0, voice: 1 note: 45 velocity 0 event ('note', 61668, 2, 45, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2392, ticks 61668, elapsed 0, voice: 0 note: 35 velocity 0 event ('note', 61668, 10, 35, 0)
	1,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2393, ticks 61686, elapsed 1, voice: 0 note: 38 velocity 100 event ('note', 61686, 2, 38, 100)
	0,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2394, ticks 61686, elapsed 0, voice: 1 note: 45 velocity 100 event ('note', 61686, 2, 45, 100)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2395, ticks 61686, elapsed 0, voice: 2 note: 50 velocity 100 event ('note', 61686, 2, 50, 100)
	0,((( 3 &4)<<5)|( 45 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2396, ticks 61686, elapsed 0, voice: 3 note: 45 velocity 100 event ('note', 61686, 3, 45, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2397, ticks 61686, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 61686, 3, 50, 100)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2398, ticks 61686, elapsed 0, voice: 0 note: 62 velocity 100 event ('note', 61686, 3, 62, 100)
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	14,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2401, ticks 61914, elapsed 14, voice: 2 note: 50 velocity 0 event ('note', 61914, 2, 50, 0)
	0,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2402, ticks 61914, elapsed 0, voice: 1 note: 45 velocity 0 event ('note', 61914, 2, 45, 0)
	// Note off skipped, note 38 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2404, ticks 61914, elapsed 0, voice: 0 note: 62 velocity 0 event ('note', 61914, 3, 62, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 45 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2406, ticks 61914, elapsed 0, voice: 3 note: 45 velocity 0 event ('note', 61914, 3, 45, 0)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2407, ticks 61920, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 61920, 1, 38, 100)
	0,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2408, ticks 61920, elapsed 0, voice: 1 note: 45 velocity 100 event ('note', 61920, 2, 45, 100)
	0,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2409, ticks 61920, elapsed 0, voice: 2 note: 38 velocity 100 event ('note', 61920, 2, 38, 100)
	0,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2410, ticks 61920, elapsed 0, voice: 3 note: 50 velocity 100 event ('note', 61920, 2, 50, 100)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2411, ticks 61920, elapsed 0, voice: 0 note: 45 velocity 100 event ('note', 61920, 3, 45, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2412, ticks 61920, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 61920, 3, 50, 100)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2413, ticks 61920, elapsed 0, voice: 0 note: 62 velocity 100 event ('note', 61920, 3, 62, 100)
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2414, ticks 61920, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 61920, 4, 36, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2415, ticks 61920, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 61920, 10, 40, 100)
	14,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2416, ticks 62148, elapsed 14, voice: 3 note: 50 velocity 0 event ('note', 62148, 2, 50, 0)
	0,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2417, ticks 62148, elapsed 0, voice: 2 note: 38 velocity 0 event ('note', 62148, 2, 38, 0)
	0,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2418, ticks 62148, elapsed 0, voice: 1 note: 45 velocity 0 event ('note', 62148, 2, 45, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2422, ticks 62148, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 62148, 10, 40, 0)
	1,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2423, ticks 62166, elapsed 1, voice: 0 note: 38 velocity 100 event ('note', 62166, 2, 38, 100)
	0,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2424, ticks 62166, elapsed 0, voice: 1 note: 45 velocity 100 event ('note', 62166, 2, 45, 100)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2425, ticks 62166, elapsed 0, voice: 2 note: 50 velocity 100 event ('note', 62166, 2, 50, 100)
	0,((( 3 &4)<<5)|( 45 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2426, ticks 62166, elapsed 0, voice: 3 note: 45 velocity 100 event ('note', 62166, 3, 45, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2427, ticks 62166, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 62166, 3, 50, 100)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2428, ticks 62166, elapsed 0, voice: 0 note: 62 velocity 100 event ('note', 62166, 3, 62, 100)
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 36 not found in channels, probably interrupted
	14,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2431, ticks 62394, elapsed 14, voice: 2 note: 50 velocity 0 event ('note', 62394, 2, 50, 0)
	0,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2432, ticks 62394, elapsed 0, voice: 1 note: 45 velocity 0 event ('note', 62394, 2, 45, 0)
	// Note off skipped, note 38 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2434, ticks 62394, elapsed 0, voice: 0 note: 62 velocity 0 event ('note', 62394, 3, 62, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 45 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2436, ticks 62394, elapsed 0, voice: 3 note: 45 velocity 0 event ('note', 62394, 3, 45, 0)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2437, ticks 62400, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 62400, 1, 38, 100)
	0,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2438, ticks 62400, elapsed 0, voice: 1 note: 45 velocity 100 event ('note', 62400, 2, 45, 100)
	0,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2439, ticks 62400, elapsed 0, voice: 2 note: 38 velocity 100 event ('note', 62400, 2, 38, 100)
	0,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2440, ticks 62400, elapsed 0, voice: 3 note: 50 velocity 100 event ('note', 62400, 2, 50, 100)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2441, ticks 62400, elapsed 0, voice: 0 note: 45 velocity 100 event ('note', 62400, 3, 45, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2442, ticks 62400, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 62400, 3, 50, 100)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2443, ticks 62400, elapsed 0, voice: 0 note: 62 velocity 100 event ('note', 62400, 3, 62, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2444, ticks 62400, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 62400, 4, 35, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2445, ticks 62400, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 62400, 10, 40, 100)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2446, ticks 62400, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 62400, 10, 38, 100)
	7,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2447, ticks 62514, elapsed 7, voice: 0 note: 38 velocity 0 event ('note', 62514, 10, 38, 0)
	// Note off skipped, note 40 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2449, ticks 62529, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 62529, 10, 40, 100)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2450, ticks 62529, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 62529, 10, 38, 100)
	6,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2451, ticks 62628, elapsed 6, voice: 3 note: 50 velocity 0 event ('note', 62628, 2, 50, 0)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2452, ticks 62628, elapsed 0, voice: 0 note: 38 velocity 0 event ('note', 62628, 2, 38, 0)
	0,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2453, ticks 62628, elapsed 0, voice: 1 note: 45 velocity 0 event ('note', 62628, 2, 45, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2457, ticks 62643, elapsed 0, voice: 2 note: 38 velocity 0 event ('note', 62643, 10, 38, 0)
	// Note off skipped, note 40 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2459, ticks 62646, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 62646, 2, 38, 100)
	0,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2460, ticks 62646, elapsed 0, voice: 1 note: 45 velocity 100 event ('note', 62646, 2, 45, 100)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2461, ticks 62646, elapsed 0, voice: 2 note: 50 velocity 100 event ('note', 62646, 2, 50, 100)
	0,((( 3 &4)<<5)|( 45 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2462, ticks 62646, elapsed 0, voice: 3 note: 45 velocity 100 event ('note', 62646, 3, 45, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2463, ticks 62646, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 62646, 3, 50, 100)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2464, ticks 62646, elapsed 0, voice: 0 note: 62 velocity 100 event ('note', 62646, 3, 62, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2465, ticks 62646, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 62646, 10, 40, 100)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2466, ticks 62646, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 62646, 10, 38, 100)
	7,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2467, ticks 62760, elapsed 7, voice: 0 note: 38 velocity 0 event ('note', 62760, 10, 38, 0)
	// Note off skipped, note 40 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2469, ticks 62776, elapsed 1, voice: 0 note: 35 velocity 100 event ('note', 62776, 10, 35, 100)
	// Note off skipped, note 38 not found in channels, probably interrupted
	5,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2471, ticks 62856, elapsed 5, voice: 0 note: 35 velocity 0 event ('note', 62856, 4, 35, 0)
	1,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2472, ticks 62874, elapsed 1, voice: 2 note: 50 velocity 0 event ('note', 62874, 2, 50, 0)
	0,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2473, ticks 62874, elapsed 0, voice: 1 note: 45 velocity 0 event ('note', 62874, 2, 45, 0)
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 45 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2477, ticks 62874, elapsed 0, voice: 3 note: 45 velocity 0 event ('note', 62874, 3, 45, 0)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2478, ticks 62880, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 62880, 1, 38, 100)
	0,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2479, ticks 62880, elapsed 0, voice: 1 note: 45 velocity 100 event ('note', 62880, 2, 45, 100)
	0,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2480, ticks 62880, elapsed 0, voice: 2 note: 38 velocity 100 event ('note', 62880, 2, 38, 100)
	0,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2481, ticks 62880, elapsed 0, voice: 3 note: 50 velocity 100 event ('note', 62880, 2, 50, 100)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2482, ticks 62880, elapsed 0, voice: 0 note: 45 velocity 100 event ('note', 62880, 3, 45, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2483, ticks 62880, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 62880, 3, 50, 100)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2484, ticks 62880, elapsed 0, voice: 0 note: 62 velocity 100 event ('note', 62880, 3, 62, 100)
	0,((( 0 &4)<<5)|( 33 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2485, ticks 62880, elapsed 0, voice: 0 note: 33 velocity 100 event ('note', 62880, 4, 33, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2486, ticks 62880, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 62880, 10, 40, 100)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2487, ticks 62880, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 62880, 10, 38, 100)
	7,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2488, ticks 62994, elapsed 7, voice: 0 note: 38 velocity 0 event ('note', 62994, 10, 38, 0)
	// Note off skipped, note 40 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2491, ticks 63009, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 63009, 10, 40, 100)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2492, ticks 63009, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 63009, 10, 38, 100)
	6,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2493, ticks 63108, elapsed 6, voice: 3 note: 50 velocity 0 event ('note', 63108, 2, 50, 0)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2494, ticks 63108, elapsed 0, voice: 0 note: 38 velocity 0 event ('note', 63108, 2, 38, 0)
	0,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2495, ticks 63108, elapsed 0, voice: 1 note: 45 velocity 0 event ('note', 63108, 2, 45, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2499, ticks 63123, elapsed 0, voice: 2 note: 38 velocity 0 event ('note', 63123, 10, 38, 0)
	// Note off skipped, note 40 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2501, ticks 63126, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 63126, 2, 38, 100)
	0,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2502, ticks 63126, elapsed 0, voice: 1 note: 45 velocity 100 event ('note', 63126, 2, 45, 100)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2503, ticks 63126, elapsed 0, voice: 2 note: 50 velocity 100 event ('note', 63126, 2, 50, 100)
	0,((( 3 &4)<<5)|( 45 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2504, ticks 63126, elapsed 0, voice: 3 note: 45 velocity 100 event ('note', 63126, 3, 45, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2505, ticks 63126, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 63126, 3, 50, 100)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2506, ticks 63126, elapsed 0, voice: 0 note: 62 velocity 100 event ('note', 63126, 3, 62, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2507, ticks 63126, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 63126, 10, 40, 100)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2508, ticks 63126, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 63126, 10, 38, 100)
	7,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2509, ticks 63240, elapsed 7, voice: 0 note: 38 velocity 0 event ('note', 63240, 10, 38, 0)
	// Note off skipped, note 40 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 33 not found in channels, probably interrupted
	7,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2513, ticks 63354, elapsed 7, voice: 2 note: 50 velocity 0 event ('note', 63354, 2, 50, 0)
	0,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2514, ticks 63354, elapsed 0, voice: 1 note: 45 velocity 0 event ('note', 63354, 2, 45, 0)
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 45 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2518, ticks 63354, elapsed 0, voice: 3 note: 45 velocity 0 event ('note', 63354, 3, 45, 0)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2519, ticks 63360, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 63360, 1, 43, 100)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2520, ticks 63360, elapsed 0, voice: 1 note: 55 velocity 100 event ('note', 63360, 1, 55, 100)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2521, ticks 63360, elapsed 0, voice: 2 note: 50 velocity 100 event ('note', 63360, 1, 50, 100)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2522, ticks 63360, elapsed 0, voice: 3 note: 43 velocity 100 event ('note', 63360, 2, 43, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2523, ticks 63360, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 63360, 2, 55, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2524, ticks 63360, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 63360, 2, 50, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2525, ticks 63360, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 63360, 3, 50, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2526, ticks 63360, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 63360, 3, 55, 100)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2527, ticks 63360, elapsed 0, voice: 0 note: 67 velocity 100 event ('note', 63360, 3, 67, 100)
	0,((( 0 &4)<<5)|( 31 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2528, ticks 63360, elapsed 0, voice: 0 note: 31 velocity 100 event ('note', 63360, 4, 31, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2529, ticks 63360, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 63360, 5, 55, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2530, ticks 63360, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 63360, 10, 35, 100)
	14,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2531, ticks 63588, elapsed 14, voice: 2 note: 50 velocity 0 event ('note', 63588, 1, 50, 0)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2532, ticks 63588, elapsed 0, voice: 1 note: 55 velocity 0 event ('note', 63588, 1, 55, 0)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2533, ticks 63588, elapsed 0, voice: 0 note: 35 velocity 0 event ('note', 63588, 10, 35, 0)
	1,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2534, ticks 63606, elapsed 1, voice: 0 note: 55 velocity 100 event ('note', 63606, 1, 55, 100)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2535, ticks 63606, elapsed 0, voice: 1 note: 50 velocity 100 event ('note', 63606, 1, 50, 100)
	13,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2536, ticks 63816, elapsed 13, voice: 3 note: 43 velocity 0 event ('note', 63816, 1, 43, 0)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2537, ticks 63816, elapsed 0, voice: 1 note: 50 velocity 0 event ('note', 63816, 2, 50, 0)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2538, ticks 63816, elapsed 0, voice: 0 note: 55 velocity 0 event ('note', 63816, 2, 55, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 31 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2547, ticks 63840, elapsed 1, voice: 0 note: 47 velocity 100 event ('note', 63840, 1, 47, 100)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2548, ticks 63840, elapsed 0, voice: 1 note: 55 velocity 100 event ('note', 63840, 1, 55, 100)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2549, ticks 63840, elapsed 0, voice: 2 note: 50 velocity 100 event ('note', 63840, 1, 50, 100)
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2550, ticks 63840, elapsed 0, voice: 3 note: 59 velocity 100 event ('note', 63840, 2, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2551, ticks 63840, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 63840, 2, 54, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2552, ticks 63840, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 63840, 2, 47, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2553, ticks 63840, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 63840, 3, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2554, ticks 63840, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 63840, 3, 54, 100)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2555, ticks 63840, elapsed 0, voice: 0 note: 71 velocity 100 event ('note', 63840, 3, 71, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2556, ticks 63840, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 63840, 4, 35, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2557, ticks 63840, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 63840, 5, 59, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2558, ticks 63840, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 63840, 10, 40, 100)
	7,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2559, ticks 63954, elapsed 7, voice: 3 note: 59 velocity 0 event ('note', 63954, 5, 59, 0)
	7,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2560, ticks 64068, elapsed 7, voice: 2 note: 50 velocity 0 event ('note', 64068, 1, 50, 0)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2561, ticks 64068, elapsed 0, voice: 1 note: 55 velocity 0 event ('note', 64068, 1, 55, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2567, ticks 64068, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 64068, 10, 40, 0)
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2568, ticks 64086, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 64086, 1, 43, 100)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2569, ticks 64086, elapsed 0, voice: 1 note: 55 velocity 100 event ('note', 64086, 1, 55, 100)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2570, ticks 64086, elapsed 0, voice: 2 note: 50 velocity 100 event ('note', 64086, 1, 50, 100)
	0,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2571, ticks 64086, elapsed 0, voice: 3 note: 50 velocity 100 event ('note', 64086, 2, 50, 100)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2572, ticks 64086, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 64086, 2, 43, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2573, ticks 64086, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 64086, 3, 50, 100)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2574, ticks 64086, elapsed 0, voice: 0 note: 67 velocity 100 event ('note', 64086, 3, 67, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2575, ticks 64086, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 64086, 5, 59, 100)
	13,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2576, ticks 64296, elapsed 13, voice: 0 note: 59 velocity 0 event ('note', 64296, 2, 59, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	1,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2579, ticks 64314, elapsed 1, voice: 2 note: 50 velocity 0 event ('note', 64314, 1, 50, 0)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2580, ticks 64314, elapsed 0, voice: 1 note: 55 velocity 0 event ('note', 64314, 1, 55, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2582, ticks 64314, elapsed 0, voice: 3 note: 50 velocity 0 event ('note', 64314, 2, 50, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2587, ticks 64320, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 64320, 1, 48, 100)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2588, ticks 64320, elapsed 0, voice: 1 note: 55 velocity 100 event ('note', 64320, 1, 55, 100)
	0,((( 2 &4)<<5)|( 48 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2589, ticks 64320, elapsed 0, voice: 2 note: 48 velocity 100 event ('note', 64320, 1, 48, 100)
	0,((( 3 &4)<<5)|( 60 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2590, ticks 64320, elapsed 0, voice: 3 note: 60 velocity 100 event ('note', 64320, 2, 60, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2591, ticks 64320, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 64320, 2, 55, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2592, ticks 64320, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 64320, 2, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2593, ticks 64320, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 64320, 3, 60, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2594, ticks 64320, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 64320, 3, 55, 100)
	0,((( 0 &4)<<5)|( 72 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2595, ticks 64320, elapsed 0, voice: 0 note: 72 velocity 100 event ('note', 64320, 3, 72, 100)
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2596, ticks 64320, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 64320, 4, 36, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2597, ticks 64320, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 64320, 5, 60, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2598, ticks 64320, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 64320, 10, 35, 100)
	14,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2599, ticks 64548, elapsed 14, voice: 1 note: 55 velocity 0 event ('note', 64548, 1, 55, 0)
	0,((( 2 &4)<<5)|( 48 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2600, ticks 64548, elapsed 0, voice: 2 note: 48 velocity 0 event ('note', 64548, 1, 48, 0)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2601, ticks 64548, elapsed 0, voice: 0 note: 35 velocity 0 event ('note', 64548, 10, 35, 0)
	1,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2602, ticks 64566, elapsed 1, voice: 0 note: 48 velocity 100 event ('note', 64566, 1, 48, 100)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2603, ticks 64566, elapsed 0, voice: 1 note: 55 velocity 100 event ('note', 64566, 1, 55, 100)
	13,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2604, ticks 64776, elapsed 13, voice: 0 note: 48 velocity 0 event ('note', 64776, 1, 48, 0)
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2606, ticks 64776, elapsed 0, voice: 1 note: 55 velocity 0 event ('note', 64776, 2, 55, 0)
	0,((( 3 &4)<<5)|( 60 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2607, ticks 64776, elapsed 0, voice: 3 note: 60 velocity 0 event ('note', 64776, 2, 60, 0)
	// Note off skipped, note 72 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 36 not found in channels, probably interrupted
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2615, ticks 64800, elapsed 1, voice: 0 note: 47 velocity 100 event ('note', 64800, 1, 47, 100)
	0,((( 1 &4)<<5)|( 48 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2616, ticks 64800, elapsed 0, voice: 1 note: 48 velocity 100 event ('note', 64800, 1, 48, 100)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2617, ticks 64800, elapsed 0, voice: 2 note: 55 velocity 100 event ('note', 64800, 1, 55, 100)
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2618, ticks 64800, elapsed 0, voice: 3 note: 59 velocity 100 event ('note', 64800, 2, 59, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2619, ticks 64800, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 64800, 2, 47, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2620, ticks 64800, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 64800, 2, 54, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2621, ticks 64800, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 64800, 3, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2622, ticks 64800, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 64800, 3, 54, 100)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2623, ticks 64800, elapsed 0, voice: 0 note: 71 velocity 100 event ('note', 64800, 3, 71, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2624, ticks 64800, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 64800, 4, 35, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2625, ticks 64800, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 64800, 5, 59, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2626, ticks 64800, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 64800, 10, 40, 100)
	14,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2627, ticks 65028, elapsed 14, voice: 2 note: 55 velocity 0 event ('note', 65028, 1, 55, 0)
	0,((( 1 &4)<<5)|( 48 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2628, ticks 65028, elapsed 0, voice: 1 note: 48 velocity 0 event ('note', 65028, 1, 48, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2632, ticks 65028, elapsed 0, voice: 3 note: 59 velocity 0 event ('note', 65028, 2, 59, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2638, ticks 65028, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 65028, 10, 40, 0)
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2639, ticks 65046, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 65046, 1, 43, 100)
	0,((( 1 &4)<<5)|( 48 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2640, ticks 65046, elapsed 0, voice: 1 note: 48 velocity 100 event ('note', 65046, 1, 48, 100)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2641, ticks 65046, elapsed 0, voice: 2 note: 55 velocity 100 event ('note', 65046, 1, 55, 100)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2642, ticks 65046, elapsed 0, voice: 3 note: 55 velocity 100 event ('note', 65046, 2, 55, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2643, ticks 65046, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 65046, 2, 50, 100)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2644, ticks 65046, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 65046, 2, 43, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2645, ticks 65046, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 65046, 3, 55, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2646, ticks 65046, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 65046, 3, 50, 100)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2647, ticks 65046, elapsed 0, voice: 0 note: 67 velocity 100 event ('note', 65046, 3, 67, 100)
	0,((( 0 &4)<<5)|( 31 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2648, ticks 65046, elapsed 0, voice: 0 note: 31 velocity 100 event ('note', 65046, 4, 31, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2649, ticks 65046, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 65046, 5, 55, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2650, ticks 65046, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 65046, 10, 40, 100)
	14,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2651, ticks 65274, elapsed 14, voice: 2 note: 55 velocity 0 event ('note', 65274, 1, 55, 0)
	0,((( 1 &4)<<5)|( 48 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2652, ticks 65274, elapsed 0, voice: 1 note: 48 velocity 0 event ('note', 65274, 1, 48, 0)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2653, ticks 65274, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 65274, 10, 40, 0)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2654, ticks 65280, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 65280, 1, 50, 100)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2655, ticks 65280, elapsed 0, voice: 1 note: 55 velocity 100 event ('note', 65280, 1, 55, 100)
	0,((( 2 &4)<<5)|( 35 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2656, ticks 65280, elapsed 0, voice: 2 note: 35 velocity 100 event ('note', 65280, 10, 35, 100)
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	14,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2659, ticks 65502, elapsed 14, voice: 0 note: 50 velocity 0 event ('note', 65502, 2, 50, 0)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2660, ticks 65502, elapsed 0, voice: 1 note: 55 velocity 0 event ('note', 65502, 2, 55, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2663, ticks 65502, elapsed 0, voice: 3 note: 55 velocity 0 event ('note', 65502, 3, 55, 0)
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 35 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2667, ticks 65508, elapsed 0, voice: 2 note: 35 velocity 0 event ('note', 65508, 10, 35, 0)
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2668, ticks 65526, elapsed 1, voice: 0 note: 47 velocity 100 event ('note', 65526, 1, 47, 100)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2669, ticks 65526, elapsed 0, voice: 1 note: 50 velocity 100 event ('note', 65526, 1, 50, 100)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2670, ticks 65526, elapsed 0, voice: 2 note: 55 velocity 100 event ('note', 65526, 1, 55, 100)
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2671, ticks 65526, elapsed 0, voice: 3 note: 59 velocity 100 event ('note', 65526, 2, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2672, ticks 65526, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 65526, 2, 54, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2673, ticks 65526, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 65526, 2, 47, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2674, ticks 65526, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 65526, 3, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2675, ticks 65526, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 65526, 3, 54, 100)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2676, ticks 65526, elapsed 0, voice: 0 note: 71 velocity 100 event ('note', 65526, 3, 71, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2677, ticks 65526, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 65526, 5, 59, 100)
	14,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2678, ticks 65754, elapsed 14, voice: 2 note: 55 velocity 0 event ('note', 65754, 1, 55, 0)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2679, ticks 65754, elapsed 0, voice: 1 note: 50 velocity 0 event ('note', 65754, 1, 50, 0)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2680, ticks 65760, elapsed 0, voice: 1 note: 50 velocity 100 event ('note', 65760, 1, 50, 100)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2681, ticks 65760, elapsed 0, voice: 2 note: 55 velocity 100 event ('note', 65760, 1, 55, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2682, ticks 65760, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 65760, 4, 35, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2683, ticks 65760, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 65760, 10, 40, 100)
	// Note off skipped, note 31 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	14,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2688, ticks 65982, elapsed 14, voice: 3 note: 59 velocity 0 event ('note', 65982, 2, 59, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2693, ticks 65988, elapsed 0, voice: 1 note: 50 velocity 0 event ('note', 65988, 1, 50, 0)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2694, ticks 65988, elapsed 0, voice: 2 note: 55 velocity 0 event ('note', 65988, 1, 55, 0)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2695, ticks 65988, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 65988, 10, 40, 0)
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2696, ticks 66006, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 66006, 1, 43, 100)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2697, ticks 66006, elapsed 0, voice: 1 note: 50 velocity 100 event ('note', 66006, 1, 50, 100)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2698, ticks 66006, elapsed 0, voice: 2 note: 55 velocity 100 event ('note', 66006, 1, 55, 100)
	0,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2699, ticks 66006, elapsed 0, voice: 3 note: 50 velocity 100 event ('note', 66006, 2, 50, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2700, ticks 66006, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 66006, 2, 55, 100)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2701, ticks 66006, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 66006, 2, 43, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2702, ticks 66006, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 66006, 3, 50, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2703, ticks 66006, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 66006, 3, 55, 100)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2704, ticks 66006, elapsed 0, voice: 0 note: 67 velocity 100 event ('note', 66006, 3, 67, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2705, ticks 66006, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 66006, 5, 55, 100)
	// Note off skipped, note 35 not found in channels, probably interrupted
	14,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2707, ticks 66234, elapsed 14, voice: 0 note: 55 velocity 0 event ('note', 66234, 1, 55, 0)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2708, ticks 66234, elapsed 0, voice: 1 note: 50 velocity 0 event ('note', 66234, 1, 50, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2711, ticks 66234, elapsed 0, voice: 2 note: 55 velocity 0 event ('note', 66234, 2, 55, 0)
	0,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2712, ticks 66234, elapsed 0, voice: 3 note: 50 velocity 0 event ('note', 66234, 2, 50, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2717, ticks 66240, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 66240, 1, 48, 100)
	0,((( 1 &4)<<5)|( 48 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2718, ticks 66240, elapsed 0, voice: 1 note: 48 velocity 100 event ('note', 66240, 1, 48, 100)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2719, ticks 66240, elapsed 0, voice: 2 note: 55 velocity 100 event ('note', 66240, 1, 55, 100)
	0,((( 3 &4)<<5)|( 60 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2720, ticks 66240, elapsed 0, voice: 3 note: 60 velocity 100 event ('note', 66240, 2, 60, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2721, ticks 66240, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 66240, 2, 55, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2722, ticks 66240, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 66240, 2, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2723, ticks 66240, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 66240, 3, 60, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2724, ticks 66240, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 66240, 3, 55, 100)
	0,((( 0 &4)<<5)|( 72 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2725, ticks 66240, elapsed 0, voice: 0 note: 72 velocity 100 event ('note', 66240, 3, 72, 100)
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2726, ticks 66240, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 66240, 4, 36, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2727, ticks 66240, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 66240, 5, 60, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2728, ticks 66240, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 66240, 10, 35, 100)
	14,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2729, ticks 66468, elapsed 14, voice: 2 note: 55 velocity 0 event ('note', 66468, 1, 55, 0)
	0,((( 1 &4)<<5)|( 48 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2730, ticks 66468, elapsed 0, voice: 1 note: 48 velocity 0 event ('note', 66468, 1, 48, 0)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2731, ticks 66468, elapsed 0, voice: 0 note: 35 velocity 0 event ('note', 66468, 10, 35, 0)
	1,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2732, ticks 66486, elapsed 1, voice: 0 note: 48 velocity 100 event ('note', 66486, 1, 48, 100)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2733, ticks 66486, elapsed 0, voice: 1 note: 55 velocity 100 event ('note', 66486, 1, 55, 100)
	13,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2734, ticks 66696, elapsed 13, voice: 0 note: 48 velocity 0 event ('note', 66696, 1, 48, 0)
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2736, ticks 66696, elapsed 0, voice: 1 note: 55 velocity 0 event ('note', 66696, 2, 55, 0)
	0,((( 3 &4)<<5)|( 60 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2737, ticks 66696, elapsed 0, voice: 3 note: 60 velocity 0 event ('note', 66696, 2, 60, 0)
	// Note off skipped, note 72 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 36 not found in channels, probably interrupted
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2745, ticks 66720, elapsed 1, voice: 0 note: 47 velocity 100 event ('note', 66720, 1, 47, 100)
	0,((( 1 &4)<<5)|( 48 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2746, ticks 66720, elapsed 0, voice: 1 note: 48 velocity 100 event ('note', 66720, 1, 48, 100)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2747, ticks 66720, elapsed 0, voice: 2 note: 55 velocity 100 event ('note', 66720, 1, 55, 100)
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2748, ticks 66720, elapsed 0, voice: 3 note: 59 velocity 100 event ('note', 66720, 2, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2749, ticks 66720, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 66720, 2, 54, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2750, ticks 66720, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 66720, 2, 47, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2751, ticks 66720, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 66720, 3, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2752, ticks 66720, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 66720, 3, 54, 100)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2753, ticks 66720, elapsed 0, voice: 0 note: 71 velocity 100 event ('note', 66720, 3, 71, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2754, ticks 66720, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 66720, 4, 35, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2755, ticks 66720, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 66720, 5, 59, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2756, ticks 66720, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 66720, 10, 40, 100)
	14,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2757, ticks 66948, elapsed 14, voice: 2 note: 55 velocity 0 event ('note', 66948, 1, 55, 0)
	0,((( 1 &4)<<5)|( 48 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2758, ticks 66948, elapsed 0, voice: 1 note: 48 velocity 0 event ('note', 66948, 1, 48, 0)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2759, ticks 66948, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 66948, 10, 40, 0)
	1,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2760, ticks 66966, elapsed 1, voice: 0 note: 48 velocity 100 event ('note', 66966, 1, 48, 100)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2761, ticks 66966, elapsed 0, voice: 1 note: 55 velocity 100 event ('note', 66966, 1, 55, 100)
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	13,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2765, ticks 67176, elapsed 13, voice: 3 note: 59 velocity 0 event ('note', 67176, 2, 59, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2771, ticks 67194, elapsed 1, voice: 0 note: 48 velocity 0 event ('note', 67194, 1, 48, 0)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2772, ticks 67194, elapsed 0, voice: 1 note: 55 velocity 0 event ('note', 67194, 1, 55, 0)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2773, ticks 67200, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 67200, 1, 43, 100)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2774, ticks 67200, elapsed 0, voice: 1 note: 55 velocity 100 event ('note', 67200, 1, 55, 100)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2775, ticks 67200, elapsed 0, voice: 2 note: 50 velocity 100 event ('note', 67200, 1, 50, 100)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2776, ticks 67200, elapsed 0, voice: 3 note: 55 velocity 100 event ('note', 67200, 2, 55, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2777, ticks 67200, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 67200, 2, 50, 100)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2778, ticks 67200, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 67200, 2, 43, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2779, ticks 67200, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 67200, 3, 55, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2780, ticks 67200, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 67200, 3, 50, 100)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2781, ticks 67200, elapsed 0, voice: 0 note: 67 velocity 100 event ('note', 67200, 3, 67, 100)
	0,((( 0 &4)<<5)|( 31 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2782, ticks 67200, elapsed 0, voice: 0 note: 31 velocity 100 event ('note', 67200, 4, 31, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2783, ticks 67200, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 67200, 5, 55, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2784, ticks 67200, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 67200, 10, 35, 100)
	14,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2785, ticks 67428, elapsed 14, voice: 2 note: 50 velocity 0 event ('note', 67428, 1, 50, 0)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2786, ticks 67428, elapsed 0, voice: 1 note: 55 velocity 0 event ('note', 67428, 1, 55, 0)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2787, ticks 67428, elapsed 0, voice: 0 note: 35 velocity 0 event ('note', 67428, 10, 35, 0)
	1,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2788, ticks 67446, elapsed 1, voice: 0 note: 55 velocity 100 event ('note', 67446, 1, 55, 100)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2789, ticks 67446, elapsed 0, voice: 1 note: 50 velocity 100 event ('note', 67446, 1, 50, 100)
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2792, ticks 67656, elapsed 13, voice: 1 note: 50 velocity 0 event ('note', 67656, 2, 50, 0)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2793, ticks 67656, elapsed 0, voice: 0 note: 55 velocity 0 event ('note', 67656, 2, 55, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2796, ticks 67656, elapsed 0, voice: 3 note: 55 velocity 0 event ('note', 67656, 3, 55, 0)
	// Note off skipped, note 31 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2801, ticks 67680, elapsed 1, voice: 0 note: 47 velocity 100 event ('note', 67680, 1, 47, 100)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2802, ticks 67680, elapsed 0, voice: 1 note: 55 velocity 100 event ('note', 67680, 1, 55, 100)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2803, ticks 67680, elapsed 0, voice: 2 note: 50 velocity 100 event ('note', 67680, 1, 50, 100)
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2804, ticks 67680, elapsed 0, voice: 3 note: 59 velocity 100 event ('note', 67680, 2, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2805, ticks 67680, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 67680, 2, 54, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2806, ticks 67680, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 67680, 2, 47, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2807, ticks 67680, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 67680, 3, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2808, ticks 67680, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 67680, 3, 54, 100)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2809, ticks 67680, elapsed 0, voice: 0 note: 71 velocity 100 event ('note', 67680, 3, 71, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2810, ticks 67680, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 67680, 4, 35, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2811, ticks 67680, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 67680, 5, 59, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2812, ticks 67680, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 67680, 10, 40, 100)
	14,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2813, ticks 67908, elapsed 14, voice: 2 note: 50 velocity 0 event ('note', 67908, 1, 50, 0)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2814, ticks 67908, elapsed 0, voice: 1 note: 55 velocity 0 event ('note', 67908, 1, 55, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2820, ticks 67908, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 67908, 10, 40, 0)
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2821, ticks 67926, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 67926, 1, 43, 100)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2822, ticks 67926, elapsed 0, voice: 1 note: 55 velocity 100 event ('note', 67926, 1, 55, 100)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2823, ticks 67926, elapsed 0, voice: 2 note: 50 velocity 100 event ('note', 67926, 1, 50, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2824, ticks 67926, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 67926, 2, 50, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2825, ticks 67926, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 67926, 2, 55, 100)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2826, ticks 67926, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 67926, 2, 43, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2827, ticks 67926, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 67926, 3, 50, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2828, ticks 67926, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 67926, 3, 55, 100)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2829, ticks 67926, elapsed 0, voice: 0 note: 67 velocity 100 event ('note', 67926, 3, 67, 100)
	13,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2830, ticks 68136, elapsed 13, voice: 3 note: 59 velocity 0 event ('note', 68136, 2, 59, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	1,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2834, ticks 68154, elapsed 1, voice: 2 note: 50 velocity 0 event ('note', 68154, 1, 50, 0)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2835, ticks 68154, elapsed 0, voice: 1 note: 55 velocity 0 event ('note', 68154, 1, 55, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2842, ticks 68154, elapsed 0, voice: 0 note: 67 velocity 0 event ('note', 68154, 3, 67, 0)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2843, ticks 68160, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 68160, 1, 48, 100)
	0,((( 1 &4)<<5)|( 48 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2844, ticks 68160, elapsed 0, voice: 1 note: 48 velocity 100 event ('note', 68160, 1, 48, 100)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2845, ticks 68160, elapsed 0, voice: 2 note: 55 velocity 100 event ('note', 68160, 1, 55, 100)
	0,((( 3 &4)<<5)|( 60 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2846, ticks 68160, elapsed 0, voice: 3 note: 60 velocity 100 event ('note', 68160, 2, 60, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2847, ticks 68160, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 68160, 2, 55, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2848, ticks 68160, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 68160, 2, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2849, ticks 68160, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 68160, 3, 60, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2850, ticks 68160, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 68160, 3, 55, 100)
	0,((( 0 &4)<<5)|( 72 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2851, ticks 68160, elapsed 0, voice: 0 note: 72 velocity 100 event ('note', 68160, 3, 72, 100)
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2852, ticks 68160, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 68160, 4, 36, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2853, ticks 68160, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 68160, 5, 60, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2854, ticks 68160, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 68160, 10, 35, 100)
	14,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2855, ticks 68388, elapsed 14, voice: 2 note: 55 velocity 0 event ('note', 68388, 1, 55, 0)
	0,((( 1 &4)<<5)|( 48 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2856, ticks 68388, elapsed 0, voice: 1 note: 48 velocity 0 event ('note', 68388, 1, 48, 0)
	// Note off skipped, note 36 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2858, ticks 68388, elapsed 0, voice: 0 note: 35 velocity 0 event ('note', 68388, 10, 35, 0)
	1,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2859, ticks 68406, elapsed 1, voice: 0 note: 48 velocity 100 event ('note', 68406, 1, 48, 100)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2860, ticks 68406, elapsed 0, voice: 1 note: 55 velocity 100 event ('note', 68406, 1, 55, 100)
	0,((( 2 &4)<<5)|( 36 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2861, ticks 68406, elapsed 0, voice: 2 note: 36 velocity 100 event ('note', 68406, 4, 36, 100)
	13,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2862, ticks 68616, elapsed 13, voice: 0 note: 48 velocity 0 event ('note', 68616, 1, 48, 0)
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2864, ticks 68616, elapsed 0, voice: 1 note: 55 velocity 0 event ('note', 68616, 2, 55, 0)
	0,((( 3 &4)<<5)|( 60 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2865, ticks 68616, elapsed 0, voice: 3 note: 60 velocity 0 event ('note', 68616, 2, 60, 0)
	// Note off skipped, note 72 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	1,((( 2 &4)<<5)|( 36 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2872, ticks 68634, elapsed 1, voice: 2 note: 36 velocity 0 event ('note', 68634, 4, 36, 0)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2873, ticks 68640, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 68640, 1, 47, 100)
	0,((( 1 &4)<<5)|( 48 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2874, ticks 68640, elapsed 0, voice: 1 note: 48 velocity 100 event ('note', 68640, 1, 48, 100)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2875, ticks 68640, elapsed 0, voice: 2 note: 55 velocity 100 event ('note', 68640, 1, 55, 100)
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2876, ticks 68640, elapsed 0, voice: 3 note: 59 velocity 100 event ('note', 68640, 2, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2877, ticks 68640, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 68640, 2, 54, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2878, ticks 68640, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 68640, 2, 47, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2879, ticks 68640, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 68640, 3, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2880, ticks 68640, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 68640, 3, 54, 100)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2881, ticks 68640, elapsed 0, voice: 0 note: 71 velocity 100 event ('note', 68640, 3, 71, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2882, ticks 68640, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 68640, 4, 35, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2883, ticks 68640, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 68640, 5, 59, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2884, ticks 68640, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 68640, 10, 40, 100)
	14,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2885, ticks 68868, elapsed 14, voice: 2 note: 55 velocity 0 event ('note', 68868, 1, 55, 0)
	0,((( 1 &4)<<5)|( 48 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2886, ticks 68868, elapsed 0, voice: 1 note: 48 velocity 0 event ('note', 68868, 1, 48, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2890, ticks 68868, elapsed 0, voice: 3 note: 59 velocity 0 event ('note', 68868, 2, 59, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2895, ticks 68868, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 68868, 10, 40, 0)
	1,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2896, ticks 68886, elapsed 1, voice: 0 note: 55 velocity 100 event ('note', 68886, 1, 55, 100)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2897, ticks 68886, elapsed 0, voice: 1 note: 50 velocity 100 event ('note', 68886, 1, 50, 100)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2898, ticks 68886, elapsed 0, voice: 2 note: 43 velocity 100 event ('note', 68886, 1, 43, 100)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2899, ticks 68886, elapsed 0, voice: 3 note: 55 velocity 100 event ('note', 68886, 2, 55, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2900, ticks 68886, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 68886, 2, 50, 100)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2901, ticks 68886, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 68886, 2, 43, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2902, ticks 68886, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 68886, 3, 55, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2903, ticks 68886, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 68886, 3, 50, 100)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2904, ticks 68886, elapsed 0, voice: 0 note: 67 velocity 100 event ('note', 68886, 3, 67, 100)
	0,((( 0 &4)<<5)|( 31 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2905, ticks 68886, elapsed 0, voice: 0 note: 31 velocity 100 event ('note', 68886, 4, 31, 100)
	// Note off skipped, note 59 not found in channels, probably interrupted
	14,((( 0 &4)<<5)|( 31 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2907, ticks 69114, elapsed 14, voice: 0 note: 31 velocity 0 event ('note', 69114, 4, 31, 0)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2908, ticks 69120, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 69120, 5, 55, 100)
	15,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2909, ticks 69366, elapsed 15, voice: 0 note: 55 velocity 0 event ('note', 69366, 2, 55, 0)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2910, ticks 69366, elapsed 0, voice: 3 note: 55 velocity 0 event ('note', 69366, 3, 55, 0)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2911, ticks 69366, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 69366, 10, 38, 100)
	0,((( 3 &4)<<5)|( 40 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2912, ticks 69379, elapsed 0, voice: 3 note: 40 velocity 100 event ('note', 69379, 10, 40, 100)
	13,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2913, ticks 69594, elapsed 13, voice: 0 note: 38 velocity 0 event ('note', 69594, 10, 38, 0)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2914, ticks 69600, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 69600, 1, 43, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2915, ticks 69600, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 69600, 1, 50, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2916, ticks 69600, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 69600, 1, 55, 100)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2917, ticks 69600, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 69600, 10, 38, 100)
	0,((( 3 &4)<<5)|( 40 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2918, ticks 69607, elapsed 0, voice: 3 note: 40 velocity 0 event ('note', 69607, 10, 40, 0)
	0,((( 3 &4)<<5)|( 40 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2919, ticks 69612, elapsed 0, voice: 3 note: 40 velocity 100 event ('note', 69612, 10, 40, 100)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2920, ticks 69613, elapsed 0, voice: 1 note: 50 velocity 0 event ('note', 69613, 2, 50, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	6,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2922, ticks 69714, elapsed 6, voice: 2 note: 43 velocity 0 event ('note', 69714, 1, 43, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	7,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2927, ticks 69828, elapsed 7, voice: 0 note: 38 velocity 0 event ('note', 69828, 10, 38, 0)
	0,((( 3 &4)<<5)|( 40 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2928, ticks 69840, elapsed 0, voice: 3 note: 40 velocity 0 event ('note', 69840, 10, 40, 0)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2929, ticks 69846, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 69846, 1, 55, 100)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2930, ticks 69846, elapsed 0, voice: 1 note: 50 velocity 100 event ('note', 69846, 1, 50, 100)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2931, ticks 69846, elapsed 0, voice: 2 note: 43 velocity 100 event ('note', 69846, 1, 43, 100)
	7,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2932, ticks 69960, elapsed 7, voice: 2 note: 43 velocity 0 event ('note', 69960, 1, 43, 0)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2933, ticks 69960, elapsed 0, voice: 1 note: 50 velocity 0 event ('note', 69960, 1, 50, 0)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2934, ticks 69960, elapsed 0, voice: 0 note: 55 velocity 0 event ('note', 69960, 1, 55, 0)
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	7,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2939, ticks 70080, elapsed 7, voice: 0 note: 55 velocity 100 event ('note', 70080, 1, 55, 100)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2940, ticks 70080, elapsed 0, voice: 1 note: 50 velocity 100 event ('note', 70080, 1, 50, 100)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2941, ticks 70080, elapsed 0, voice: 2 note: 43 velocity 100 event ('note', 70080, 1, 43, 100)
	14,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2942, ticks 70308, elapsed 14, voice: 2 note: 43 velocity 0 event ('note', 70308, 1, 43, 0)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2943, ticks 70308, elapsed 0, voice: 1 note: 50 velocity 0 event ('note', 70308, 1, 50, 0)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2944, ticks 70308, elapsed 0, voice: 0 note: 55 velocity 0 event ('note', 70308, 1, 55, 0)
	1,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2945, ticks 70326, elapsed 1, voice: 0 note: 55 velocity 100 event ('note', 70326, 1, 55, 100)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2946, ticks 70326, elapsed 0, voice: 1 note: 50 velocity 100 event ('note', 70326, 1, 50, 100)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2947, ticks 70326, elapsed 0, voice: 2 note: 43 velocity 100 event ('note', 70326, 1, 43, 100)
	0,((( 3 &4)<<5)|( 38 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2948, ticks 70326, elapsed 0, voice: 3 note: 38 velocity 100 event ('note', 70326, 10, 38, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2949, ticks 70339, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 70339, 10, 40, 100)
	13,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2950, ticks 70554, elapsed 13, voice: 2 note: 43 velocity 0 event ('note', 70554, 1, 43, 0)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2951, ticks 70554, elapsed 0, voice: 1 note: 50 velocity 0 event ('note', 70554, 1, 50, 0)
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 38 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2953, ticks 70554, elapsed 0, voice: 3 note: 38 velocity 0 event ('note', 70554, 10, 38, 0)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2954, ticks 70560, elapsed 0, voice: 1 note: 55 velocity 100 event ('note', 70560, 1, 55, 100)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2955, ticks 70560, elapsed 0, voice: 2 note: 50 velocity 100 event ('note', 70560, 1, 50, 100)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2956, ticks 70560, elapsed 0, voice: 3 note: 55 velocity 100 event ('note', 70560, 5, 55, 100)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2957, ticks 70560, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 70560, 10, 38, 100)
	// Note off skipped, note 40 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2959, ticks 70572, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 70572, 10, 40, 100)
	13,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2960, ticks 70788, elapsed 13, voice: 2 note: 50 velocity 0 event ('note', 70788, 1, 50, 0)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2961, ticks 70788, elapsed 0, voice: 1 note: 55 velocity 0 event ('note', 70788, 1, 55, 0)
	// Note off skipped, note 38 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2963, ticks 70800, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 70800, 10, 40, 0)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2964, ticks 70806, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 70806, 1, 55, 100)
	13,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2965, ticks 71016, elapsed 13, voice: 0 note: 55 velocity 0 event ('note', 71016, 5, 55, 0)
	1,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2966, ticks 71034, elapsed 1, voice: 3 note: 55 velocity 0 event ('note', 71034, 1, 55, 0)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2967, ticks 71040, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 71040, 1, 50, 100)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2968, ticks 71040, elapsed 0, voice: 1 note: 55 velocity 100 event ('note', 71040, 1, 55, 100)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2969, ticks 71040, elapsed 0, voice: 2 note: 43 velocity 100 event ('note', 71040, 1, 43, 100)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2970, ticks 71040, elapsed 0, voice: 3 note: 43 velocity 100 event ('note', 71040, 2, 43, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2971, ticks 71040, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 71040, 2, 55, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2972, ticks 71040, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 71040, 2, 50, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2973, ticks 71040, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 71040, 3, 50, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2974, ticks 71040, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 71040, 3, 55, 100)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2975, ticks 71040, elapsed 0, voice: 0 note: 67 velocity 100 event ('note', 71040, 3, 67, 100)
	0,((( 0 &4)<<5)|( 31 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2976, ticks 71040, elapsed 0, voice: 0 note: 31 velocity 100 event ('note', 71040, 4, 31, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2977, ticks 71040, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 71040, 5, 55, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2978, ticks 71040, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 71040, 10, 35, 100)
	14,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2979, ticks 71268, elapsed 14, voice: 1 note: 55 velocity 0 event ('note', 71268, 1, 55, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2981, ticks 71268, elapsed 0, voice: 0 note: 35 velocity 0 event ('note', 71268, 10, 35, 0)
	1,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2982, ticks 71286, elapsed 1, voice: 0 note: 55 velocity 100 event ('note', 71286, 1, 55, 100)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2983, ticks 71286, elapsed 0, voice: 1 note: 50 velocity 100 event ('note', 71286, 1, 50, 100)
	13,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2984, ticks 71496, elapsed 13, voice: 2 note: 43 velocity 0 event ('note', 71496, 1, 43, 0)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2985, ticks 71496, elapsed 0, voice: 1 note: 50 velocity 0 event ('note', 71496, 2, 50, 0)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2986, ticks 71496, elapsed 0, voice: 0 note: 55 velocity 0 event ('note', 71496, 2, 55, 0)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2987, ticks 71496, elapsed 0, voice: 3 note: 43 velocity 0 event ('note', 71496, 2, 43, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 31 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2995, ticks 71520, elapsed 1, voice: 0 note: 47 velocity 100 event ('note', 71520, 1, 47, 100)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2996, ticks 71520, elapsed 0, voice: 1 note: 55 velocity 100 event ('note', 71520, 1, 55, 100)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 2997, ticks 71520, elapsed 0, voice: 2 note: 50 velocity 100 event ('note', 71520, 1, 50, 100)
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2998, ticks 71520, elapsed 0, voice: 3 note: 59 velocity 100 event ('note', 71520, 2, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 2999, ticks 71520, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 71520, 2, 54, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3000, ticks 71520, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 71520, 2, 47, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3001, ticks 71520, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 71520, 3, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3002, ticks 71520, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 71520, 3, 54, 100)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3003, ticks 71520, elapsed 0, voice: 0 note: 71 velocity 100 event ('note', 71520, 3, 71, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3004, ticks 71520, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 71520, 4, 35, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3005, ticks 71520, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 71520, 5, 59, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3006, ticks 71520, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 71520, 10, 40, 100)
	7,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3007, ticks 71634, elapsed 7, voice: 3 note: 59 velocity 0 event ('note', 71634, 5, 59, 0)
	7,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3008, ticks 71748, elapsed 7, voice: 2 note: 50 velocity 0 event ('note', 71748, 1, 50, 0)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3009, ticks 71748, elapsed 0, voice: 1 note: 55 velocity 0 event ('note', 71748, 1, 55, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3015, ticks 71748, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 71748, 10, 40, 0)
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3016, ticks 71766, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 71766, 1, 43, 100)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3017, ticks 71766, elapsed 0, voice: 1 note: 55 velocity 100 event ('note', 71766, 1, 55, 100)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3018, ticks 71766, elapsed 0, voice: 2 note: 50 velocity 100 event ('note', 71766, 1, 50, 100)
	0,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3019, ticks 71766, elapsed 0, voice: 3 note: 50 velocity 100 event ('note', 71766, 2, 50, 100)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3020, ticks 71766, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 71766, 2, 43, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3021, ticks 71766, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 71766, 3, 50, 100)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3022, ticks 71766, elapsed 0, voice: 0 note: 67 velocity 100 event ('note', 71766, 3, 67, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3023, ticks 71766, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 71766, 5, 59, 100)
	13,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3024, ticks 71976, elapsed 13, voice: 0 note: 59 velocity 0 event ('note', 71976, 2, 59, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	1,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3027, ticks 71994, elapsed 1, voice: 2 note: 50 velocity 0 event ('note', 71994, 1, 50, 0)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3028, ticks 71994, elapsed 0, voice: 1 note: 55 velocity 0 event ('note', 71994, 1, 55, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3030, ticks 71994, elapsed 0, voice: 3 note: 50 velocity 0 event ('note', 71994, 2, 50, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3035, ticks 72000, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 72000, 1, 48, 100)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3036, ticks 72000, elapsed 0, voice: 1 note: 55 velocity 100 event ('note', 72000, 1, 55, 100)
	0,((( 2 &4)<<5)|( 48 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3037, ticks 72000, elapsed 0, voice: 2 note: 48 velocity 100 event ('note', 72000, 1, 48, 100)
	0,((( 3 &4)<<5)|( 60 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3038, ticks 72000, elapsed 0, voice: 3 note: 60 velocity 100 event ('note', 72000, 2, 60, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3039, ticks 72000, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 72000, 2, 55, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3040, ticks 72000, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 72000, 2, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3041, ticks 72000, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 72000, 3, 60, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3042, ticks 72000, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 72000, 3, 55, 100)
	0,((( 0 &4)<<5)|( 72 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3043, ticks 72000, elapsed 0, voice: 0 note: 72 velocity 100 event ('note', 72000, 3, 72, 100)
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3044, ticks 72000, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 72000, 4, 36, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3045, ticks 72000, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 72000, 5, 60, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3046, ticks 72000, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 72000, 10, 35, 100)
	14,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3047, ticks 72228, elapsed 14, voice: 1 note: 55 velocity 0 event ('note', 72228, 1, 55, 0)
	0,((( 2 &4)<<5)|( 48 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3048, ticks 72228, elapsed 0, voice: 2 note: 48 velocity 0 event ('note', 72228, 1, 48, 0)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3049, ticks 72228, elapsed 0, voice: 0 note: 35 velocity 0 event ('note', 72228, 10, 35, 0)
	1,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3050, ticks 72246, elapsed 1, voice: 0 note: 48 velocity 100 event ('note', 72246, 1, 48, 100)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3051, ticks 72246, elapsed 0, voice: 1 note: 55 velocity 100 event ('note', 72246, 1, 55, 100)
	13,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3052, ticks 72456, elapsed 13, voice: 0 note: 48 velocity 0 event ('note', 72456, 1, 48, 0)
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3054, ticks 72456, elapsed 0, voice: 1 note: 55 velocity 0 event ('note', 72456, 2, 55, 0)
	0,((( 3 &4)<<5)|( 60 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3055, ticks 72456, elapsed 0, voice: 3 note: 60 velocity 0 event ('note', 72456, 2, 60, 0)
	// Note off skipped, note 72 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 36 not found in channels, probably interrupted
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3063, ticks 72480, elapsed 1, voice: 0 note: 47 velocity 100 event ('note', 72480, 1, 47, 100)
	0,((( 1 &4)<<5)|( 48 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3064, ticks 72480, elapsed 0, voice: 1 note: 48 velocity 100 event ('note', 72480, 1, 48, 100)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3065, ticks 72480, elapsed 0, voice: 2 note: 55 velocity 100 event ('note', 72480, 1, 55, 100)
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3066, ticks 72480, elapsed 0, voice: 3 note: 59 velocity 100 event ('note', 72480, 2, 59, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3067, ticks 72480, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 72480, 2, 47, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3068, ticks 72480, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 72480, 2, 54, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3069, ticks 72480, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 72480, 3, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3070, ticks 72480, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 72480, 3, 54, 100)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3071, ticks 72480, elapsed 0, voice: 0 note: 71 velocity 100 event ('note', 72480, 3, 71, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3072, ticks 72480, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 72480, 4, 35, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3073, ticks 72480, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 72480, 5, 59, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3074, ticks 72480, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 72480, 10, 40, 100)
	14,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3075, ticks 72708, elapsed 14, voice: 2 note: 55 velocity 0 event ('note', 72708, 1, 55, 0)
	0,((( 1 &4)<<5)|( 48 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3076, ticks 72708, elapsed 0, voice: 1 note: 48 velocity 0 event ('note', 72708, 1, 48, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3080, ticks 72708, elapsed 0, voice: 3 note: 59 velocity 0 event ('note', 72708, 2, 59, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3086, ticks 72708, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 72708, 10, 40, 0)
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3087, ticks 72726, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 72726, 1, 43, 100)
	0,((( 1 &4)<<5)|( 48 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3088, ticks 72726, elapsed 0, voice: 1 note: 48 velocity 100 event ('note', 72726, 1, 48, 100)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3089, ticks 72726, elapsed 0, voice: 2 note: 55 velocity 100 event ('note', 72726, 1, 55, 100)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3090, ticks 72726, elapsed 0, voice: 3 note: 55 velocity 100 event ('note', 72726, 2, 55, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3091, ticks 72726, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 72726, 2, 50, 100)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3092, ticks 72726, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 72726, 2, 43, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3093, ticks 72726, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 72726, 3, 55, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3094, ticks 72726, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 72726, 3, 50, 100)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3095, ticks 72726, elapsed 0, voice: 0 note: 67 velocity 100 event ('note', 72726, 3, 67, 100)
	0,((( 0 &4)<<5)|( 31 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3096, ticks 72726, elapsed 0, voice: 0 note: 31 velocity 100 event ('note', 72726, 4, 31, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3097, ticks 72726, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 72726, 5, 55, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3098, ticks 72726, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 72726, 10, 40, 100)
	14,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3099, ticks 72954, elapsed 14, voice: 2 note: 55 velocity 0 event ('note', 72954, 1, 55, 0)
	0,((( 1 &4)<<5)|( 48 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3100, ticks 72954, elapsed 0, voice: 1 note: 48 velocity 0 event ('note', 72954, 1, 48, 0)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3101, ticks 72954, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 72954, 10, 40, 0)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3102, ticks 72960, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 72960, 1, 50, 100)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3103, ticks 72960, elapsed 0, voice: 1 note: 55 velocity 100 event ('note', 72960, 1, 55, 100)
	0,((( 2 &4)<<5)|( 35 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3104, ticks 72960, elapsed 0, voice: 2 note: 35 velocity 100 event ('note', 72960, 10, 35, 100)
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	14,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3107, ticks 73182, elapsed 14, voice: 0 note: 50 velocity 0 event ('note', 73182, 2, 50, 0)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3108, ticks 73182, elapsed 0, voice: 1 note: 55 velocity 0 event ('note', 73182, 2, 55, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3111, ticks 73182, elapsed 0, voice: 3 note: 55 velocity 0 event ('note', 73182, 3, 55, 0)
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 35 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3115, ticks 73188, elapsed 0, voice: 2 note: 35 velocity 0 event ('note', 73188, 10, 35, 0)
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3116, ticks 73206, elapsed 1, voice: 0 note: 47 velocity 100 event ('note', 73206, 1, 47, 100)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3117, ticks 73206, elapsed 0, voice: 1 note: 50 velocity 100 event ('note', 73206, 1, 50, 100)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3118, ticks 73206, elapsed 0, voice: 2 note: 55 velocity 100 event ('note', 73206, 1, 55, 100)
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3119, ticks 73206, elapsed 0, voice: 3 note: 59 velocity 100 event ('note', 73206, 2, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3120, ticks 73206, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 73206, 2, 54, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3121, ticks 73206, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 73206, 2, 47, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3122, ticks 73206, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 73206, 3, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3123, ticks 73206, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 73206, 3, 54, 100)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3124, ticks 73206, elapsed 0, voice: 0 note: 71 velocity 100 event ('note', 73206, 3, 71, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3125, ticks 73206, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 73206, 5, 59, 100)
	14,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3126, ticks 73434, elapsed 14, voice: 2 note: 55 velocity 0 event ('note', 73434, 1, 55, 0)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3127, ticks 73434, elapsed 0, voice: 1 note: 50 velocity 0 event ('note', 73434, 1, 50, 0)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3128, ticks 73440, elapsed 0, voice: 1 note: 50 velocity 100 event ('note', 73440, 1, 50, 100)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3129, ticks 73440, elapsed 0, voice: 2 note: 55 velocity 100 event ('note', 73440, 1, 55, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3130, ticks 73440, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 73440, 4, 35, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3131, ticks 73440, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 73440, 10, 40, 100)
	// Note off skipped, note 31 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	14,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3136, ticks 73662, elapsed 14, voice: 3 note: 59 velocity 0 event ('note', 73662, 2, 59, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3141, ticks 73668, elapsed 0, voice: 1 note: 50 velocity 0 event ('note', 73668, 1, 50, 0)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3142, ticks 73668, elapsed 0, voice: 2 note: 55 velocity 0 event ('note', 73668, 1, 55, 0)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3143, ticks 73668, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 73668, 10, 40, 0)
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3144, ticks 73686, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 73686, 1, 43, 100)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3145, ticks 73686, elapsed 0, voice: 1 note: 50 velocity 100 event ('note', 73686, 1, 50, 100)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3146, ticks 73686, elapsed 0, voice: 2 note: 55 velocity 100 event ('note', 73686, 1, 55, 100)
	0,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3147, ticks 73686, elapsed 0, voice: 3 note: 50 velocity 100 event ('note', 73686, 2, 50, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3148, ticks 73686, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 73686, 2, 55, 100)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3149, ticks 73686, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 73686, 2, 43, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3150, ticks 73686, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 73686, 3, 50, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3151, ticks 73686, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 73686, 3, 55, 100)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3152, ticks 73686, elapsed 0, voice: 0 note: 67 velocity 100 event ('note', 73686, 3, 67, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3153, ticks 73686, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 73686, 5, 55, 100)
	// Note off skipped, note 35 not found in channels, probably interrupted
	14,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3155, ticks 73914, elapsed 14, voice: 0 note: 55 velocity 0 event ('note', 73914, 1, 55, 0)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3156, ticks 73914, elapsed 0, voice: 1 note: 50 velocity 0 event ('note', 73914, 1, 50, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3159, ticks 73914, elapsed 0, voice: 2 note: 55 velocity 0 event ('note', 73914, 2, 55, 0)
	0,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3160, ticks 73914, elapsed 0, voice: 3 note: 50 velocity 0 event ('note', 73914, 2, 50, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3165, ticks 73920, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 73920, 1, 48, 100)
	0,((( 1 &4)<<5)|( 48 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3166, ticks 73920, elapsed 0, voice: 1 note: 48 velocity 100 event ('note', 73920, 1, 48, 100)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3167, ticks 73920, elapsed 0, voice: 2 note: 55 velocity 100 event ('note', 73920, 1, 55, 100)
	0,((( 3 &4)<<5)|( 60 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3168, ticks 73920, elapsed 0, voice: 3 note: 60 velocity 100 event ('note', 73920, 2, 60, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3169, ticks 73920, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 73920, 2, 55, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3170, ticks 73920, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 73920, 2, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3171, ticks 73920, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 73920, 3, 60, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3172, ticks 73920, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 73920, 3, 55, 100)
	0,((( 0 &4)<<5)|( 72 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3173, ticks 73920, elapsed 0, voice: 0 note: 72 velocity 100 event ('note', 73920, 3, 72, 100)
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3174, ticks 73920, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 73920, 4, 36, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3175, ticks 73920, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 73920, 5, 60, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3176, ticks 73920, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 73920, 10, 35, 100)
	14,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3177, ticks 74148, elapsed 14, voice: 2 note: 55 velocity 0 event ('note', 74148, 1, 55, 0)
	0,((( 1 &4)<<5)|( 48 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3178, ticks 74148, elapsed 0, voice: 1 note: 48 velocity 0 event ('note', 74148, 1, 48, 0)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3179, ticks 74148, elapsed 0, voice: 0 note: 35 velocity 0 event ('note', 74148, 10, 35, 0)
	1,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3180, ticks 74166, elapsed 1, voice: 0 note: 48 velocity 100 event ('note', 74166, 1, 48, 100)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3181, ticks 74166, elapsed 0, voice: 1 note: 55 velocity 100 event ('note', 74166, 1, 55, 100)
	13,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3182, ticks 74376, elapsed 13, voice: 0 note: 48 velocity 0 event ('note', 74376, 1, 48, 0)
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3184, ticks 74376, elapsed 0, voice: 1 note: 55 velocity 0 event ('note', 74376, 2, 55, 0)
	0,((( 3 &4)<<5)|( 60 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3185, ticks 74376, elapsed 0, voice: 3 note: 60 velocity 0 event ('note', 74376, 2, 60, 0)
	// Note off skipped, note 72 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 36 not found in channels, probably interrupted
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3193, ticks 74400, elapsed 1, voice: 0 note: 47 velocity 100 event ('note', 74400, 1, 47, 100)
	0,((( 1 &4)<<5)|( 48 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3194, ticks 74400, elapsed 0, voice: 1 note: 48 velocity 100 event ('note', 74400, 1, 48, 100)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3195, ticks 74400, elapsed 0, voice: 2 note: 55 velocity 100 event ('note', 74400, 1, 55, 100)
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3196, ticks 74400, elapsed 0, voice: 3 note: 59 velocity 100 event ('note', 74400, 2, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3197, ticks 74400, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 74400, 2, 54, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3198, ticks 74400, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 74400, 2, 47, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3199, ticks 74400, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 74400, 3, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3200, ticks 74400, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 74400, 3, 54, 100)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3201, ticks 74400, elapsed 0, voice: 0 note: 71 velocity 100 event ('note', 74400, 3, 71, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3202, ticks 74400, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 74400, 4, 35, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3203, ticks 74400, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 74400, 5, 59, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3204, ticks 74400, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 74400, 10, 40, 100)
	14,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3205, ticks 74628, elapsed 14, voice: 2 note: 55 velocity 0 event ('note', 74628, 1, 55, 0)
	0,((( 1 &4)<<5)|( 48 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3206, ticks 74628, elapsed 0, voice: 1 note: 48 velocity 0 event ('note', 74628, 1, 48, 0)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3207, ticks 74628, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 74628, 10, 40, 0)
	1,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3208, ticks 74646, elapsed 1, voice: 0 note: 48 velocity 100 event ('note', 74646, 1, 48, 100)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3209, ticks 74646, elapsed 0, voice: 1 note: 55 velocity 100 event ('note', 74646, 1, 55, 100)
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	13,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3213, ticks 74856, elapsed 13, voice: 3 note: 59 velocity 0 event ('note', 74856, 2, 59, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3219, ticks 74874, elapsed 1, voice: 0 note: 48 velocity 0 event ('note', 74874, 1, 48, 0)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3220, ticks 74874, elapsed 0, voice: 1 note: 55 velocity 0 event ('note', 74874, 1, 55, 0)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3221, ticks 74880, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 74880, 1, 43, 100)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3222, ticks 74880, elapsed 0, voice: 1 note: 55 velocity 100 event ('note', 74880, 1, 55, 100)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3223, ticks 74880, elapsed 0, voice: 2 note: 50 velocity 100 event ('note', 74880, 1, 50, 100)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3224, ticks 74880, elapsed 0, voice: 3 note: 55 velocity 100 event ('note', 74880, 2, 55, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3225, ticks 74880, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 74880, 2, 50, 100)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3226, ticks 74880, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 74880, 2, 43, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3227, ticks 74880, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 74880, 3, 55, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3228, ticks 74880, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 74880, 3, 50, 100)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3229, ticks 74880, elapsed 0, voice: 0 note: 67 velocity 100 event ('note', 74880, 3, 67, 100)
	0,((( 0 &4)<<5)|( 31 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3230, ticks 74880, elapsed 0, voice: 0 note: 31 velocity 100 event ('note', 74880, 4, 31, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3231, ticks 74880, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 74880, 5, 55, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3232, ticks 74880, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 74880, 10, 35, 100)
	14,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3233, ticks 75108, elapsed 14, voice: 2 note: 50 velocity 0 event ('note', 75108, 1, 50, 0)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3234, ticks 75108, elapsed 0, voice: 1 note: 55 velocity 0 event ('note', 75108, 1, 55, 0)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3235, ticks 75108, elapsed 0, voice: 0 note: 35 velocity 0 event ('note', 75108, 10, 35, 0)
	1,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3236, ticks 75126, elapsed 1, voice: 0 note: 55 velocity 100 event ('note', 75126, 1, 55, 100)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3237, ticks 75126, elapsed 0, voice: 1 note: 50 velocity 100 event ('note', 75126, 1, 50, 100)
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3240, ticks 75336, elapsed 13, voice: 1 note: 50 velocity 0 event ('note', 75336, 2, 50, 0)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3241, ticks 75336, elapsed 0, voice: 0 note: 55 velocity 0 event ('note', 75336, 2, 55, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3244, ticks 75336, elapsed 0, voice: 3 note: 55 velocity 0 event ('note', 75336, 3, 55, 0)
	// Note off skipped, note 31 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3249, ticks 75360, elapsed 1, voice: 0 note: 47 velocity 100 event ('note', 75360, 1, 47, 100)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3250, ticks 75360, elapsed 0, voice: 1 note: 55 velocity 100 event ('note', 75360, 1, 55, 100)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3251, ticks 75360, elapsed 0, voice: 2 note: 50 velocity 100 event ('note', 75360, 1, 50, 100)
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3252, ticks 75360, elapsed 0, voice: 3 note: 59 velocity 100 event ('note', 75360, 2, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3253, ticks 75360, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 75360, 2, 54, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3254, ticks 75360, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 75360, 2, 47, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3255, ticks 75360, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 75360, 3, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3256, ticks 75360, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 75360, 3, 54, 100)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3257, ticks 75360, elapsed 0, voice: 0 note: 71 velocity 100 event ('note', 75360, 3, 71, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3258, ticks 75360, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 75360, 4, 35, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3259, ticks 75360, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 75360, 5, 59, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3260, ticks 75360, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 75360, 10, 40, 100)
	14,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3261, ticks 75588, elapsed 14, voice: 2 note: 50 velocity 0 event ('note', 75588, 1, 50, 0)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3262, ticks 75588, elapsed 0, voice: 1 note: 55 velocity 0 event ('note', 75588, 1, 55, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3268, ticks 75588, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 75588, 10, 40, 0)
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3269, ticks 75606, elapsed 1, voice: 0 note: 43 velocity 100 event ('note', 75606, 1, 43, 100)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3270, ticks 75606, elapsed 0, voice: 1 note: 55 velocity 100 event ('note', 75606, 1, 55, 100)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3271, ticks 75606, elapsed 0, voice: 2 note: 50 velocity 100 event ('note', 75606, 1, 50, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3272, ticks 75606, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 75606, 2, 50, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3273, ticks 75606, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 75606, 2, 55, 100)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3274, ticks 75606, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 75606, 2, 43, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3275, ticks 75606, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 75606, 3, 50, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3276, ticks 75606, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 75606, 3, 55, 100)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3277, ticks 75606, elapsed 0, voice: 0 note: 67 velocity 100 event ('note', 75606, 3, 67, 100)
	13,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3278, ticks 75816, elapsed 13, voice: 3 note: 59 velocity 0 event ('note', 75816, 2, 59, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	1,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3282, ticks 75834, elapsed 1, voice: 2 note: 50 velocity 0 event ('note', 75834, 1, 50, 0)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3283, ticks 75834, elapsed 0, voice: 1 note: 55 velocity 0 event ('note', 75834, 1, 55, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3290, ticks 75834, elapsed 0, voice: 0 note: 67 velocity 0 event ('note', 75834, 3, 67, 0)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3291, ticks 75840, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 75840, 1, 48, 100)
	0,((( 1 &4)<<5)|( 48 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3292, ticks 75840, elapsed 0, voice: 1 note: 48 velocity 100 event ('note', 75840, 1, 48, 100)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3293, ticks 75840, elapsed 0, voice: 2 note: 55 velocity 100 event ('note', 75840, 1, 55, 100)
	0,((( 3 &4)<<5)|( 60 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3294, ticks 75840, elapsed 0, voice: 3 note: 60 velocity 100 event ('note', 75840, 2, 60, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3295, ticks 75840, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 75840, 2, 55, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3296, ticks 75840, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 75840, 2, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3297, ticks 75840, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 75840, 3, 60, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3298, ticks 75840, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 75840, 3, 55, 100)
	0,((( 0 &4)<<5)|( 72 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3299, ticks 75840, elapsed 0, voice: 0 note: 72 velocity 100 event ('note', 75840, 3, 72, 100)
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3300, ticks 75840, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 75840, 4, 36, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3301, ticks 75840, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 75840, 5, 60, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3302, ticks 75840, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 75840, 10, 35, 100)
	14,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3303, ticks 76068, elapsed 14, voice: 2 note: 55 velocity 0 event ('note', 76068, 1, 55, 0)
	0,((( 1 &4)<<5)|( 48 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3304, ticks 76068, elapsed 0, voice: 1 note: 48 velocity 0 event ('note', 76068, 1, 48, 0)
	// Note off skipped, note 36 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3306, ticks 76068, elapsed 0, voice: 0 note: 35 velocity 0 event ('note', 76068, 10, 35, 0)
	1,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3307, ticks 76086, elapsed 1, voice: 0 note: 48 velocity 100 event ('note', 76086, 1, 48, 100)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3308, ticks 76086, elapsed 0, voice: 1 note: 55 velocity 100 event ('note', 76086, 1, 55, 100)
	0,((( 2 &4)<<5)|( 36 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3309, ticks 76086, elapsed 0, voice: 2 note: 36 velocity 100 event ('note', 76086, 4, 36, 100)
	13,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3310, ticks 76296, elapsed 13, voice: 0 note: 48 velocity 0 event ('note', 76296, 1, 48, 0)
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3312, ticks 76296, elapsed 0, voice: 1 note: 55 velocity 0 event ('note', 76296, 2, 55, 0)
	0,((( 3 &4)<<5)|( 60 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3313, ticks 76296, elapsed 0, voice: 3 note: 60 velocity 0 event ('note', 76296, 2, 60, 0)
	// Note off skipped, note 72 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	1,((( 2 &4)<<5)|( 36 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3320, ticks 76314, elapsed 1, voice: 2 note: 36 velocity 0 event ('note', 76314, 4, 36, 0)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3321, ticks 76320, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 76320, 1, 47, 100)
	0,((( 1 &4)<<5)|( 48 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3322, ticks 76320, elapsed 0, voice: 1 note: 48 velocity 100 event ('note', 76320, 1, 48, 100)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3323, ticks 76320, elapsed 0, voice: 2 note: 55 velocity 100 event ('note', 76320, 1, 55, 100)
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3324, ticks 76320, elapsed 0, voice: 3 note: 59 velocity 100 event ('note', 76320, 2, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3325, ticks 76320, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 76320, 2, 54, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3326, ticks 76320, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 76320, 2, 47, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3327, ticks 76320, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 76320, 3, 59, 100)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3328, ticks 76320, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 76320, 3, 54, 100)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3329, ticks 76320, elapsed 0, voice: 0 note: 71 velocity 100 event ('note', 76320, 3, 71, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3330, ticks 76320, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 76320, 4, 35, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3331, ticks 76320, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 76320, 5, 59, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3332, ticks 76320, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 76320, 10, 40, 100)
	14,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3333, ticks 76548, elapsed 14, voice: 2 note: 55 velocity 0 event ('note', 76548, 1, 55, 0)
	0,((( 1 &4)<<5)|( 48 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3334, ticks 76548, elapsed 0, voice: 1 note: 48 velocity 0 event ('note', 76548, 1, 48, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3338, ticks 76548, elapsed 0, voice: 3 note: 59 velocity 0 event ('note', 76548, 2, 59, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3343, ticks 76548, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 76548, 10, 40, 0)
	1,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3344, ticks 76566, elapsed 1, voice: 0 note: 55 velocity 100 event ('note', 76566, 1, 55, 100)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3345, ticks 76566, elapsed 0, voice: 1 note: 50 velocity 100 event ('note', 76566, 1, 50, 100)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3346, ticks 76566, elapsed 0, voice: 2 note: 43 velocity 100 event ('note', 76566, 1, 43, 100)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3347, ticks 76566, elapsed 0, voice: 3 note: 55 velocity 100 event ('note', 76566, 2, 55, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3348, ticks 76566, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 76566, 2, 50, 100)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3349, ticks 76566, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 76566, 2, 43, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3350, ticks 76566, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 76566, 3, 55, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3351, ticks 76566, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 76566, 3, 50, 100)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3352, ticks 76566, elapsed 0, voice: 0 note: 67 velocity 100 event ('note', 76566, 3, 67, 100)
	0,((( 0 &4)<<5)|( 31 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3353, ticks 76566, elapsed 0, voice: 0 note: 31 velocity 100 event ('note', 76566, 4, 31, 100)
	// Note off skipped, note 59 not found in channels, probably interrupted
	14,((( 0 &4)<<5)|( 31 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3355, ticks 76794, elapsed 14, voice: 0 note: 31 velocity 0 event ('note', 76794, 4, 31, 0)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3356, ticks 76800, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 76800, 5, 55, 100)
	15,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3357, ticks 77046, elapsed 15, voice: 0 note: 55 velocity 0 event ('note', 77046, 2, 55, 0)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3358, ticks 77046, elapsed 0, voice: 3 note: 55 velocity 0 event ('note', 77046, 3, 55, 0)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3359, ticks 77046, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 77046, 10, 40, 100)
	7,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3360, ticks 77160, elapsed 7, voice: 0 note: 40 velocity 0 event ('note', 77160, 10, 40, 0)
	1,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3361, ticks 77176, elapsed 1, voice: 0 note: 40 velocity 100 event ('note', 77176, 10, 40, 100)
	6,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3362, ticks 77280, elapsed 6, voice: 3 note: 43 velocity 100 event ('note', 77280, 1, 43, 100)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3363, ticks 77280, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 77280, 1, 50, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3364, ticks 77280, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 77280, 1, 55, 100)
	// Note off skipped, note 40 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3366, ticks 77292, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 77292, 10, 40, 100)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3367, ticks 77293, elapsed 0, voice: 1 note: 50 velocity 0 event ('note', 77293, 2, 50, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	6,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3369, ticks 77394, elapsed 6, voice: 2 note: 43 velocity 0 event ('note', 77394, 1, 43, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3372, ticks 77406, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 77406, 10, 40, 0)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3373, ticks 77409, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 77409, 10, 40, 100)
	3,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3374, ticks 77461, elapsed 3, voice: 3 note: 43 velocity 0 event ('note', 77461, 2, 43, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	3,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3376, ticks 77523, elapsed 3, voice: 0 note: 40 velocity 0 event ('note', 77523, 10, 40, 0)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3377, ticks 77526, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 77526, 1, 55, 100)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3378, ticks 77526, elapsed 0, voice: 1 note: 50 velocity 100 event ('note', 77526, 1, 50, 100)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3379, ticks 77526, elapsed 0, voice: 2 note: 43 velocity 100 event ('note', 77526, 1, 43, 100)
	0,((( 3 &4)<<5)|( 40 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3380, ticks 77526, elapsed 0, voice: 3 note: 40 velocity 100 event ('note', 77526, 10, 40, 100)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3381, ticks 77526, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 77526, 10, 38, 100)
	7,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3382, ticks 77640, elapsed 7, voice: 2 note: 43 velocity 0 event ('note', 77640, 1, 43, 0)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3383, ticks 77640, elapsed 0, voice: 1 note: 50 velocity 0 event ('note', 77640, 1, 50, 0)
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3385, ticks 77640, elapsed 0, voice: 0 note: 38 velocity 0 event ('note', 77640, 10, 38, 0)
	0,((( 3 &4)<<5)|( 40 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3386, ticks 77640, elapsed 0, voice: 3 note: 40 velocity 0 event ('note', 77640, 10, 40, 0)
	// Note off skipped, note 55 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3388, ticks 77656, elapsed 1, voice: 0 note: 40 velocity 100 event ('note', 77656, 10, 40, 100)
	0,((( 1 &4)<<5)|( 38 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3389, ticks 77656, elapsed 0, voice: 1 note: 38 velocity 100 event ('note', 77656, 10, 38, 100)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	6,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3393, ticks 77760, elapsed 6, voice: 2 note: 55 velocity 100 event ('note', 77760, 1, 55, 100)
	0,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3394, ticks 77760, elapsed 0, voice: 3 note: 50 velocity 100 event ('note', 77760, 1, 50, 100)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3395, ticks 77760, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 77760, 1, 43, 100)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3396, ticks 77760, elapsed 0, voice: 0 note: 62 velocity 100 event ('note', 77760, 5, 62, 100)
	0,((( 1 &4)<<5)|( 38 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3397, ticks 77770, elapsed 0, voice: 1 note: 38 velocity 0 event ('note', 77770, 10, 38, 0)
	// Note off skipped, note 40 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3399, ticks 77772, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 77772, 10, 40, 100)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3400, ticks 77772, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 77772, 10, 38, 100)
	7,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3401, ticks 77886, elapsed 7, voice: 0 note: 38 velocity 0 event ('note', 77886, 10, 38, 0)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3402, ticks 77886, elapsed 0, voice: 1 note: 40 velocity 0 event ('note', 77886, 10, 40, 0)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3403, ticks 77889, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 77889, 10, 40, 100)
	0,((( 1 &4)<<5)|( 38 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3404, ticks 77889, elapsed 0, voice: 1 note: 38 velocity 100 event ('note', 77889, 10, 38, 100)
	// Note off skipped, note 43 not found in channels, probably interrupted
	6,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3406, ticks 77988, elapsed 6, voice: 3 note: 50 velocity 0 event ('note', 77988, 1, 50, 0)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3407, ticks 77988, elapsed 0, voice: 2 note: 55 velocity 0 event ('note', 77988, 1, 55, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 38 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3409, ticks 78003, elapsed 0, voice: 1 note: 38 velocity 0 event ('note', 78003, 10, 38, 0)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3410, ticks 78003, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 78003, 10, 40, 0)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3411, ticks 78006, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 78006, 1, 55, 100)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3412, ticks 78006, elapsed 0, voice: 1 note: 50 velocity 100 event ('note', 78006, 1, 50, 100)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3413, ticks 78006, elapsed 0, voice: 2 note: 43 velocity 100 event ('note', 78006, 1, 43, 100)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3414, ticks 78006, elapsed 0, voice: 3 note: 62 velocity 100 event ('note', 78006, 5, 62, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3415, ticks 78006, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 78006, 10, 40, 100)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3416, ticks 78006, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 78006, 10, 38, 100)
	7,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3417, ticks 78120, elapsed 7, voice: 0 note: 38 velocity 0 event ('note', 78120, 10, 38, 0)
	// Note off skipped, note 40 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3419, ticks 78136, elapsed 1, voice: 0 note: 40 velocity 100 event ('note', 78136, 10, 40, 100)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3420, ticks 78136, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 78136, 10, 38, 100)
	6,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3421, ticks 78234, elapsed 6, voice: 2 note: 43 velocity 0 event ('note', 78234, 1, 43, 0)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3422, ticks 78234, elapsed 0, voice: 1 note: 50 velocity 0 event ('note', 78234, 1, 50, 0)
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3424, ticks 78234, elapsed 0, voice: 3 note: 62 velocity 0 event ('note', 78234, 5, 62, 0)
	0,((( 1 &4)<<5)|( 54 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3425, ticks 78240, elapsed 0, voice: 1 note: 54 velocity 100 event ('note', 78240, 1, 54, 100)
	0,((( 2 &4)<<5)|( 46 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3426, ticks 78240, elapsed 0, voice: 2 note: 46 velocity 100 event ('note', 78240, 1, 46, 100)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3427, ticks 78240, elapsed 0, voice: 3 note: 62 velocity 100 event ('note', 78240, 5, 62, 100)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3428, ticks 78250, elapsed 0, voice: 0 note: 38 velocity 0 event ('note', 78250, 10, 38, 0)
	// Note off skipped, note 40 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3430, ticks 78252, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 78252, 10, 40, 100)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3431, ticks 78252, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 78252, 10, 38, 100)
	7,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3432, ticks 78366, elapsed 7, voice: 0 note: 38 velocity 0 event ('note', 78366, 10, 38, 0)
	// Note off skipped, note 40 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3434, ticks 78369, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 78369, 10, 40, 100)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3435, ticks 78369, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 78369, 10, 38, 100)
	6,((( 2 &4)<<5)|( 46 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3436, ticks 78468, elapsed 6, voice: 2 note: 46 velocity 0 event ('note', 78468, 1, 46, 0)
	0,((( 1 &4)<<5)|( 54 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3437, ticks 78468, elapsed 0, voice: 1 note: 54 velocity 0 event ('note', 78468, 1, 54, 0)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3438, ticks 78483, elapsed 0, voice: 0 note: 38 velocity 0 event ('note', 78483, 10, 38, 0)
	// Note off skipped, note 40 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3440, ticks 78486, elapsed 0, voice: 0 note: 54 velocity 100 event ('note', 78486, 1, 54, 100)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3441, ticks 78486, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 78486, 10, 40, 100)
	0,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3442, ticks 78486, elapsed 0, voice: 2 note: 38 velocity 100 event ('note', 78486, 10, 38, 100)
	7,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3443, ticks 78600, elapsed 7, voice: 2 note: 38 velocity 0 event ('note', 78600, 10, 38, 0)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3444, ticks 78600, elapsed 0, voice: 1 note: 40 velocity 0 event ('note', 78600, 10, 40, 0)
	6,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3445, ticks 78696, elapsed 6, voice: 3 note: 62 velocity 0 event ('note', 78696, 5, 62, 0)
	1,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3446, ticks 78714, elapsed 1, voice: 0 note: 54 velocity 0 event ('note', 78714, 1, 54, 0)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3447, ticks 78720, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 78720, 1, 40, 100)
	0,((( 1 &4)<<5)|( 28 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3448, ticks 78720, elapsed 0, voice: 1 note: 28 velocity 100 event ('note', 78720, 1, 28, 100)
	0,((( 2 &4)<<5)|( 40 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3449, ticks 78720, elapsed 0, voice: 2 note: 40 velocity 100 event ('note', 78720, 2, 40, 100)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3450, ticks 78720, elapsed 0, voice: 3 note: 47 velocity 100 event ('note', 78720, 2, 47, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3451, ticks 78720, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 78720, 3, 47, 100)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3452, ticks 78720, elapsed 0, voice: 0 note: 64 velocity 100 event ('note', 78720, 3, 64, 100)
	0,((( 0 &4)<<5)|( 28 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3453, ticks 78720, elapsed 0, voice: 0 note: 28 velocity 100 event ('note', 78720, 4, 28, 100)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3454, ticks 78720, elapsed 0, voice: 0 note: 62 velocity 100 event ('note', 78720, 5, 62, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3455, ticks 78720, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 78720, 10, 35, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3456, ticks 78732, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 78732, 2, 52, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3457, ticks 78732, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 78732, 3, 52, 100)
	13,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3458, ticks 78948, elapsed 13, voice: 3 note: 47 velocity 0 event ('note', 78948, 2, 47, 0)
	0,((( 2 &4)<<5)|( 40 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3459, ticks 78948, elapsed 0, voice: 2 note: 40 velocity 0 event ('note', 78948, 2, 40, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3463, ticks 78960, elapsed 0, voice: 0 note: 52 velocity 0 event ('note', 78960, 2, 52, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3465, ticks 78966, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 78966, 2, 47, 100)
	0,((( 2 &4)<<5)|( 40 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3466, ticks 78966, elapsed 0, voice: 2 note: 40 velocity 100 event ('note', 78966, 2, 40, 100)
	0,((( 3 &4)<<5)|( 52 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3467, ticks 78966, elapsed 0, voice: 3 note: 52 velocity 100 event ('note', 78966, 2, 52, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3468, ticks 78966, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 78966, 3, 47, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3469, ticks 78966, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 78966, 3, 52, 100)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3470, ticks 78966, elapsed 0, voice: 0 note: 64 velocity 100 event ('note', 78966, 3, 64, 100)
	13,((( 1 &4)<<5)|( 28 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3471, ticks 79176, elapsed 13, voice: 1 note: 28 velocity 0 event ('note', 79176, 1, 28, 0)
	0,((( 2 &4)<<5)|( 40 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3472, ticks 79176, elapsed 0, voice: 2 note: 40 velocity 0 event ('note', 79176, 1, 40, 0)
	// Note off skipped, note 28 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	1,((( 3 &4)<<5)|( 52 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3475, ticks 79194, elapsed 1, voice: 3 note: 52 velocity 0 event ('note', 79194, 2, 52, 0)
	// Note off skipped, note 40 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3478, ticks 79194, elapsed 0, voice: 0 note: 64 velocity 0 event ('note', 79194, 3, 64, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3481, ticks 79200, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 79200, 2, 40, 100)
	0,((( 1 &4)<<5)|( 47 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3482, ticks 79200, elapsed 0, voice: 1 note: 47 velocity 100 event ('note', 79200, 2, 47, 100)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3483, ticks 79200, elapsed 0, voice: 2 note: 47 velocity 100 event ('note', 79200, 3, 47, 100)
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3484, ticks 79200, elapsed 0, voice: 3 note: 64 velocity 100 event ('note', 79200, 3, 64, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3485, ticks 79200, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 79200, 5, 59, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3486, ticks 79200, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 79200, 10, 40, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3487, ticks 79212, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 79212, 2, 52, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3488, ticks 79212, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 79212, 3, 52, 100)
	13,((( 1 &4)<<5)|( 47 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3489, ticks 79428, elapsed 13, voice: 1 note: 47 velocity 0 event ('note', 79428, 2, 47, 0)
	// Note off skipped, note 40 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3491, ticks 79428, elapsed 0, voice: 3 note: 64 velocity 0 event ('note', 79428, 3, 64, 0)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3492, ticks 79428, elapsed 0, voice: 2 note: 47 velocity 0 event ('note', 79428, 3, 47, 0)
	// Note off skipped, note 40 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3494, ticks 79440, elapsed 0, voice: 0 note: 52 velocity 0 event ('note', 79440, 2, 52, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3496, ticks 79446, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 79446, 2, 47, 100)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3497, ticks 79446, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 79446, 2, 40, 100)
	0,((( 2 &4)<<5)|( 52 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3498, ticks 79446, elapsed 0, voice: 2 note: 52 velocity 100 event ('note', 79446, 2, 52, 100)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3499, ticks 79446, elapsed 0, voice: 3 note: 47 velocity 100 event ('note', 79446, 3, 47, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3500, ticks 79446, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 79446, 3, 52, 100)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3501, ticks 79446, elapsed 0, voice: 0 note: 64 velocity 100 event ('note', 79446, 3, 64, 100)
	14,((( 2 &4)<<5)|( 52 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3502, ticks 79674, elapsed 14, voice: 2 note: 52 velocity 0 event ('note', 79674, 2, 52, 0)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3503, ticks 79674, elapsed 0, voice: 1 note: 40 velocity 0 event ('note', 79674, 2, 40, 0)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3504, ticks 79674, elapsed 0, voice: 3 note: 47 velocity 0 event ('note', 79674, 2, 47, 0)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3505, ticks 79674, elapsed 0, voice: 0 note: 64 velocity 0 event ('note', 79674, 3, 64, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3508, ticks 79680, elapsed 0, voice: 0 note: 50 velocity 100 event ('note', 79680, 1, 50, 100)
	0,((( 1 &4)<<5)|( 38 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3509, ticks 79680, elapsed 0, voice: 1 note: 38 velocity 100 event ('note', 79680, 1, 38, 100)
	0,((( 2 &4)<<5)|( 40 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3510, ticks 79680, elapsed 0, voice: 2 note: 40 velocity 100 event ('note', 79680, 2, 40, 100)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3511, ticks 79680, elapsed 0, voice: 3 note: 47 velocity 100 event ('note', 79680, 2, 47, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3512, ticks 79680, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 79680, 3, 47, 100)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3513, ticks 79680, elapsed 0, voice: 0 note: 64 velocity 100 event ('note', 79680, 3, 64, 100)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3514, ticks 79680, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 79680, 4, 38, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3515, ticks 79680, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 79680, 10, 35, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3516, ticks 79692, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 79692, 2, 52, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3517, ticks 79692, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 79692, 3, 52, 100)
	13,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3518, ticks 79908, elapsed 13, voice: 3 note: 47 velocity 0 event ('note', 79908, 2, 47, 0)
	0,((( 2 &4)<<5)|( 40 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3519, ticks 79908, elapsed 0, voice: 2 note: 40 velocity 0 event ('note', 79908, 2, 40, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3523, ticks 79920, elapsed 0, voice: 0 note: 52 velocity 0 event ('note', 79920, 2, 52, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3525, ticks 79926, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 79926, 2, 47, 100)
	0,((( 2 &4)<<5)|( 40 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3526, ticks 79926, elapsed 0, voice: 2 note: 40 velocity 100 event ('note', 79926, 2, 40, 100)
	0,((( 3 &4)<<5)|( 52 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3527, ticks 79926, elapsed 0, voice: 3 note: 52 velocity 100 event ('note', 79926, 2, 52, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3528, ticks 79926, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 79926, 3, 47, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3529, ticks 79926, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 79926, 3, 52, 100)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3530, ticks 79926, elapsed 0, voice: 0 note: 64 velocity 100 event ('note', 79926, 3, 64, 100)
	13,((( 1 &4)<<5)|( 38 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3531, ticks 80136, elapsed 13, voice: 1 note: 38 velocity 0 event ('note', 80136, 1, 38, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	1,((( 3 &4)<<5)|( 52 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3534, ticks 80154, elapsed 1, voice: 3 note: 52 velocity 0 event ('note', 80154, 2, 52, 0)
	0,((( 2 &4)<<5)|( 40 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3535, ticks 80154, elapsed 0, voice: 2 note: 40 velocity 0 event ('note', 80154, 2, 40, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3537, ticks 80154, elapsed 0, voice: 0 note: 64 velocity 0 event ('note', 80154, 3, 64, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3540, ticks 80160, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 80160, 2, 40, 100)
	0,((( 1 &4)<<5)|( 47 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3541, ticks 80160, elapsed 0, voice: 1 note: 47 velocity 100 event ('note', 80160, 2, 47, 100)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3542, ticks 80160, elapsed 0, voice: 2 note: 47 velocity 100 event ('note', 80160, 3, 47, 100)
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3543, ticks 80160, elapsed 0, voice: 3 note: 64 velocity 100 event ('note', 80160, 3, 64, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3544, ticks 80160, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 80160, 10, 40, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3545, ticks 80172, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 80172, 2, 52, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3546, ticks 80172, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 80172, 3, 52, 100)
	13,((( 1 &4)<<5)|( 47 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3547, ticks 80388, elapsed 13, voice: 1 note: 47 velocity 0 event ('note', 80388, 2, 47, 0)
	// Note off skipped, note 40 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3549, ticks 80388, elapsed 0, voice: 3 note: 64 velocity 0 event ('note', 80388, 3, 64, 0)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3550, ticks 80388, elapsed 0, voice: 2 note: 47 velocity 0 event ('note', 80388, 3, 47, 0)
	// Note off skipped, note 40 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3552, ticks 80400, elapsed 0, voice: 0 note: 52 velocity 0 event ('note', 80400, 2, 52, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3554, ticks 80406, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 80406, 2, 47, 100)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3555, ticks 80406, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 80406, 2, 40, 100)
	0,((( 2 &4)<<5)|( 52 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3556, ticks 80406, elapsed 0, voice: 2 note: 52 velocity 100 event ('note', 80406, 2, 52, 100)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3557, ticks 80406, elapsed 0, voice: 3 note: 47 velocity 100 event ('note', 80406, 3, 47, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3558, ticks 80406, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 80406, 3, 52, 100)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3559, ticks 80406, elapsed 0, voice: 0 note: 64 velocity 100 event ('note', 80406, 3, 64, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3560, ticks 80406, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 80406, 10, 40, 100)
	14,((( 2 &4)<<5)|( 52 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3561, ticks 80634, elapsed 14, voice: 2 note: 52 velocity 0 event ('note', 80634, 2, 52, 0)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3562, ticks 80634, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 80634, 2, 40, 0)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3563, ticks 80634, elapsed 0, voice: 3 note: 47 velocity 0 event ('note', 80634, 2, 47, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3567, ticks 80634, elapsed 0, voice: 1 note: 40 velocity 0 event ('note', 80634, 10, 40, 0)
	0,((( 0 &4)<<5)|( 28 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3568, ticks 80640, elapsed 0, voice: 0 note: 28 velocity 100 event ('note', 80640, 1, 28, 100)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3569, ticks 80640, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 80640, 1, 40, 100)
	0,((( 2 &4)<<5)|( 40 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3570, ticks 80640, elapsed 0, voice: 2 note: 40 velocity 100 event ('note', 80640, 2, 40, 100)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3571, ticks 80640, elapsed 0, voice: 3 note: 47 velocity 100 event ('note', 80640, 2, 47, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3572, ticks 80640, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 80640, 3, 47, 100)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3573, ticks 80640, elapsed 0, voice: 0 note: 64 velocity 100 event ('note', 80640, 3, 64, 100)
	0,((( 0 &4)<<5)|( 28 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3574, ticks 80640, elapsed 0, voice: 0 note: 28 velocity 100 event ('note', 80640, 4, 28, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3575, ticks 80640, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 80640, 10, 35, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3576, ticks 80652, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 80652, 2, 52, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3577, ticks 80652, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 80652, 3, 52, 100)
	13,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3578, ticks 80868, elapsed 13, voice: 3 note: 47 velocity 0 event ('note', 80868, 2, 47, 0)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3579, ticks 80868, elapsed 0, voice: 1 note: 40 velocity 0 event ('note', 80868, 2, 40, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3583, ticks 80880, elapsed 0, voice: 0 note: 52 velocity 0 event ('note', 80880, 2, 52, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3585, ticks 80886, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 80886, 2, 47, 100)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3586, ticks 80886, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 80886, 2, 40, 100)
	0,((( 3 &4)<<5)|( 52 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3587, ticks 80886, elapsed 0, voice: 3 note: 52 velocity 100 event ('note', 80886, 2, 52, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3588, ticks 80886, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 80886, 3, 47, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3589, ticks 80886, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 80886, 3, 52, 100)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3590, ticks 80886, elapsed 0, voice: 0 note: 64 velocity 100 event ('note', 80886, 3, 64, 100)
	13,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3591, ticks 81096, elapsed 13, voice: 1 note: 40 velocity 0 event ('note', 81096, 1, 40, 0)
	// Note off skipped, note 28 not found in channels, probably interrupted
	// Note off skipped, note 28 not found in channels, probably interrupted
	1,((( 3 &4)<<5)|( 52 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3594, ticks 81114, elapsed 1, voice: 3 note: 52 velocity 0 event ('note', 81114, 2, 52, 0)
	0,((( 2 &4)<<5)|( 40 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3595, ticks 81114, elapsed 0, voice: 2 note: 40 velocity 0 event ('note', 81114, 2, 40, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3597, ticks 81114, elapsed 0, voice: 0 note: 64 velocity 0 event ('note', 81114, 3, 64, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3600, ticks 81120, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 81120, 2, 40, 100)
	0,((( 1 &4)<<5)|( 47 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3601, ticks 81120, elapsed 0, voice: 1 note: 47 velocity 100 event ('note', 81120, 2, 47, 100)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3602, ticks 81120, elapsed 0, voice: 2 note: 47 velocity 100 event ('note', 81120, 3, 47, 100)
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3603, ticks 81120, elapsed 0, voice: 3 note: 64 velocity 100 event ('note', 81120, 3, 64, 100)
	// Note off skipped, note 59 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3605, ticks 81120, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 81120, 10, 40, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3606, ticks 81132, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 81132, 2, 52, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3607, ticks 81132, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 81132, 3, 52, 100)
	13,((( 1 &4)<<5)|( 47 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3608, ticks 81348, elapsed 13, voice: 1 note: 47 velocity 0 event ('note', 81348, 2, 47, 0)
	// Note off skipped, note 40 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3610, ticks 81348, elapsed 0, voice: 3 note: 64 velocity 0 event ('note', 81348, 3, 64, 0)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3611, ticks 81348, elapsed 0, voice: 2 note: 47 velocity 0 event ('note', 81348, 3, 47, 0)
	// Note off skipped, note 40 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3613, ticks 81360, elapsed 0, voice: 0 note: 52 velocity 0 event ('note', 81360, 2, 52, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3615, ticks 81366, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 81366, 2, 47, 100)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3616, ticks 81366, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 81366, 2, 40, 100)
	0,((( 2 &4)<<5)|( 52 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3617, ticks 81366, elapsed 0, voice: 2 note: 52 velocity 100 event ('note', 81366, 2, 52, 100)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3618, ticks 81366, elapsed 0, voice: 3 note: 47 velocity 100 event ('note', 81366, 3, 47, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3619, ticks 81366, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 81366, 3, 52, 100)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3620, ticks 81366, elapsed 0, voice: 0 note: 64 velocity 100 event ('note', 81366, 3, 64, 100)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3621, ticks 81379, elapsed 0, voice: 0 note: 38 velocity 100 event ('note', 81379, 4, 38, 100)
	13,((( 2 &4)<<5)|( 52 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3622, ticks 81594, elapsed 13, voice: 2 note: 52 velocity 0 event ('note', 81594, 2, 52, 0)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3623, ticks 81594, elapsed 0, voice: 1 note: 40 velocity 0 event ('note', 81594, 2, 40, 0)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3624, ticks 81594, elapsed 0, voice: 3 note: 47 velocity 0 event ('note', 81594, 2, 47, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3628, ticks 81600, elapsed 0, voice: 1 note: 50 velocity 100 event ('note', 81600, 1, 50, 100)
	0,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3629, ticks 81600, elapsed 0, voice: 2 note: 38 velocity 100 event ('note', 81600, 1, 38, 100)
	0,((( 3 &4)<<5)|( 40 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3630, ticks 81600, elapsed 0, voice: 3 note: 40 velocity 100 event ('note', 81600, 2, 40, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3631, ticks 81600, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 81600, 2, 47, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3632, ticks 81600, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 81600, 3, 47, 100)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3633, ticks 81600, elapsed 0, voice: 0 note: 64 velocity 100 event ('note', 81600, 3, 64, 100)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3634, ticks 81600, elapsed 0, voice: 0 note: 62 velocity 100 event ('note', 81600, 5, 62, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3635, ticks 81600, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 81600, 10, 35, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3636, ticks 81612, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 81612, 2, 52, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3637, ticks 81612, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 81612, 3, 52, 100)
	13,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3638, ticks 81828, elapsed 13, voice: 2 note: 38 velocity 0 event ('note', 81828, 1, 38, 0)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3639, ticks 81828, elapsed 0, voice: 1 note: 50 velocity 0 event ('note', 81828, 1, 50, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 40 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3641, ticks 81828, elapsed 0, voice: 3 note: 40 velocity 0 event ('note', 81828, 2, 40, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3646, ticks 81840, elapsed 0, voice: 0 note: 52 velocity 0 event ('note', 81840, 2, 52, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3648, ticks 81846, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 81846, 1, 48, 100)
	0,((( 1 &4)<<5)|( 36 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3649, ticks 81846, elapsed 0, voice: 1 note: 36 velocity 100 event ('note', 81846, 1, 36, 100)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3650, ticks 81846, elapsed 0, voice: 2 note: 47 velocity 100 event ('note', 81846, 2, 47, 100)
	0,((( 3 &4)<<5)|( 40 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3651, ticks 81846, elapsed 0, voice: 3 note: 40 velocity 100 event ('note', 81846, 2, 40, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3652, ticks 81846, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 81846, 2, 52, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3653, ticks 81846, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 81846, 3, 47, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3654, ticks 81846, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 81846, 3, 52, 100)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3655, ticks 81846, elapsed 0, voice: 0 note: 64 velocity 100 event ('note', 81846, 3, 64, 100)
	// Note off skipped, note 62 not found in channels, probably interrupted
	14,((( 1 &4)<<5)|( 36 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3657, ticks 82074, elapsed 14, voice: 1 note: 36 velocity 0 event ('note', 82074, 1, 36, 0)
	// Note off skipped, note 48 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 40 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3660, ticks 82074, elapsed 0, voice: 3 note: 40 velocity 0 event ('note', 82074, 2, 40, 0)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3661, ticks 82074, elapsed 0, voice: 2 note: 47 velocity 0 event ('note', 82074, 2, 47, 0)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3662, ticks 82074, elapsed 0, voice: 0 note: 64 velocity 0 event ('note', 82074, 3, 64, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3665, ticks 82080, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 82080, 1, 47, 100)
	0,((( 1 &4)<<5)|( 35 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3666, ticks 82080, elapsed 0, voice: 1 note: 35 velocity 100 event ('note', 82080, 1, 35, 100)
	0,((( 2 &4)<<5)|( 40 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3667, ticks 82080, elapsed 0, voice: 2 note: 40 velocity 100 event ('note', 82080, 2, 40, 100)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3668, ticks 82080, elapsed 0, voice: 3 note: 47 velocity 100 event ('note', 82080, 2, 47, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3669, ticks 82080, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 82080, 3, 47, 100)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3670, ticks 82080, elapsed 0, voice: 0 note: 64 velocity 100 event ('note', 82080, 3, 64, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3671, ticks 82080, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 82080, 4, 40, 100)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3672, ticks 82080, elapsed 0, voice: 0 note: 62 velocity 100 event ('note', 82080, 5, 62, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3673, ticks 82080, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 82080, 10, 40, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3674, ticks 82092, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 82092, 2, 52, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3675, ticks 82092, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 82092, 3, 52, 100)
	13,((( 1 &4)<<5)|( 35 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3676, ticks 82308, elapsed 13, voice: 1 note: 35 velocity 0 event ('note', 82308, 1, 35, 0)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3677, ticks 82308, elapsed 0, voice: 3 note: 47 velocity 0 event ('note', 82308, 1, 47, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 40 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3679, ticks 82308, elapsed 0, voice: 2 note: 40 velocity 0 event ('note', 82308, 2, 40, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 40 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3683, ticks 82320, elapsed 0, voice: 0 note: 52 velocity 0 event ('note', 82320, 2, 52, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3685, ticks 82326, elapsed 0, voice: 0 note: 45 velocity 100 event ('note', 82326, 1, 45, 100)
	0,((( 1 &4)<<5)|( 33 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3686, ticks 82326, elapsed 0, voice: 1 note: 33 velocity 100 event ('note', 82326, 1, 33, 100)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3687, ticks 82326, elapsed 0, voice: 2 note: 47 velocity 100 event ('note', 82326, 2, 47, 100)
	0,((( 3 &4)<<5)|( 40 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3688, ticks 82326, elapsed 0, voice: 3 note: 40 velocity 100 event ('note', 82326, 2, 40, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3689, ticks 82326, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 82326, 2, 52, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3690, ticks 82326, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 82326, 3, 47, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3691, ticks 82326, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 82326, 3, 52, 100)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3692, ticks 82326, elapsed 0, voice: 0 note: 62 velocity 100 event ('note', 82326, 3, 62, 100)
	13,((( 3 &4)<<5)|( 40 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3693, ticks 82536, elapsed 13, voice: 3 note: 40 velocity 0 event ('note', 82536, 4, 40, 0)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3694, ticks 82536, elapsed 0, voice: 0 note: 62 velocity 0 event ('note', 82536, 5, 62, 0)
	1,((( 1 &4)<<5)|( 33 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3695, ticks 82554, elapsed 1, voice: 1 note: 33 velocity 0 event ('note', 82554, 1, 33, 0)
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 40 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3699, ticks 82554, elapsed 0, voice: 2 note: 47 velocity 0 event ('note', 82554, 2, 47, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3703, ticks 82560, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 82560, 1, 36, 100)
	0,((( 1 &4)<<5)|( 48 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3704, ticks 82560, elapsed 0, voice: 1 note: 48 velocity 100 event ('note', 82560, 2, 48, 100)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3705, ticks 82560, elapsed 0, voice: 2 note: 43 velocity 100 event ('note', 82560, 2, 43, 100)
	0,((( 3 &4)<<5)|( 36 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3706, ticks 82560, elapsed 0, voice: 3 note: 36 velocity 100 event ('note', 82560, 2, 36, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3707, ticks 82560, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 82560, 3, 48, 100)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3708, ticks 82560, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 82560, 3, 43, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3709, ticks 82560, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 82560, 3, 60, 100)
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3710, ticks 82560, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 82560, 4, 36, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3711, ticks 82560, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 82560, 5, 55, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3712, ticks 82560, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 82560, 10, 35, 100)
	14,((( 3 &4)<<5)|( 36 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3713, ticks 82788, elapsed 14, voice: 3 note: 36 velocity 0 event ('note', 82788, 2, 36, 0)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3714, ticks 82788, elapsed 0, voice: 2 note: 43 velocity 0 event ('note', 82788, 2, 43, 0)
	0,((( 1 &4)<<5)|( 48 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3715, ticks 82788, elapsed 0, voice: 1 note: 48 velocity 0 event ('note', 82788, 2, 48, 0)
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3719, ticks 82788, elapsed 0, voice: 0 note: 35 velocity 0 event ('note', 82788, 10, 35, 0)
	1,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3720, ticks 82806, elapsed 1, voice: 0 note: 36 velocity 100 event ('note', 82806, 2, 36, 100)
	0,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3721, ticks 82806, elapsed 0, voice: 1 note: 43 velocity 100 event ('note', 82806, 2, 43, 100)
	0,((( 2 &4)<<5)|( 48 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3722, ticks 82806, elapsed 0, voice: 2 note: 48 velocity 100 event ('note', 82806, 2, 48, 100)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3723, ticks 82806, elapsed 0, voice: 3 note: 43 velocity 100 event ('note', 82806, 3, 43, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3724, ticks 82806, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 82806, 3, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3725, ticks 82806, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 82806, 3, 60, 100)
	// Note off skipped, note 36 not found in channels, probably interrupted
	// Note off skipped, note 36 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	14,((( 2 &4)<<5)|( 48 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3729, ticks 83034, elapsed 14, voice: 2 note: 48 velocity 0 event ('note', 83034, 2, 48, 0)
	0,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3730, ticks 83034, elapsed 0, voice: 1 note: 43 velocity 0 event ('note', 83034, 2, 43, 0)
	// Note off skipped, note 36 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3732, ticks 83034, elapsed 0, voice: 0 note: 60 velocity 0 event ('note', 83034, 3, 60, 0)
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3734, ticks 83034, elapsed 0, voice: 3 note: 43 velocity 0 event ('note', 83034, 3, 43, 0)
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3735, ticks 83040, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 83040, 1, 36, 100)
	0,((( 1 &4)<<5)|( 36 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3736, ticks 83040, elapsed 0, voice: 1 note: 36 velocity 100 event ('note', 83040, 2, 36, 100)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3737, ticks 83040, elapsed 0, voice: 2 note: 43 velocity 100 event ('note', 83040, 2, 43, 100)
	0,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3738, ticks 83040, elapsed 0, voice: 3 note: 48 velocity 100 event ('note', 83040, 2, 48, 100)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3739, ticks 83040, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 83040, 3, 43, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3740, ticks 83040, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 83040, 3, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3741, ticks 83040, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 83040, 3, 60, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3742, ticks 83040, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 83040, 4, 35, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3743, ticks 83040, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 83040, 5, 55, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3744, ticks 83040, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 83040, 10, 40, 100)
	14,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3745, ticks 83268, elapsed 14, voice: 3 note: 48 velocity 0 event ('note', 83268, 2, 48, 0)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3746, ticks 83268, elapsed 0, voice: 2 note: 43 velocity 0 event ('note', 83268, 2, 43, 0)
	0,((( 1 &4)<<5)|( 36 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3747, ticks 83268, elapsed 0, voice: 1 note: 36 velocity 0 event ('note', 83268, 2, 36, 0)
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3751, ticks 83268, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 83268, 10, 40, 0)
	1,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3752, ticks 83286, elapsed 1, voice: 0 note: 36 velocity 100 event ('note', 83286, 2, 36, 100)
	0,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3753, ticks 83286, elapsed 0, voice: 1 note: 43 velocity 100 event ('note', 83286, 2, 43, 100)
	0,((( 2 &4)<<5)|( 48 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3754, ticks 83286, elapsed 0, voice: 2 note: 48 velocity 100 event ('note', 83286, 2, 48, 100)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3755, ticks 83286, elapsed 0, voice: 3 note: 43 velocity 100 event ('note', 83286, 3, 43, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3756, ticks 83286, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 83286, 3, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3757, ticks 83286, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 83286, 3, 60, 100)
	// Note off skipped, note 36 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	14,((( 2 &4)<<5)|( 48 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3761, ticks 83514, elapsed 14, voice: 2 note: 48 velocity 0 event ('note', 83514, 2, 48, 0)
	0,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3762, ticks 83514, elapsed 0, voice: 1 note: 43 velocity 0 event ('note', 83514, 2, 43, 0)
	// Note off skipped, note 36 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3764, ticks 83514, elapsed 0, voice: 0 note: 60 velocity 0 event ('note', 83514, 3, 60, 0)
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3766, ticks 83514, elapsed 0, voice: 3 note: 43 velocity 0 event ('note', 83514, 3, 43, 0)
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3767, ticks 83520, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 83520, 1, 36, 100)
	0,((( 1 &4)<<5)|( 36 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3768, ticks 83520, elapsed 0, voice: 1 note: 36 velocity 100 event ('note', 83520, 2, 36, 100)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3769, ticks 83520, elapsed 0, voice: 2 note: 43 velocity 100 event ('note', 83520, 2, 43, 100)
	0,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3770, ticks 83520, elapsed 0, voice: 3 note: 48 velocity 100 event ('note', 83520, 2, 48, 100)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3771, ticks 83520, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 83520, 3, 43, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3772, ticks 83520, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 83520, 3, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3773, ticks 83520, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 83520, 3, 60, 100)
	0,((( 0 &4)<<5)|( 33 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3774, ticks 83520, elapsed 0, voice: 0 note: 33 velocity 100 event ('note', 83520, 4, 33, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3775, ticks 83520, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 83520, 5, 55, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3776, ticks 83520, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 83520, 10, 35, 100)
	14,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3777, ticks 83748, elapsed 14, voice: 3 note: 48 velocity 0 event ('note', 83748, 2, 48, 0)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3778, ticks 83748, elapsed 0, voice: 2 note: 43 velocity 0 event ('note', 83748, 2, 43, 0)
	0,((( 1 &4)<<5)|( 36 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3779, ticks 83748, elapsed 0, voice: 1 note: 36 velocity 0 event ('note', 83748, 2, 36, 0)
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3784, ticks 83748, elapsed 0, voice: 0 note: 35 velocity 0 event ('note', 83748, 10, 35, 0)
	1,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3785, ticks 83766, elapsed 1, voice: 0 note: 36 velocity 100 event ('note', 83766, 2, 36, 100)
	0,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3786, ticks 83766, elapsed 0, voice: 1 note: 43 velocity 100 event ('note', 83766, 2, 43, 100)
	0,((( 2 &4)<<5)|( 48 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3787, ticks 83766, elapsed 0, voice: 2 note: 48 velocity 100 event ('note', 83766, 2, 48, 100)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3788, ticks 83766, elapsed 0, voice: 3 note: 43 velocity 100 event ('note', 83766, 3, 43, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3789, ticks 83766, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 83766, 3, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3790, ticks 83766, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 83766, 3, 60, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3791, ticks 83766, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 83766, 5, 60, 100)
	// Note off skipped, note 36 not found in channels, probably interrupted
	// Note off skipped, note 33 not found in channels, probably interrupted
	14,((( 2 &4)<<5)|( 48 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3794, ticks 83994, elapsed 14, voice: 2 note: 48 velocity 0 event ('note', 83994, 2, 48, 0)
	0,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3795, ticks 83994, elapsed 0, voice: 1 note: 43 velocity 0 event ('note', 83994, 2, 43, 0)
	// Note off skipped, note 36 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3797, ticks 83994, elapsed 0, voice: 0 note: 60 velocity 0 event ('note', 83994, 3, 60, 0)
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3799, ticks 83994, elapsed 0, voice: 3 note: 43 velocity 0 event ('note', 83994, 3, 43, 0)
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3800, ticks 84000, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 84000, 1, 36, 100)
	0,((( 1 &4)<<5)|( 36 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3801, ticks 84000, elapsed 0, voice: 1 note: 36 velocity 100 event ('note', 84000, 2, 36, 100)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3802, ticks 84000, elapsed 0, voice: 2 note: 43 velocity 100 event ('note', 84000, 2, 43, 100)
	0,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3803, ticks 84000, elapsed 0, voice: 3 note: 48 velocity 100 event ('note', 84000, 2, 48, 100)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3804, ticks 84000, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 84000, 3, 43, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3805, ticks 84000, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 84000, 3, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3806, ticks 84000, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 84000, 3, 60, 100)
	0,((( 0 &4)<<5)|( 31 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3807, ticks 84000, elapsed 0, voice: 0 note: 31 velocity 100 event ('note', 84000, 4, 31, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3808, ticks 84000, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 84000, 10, 40, 100)
	// Note off skipped, note 60 not found in channels, probably interrupted
	14,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3810, ticks 84228, elapsed 14, voice: 3 note: 48 velocity 0 event ('note', 84228, 2, 48, 0)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3811, ticks 84228, elapsed 0, voice: 2 note: 43 velocity 0 event ('note', 84228, 2, 43, 0)
	0,((( 1 &4)<<5)|( 36 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3812, ticks 84228, elapsed 0, voice: 1 note: 36 velocity 0 event ('note', 84228, 2, 36, 0)
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3816, ticks 84228, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 84228, 10, 40, 0)
	1,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3817, ticks 84246, elapsed 1, voice: 0 note: 36 velocity 100 event ('note', 84246, 2, 36, 100)
	0,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3818, ticks 84246, elapsed 0, voice: 1 note: 43 velocity 100 event ('note', 84246, 2, 43, 100)
	0,((( 2 &4)<<5)|( 48 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3819, ticks 84246, elapsed 0, voice: 2 note: 48 velocity 100 event ('note', 84246, 2, 48, 100)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3820, ticks 84246, elapsed 0, voice: 3 note: 43 velocity 100 event ('note', 84246, 3, 43, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3821, ticks 84246, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 84246, 3, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3822, ticks 84246, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 84246, 3, 60, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3823, ticks 84246, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 84246, 5, 60, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3824, ticks 84246, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 84246, 10, 40, 100)
	// Note off skipped, note 36 not found in channels, probably interrupted
	// Note off skipped, note 31 not found in channels, probably interrupted
	14,((( 2 &4)<<5)|( 48 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3827, ticks 84474, elapsed 14, voice: 2 note: 48 velocity 0 event ('note', 84474, 2, 48, 0)
	0,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3828, ticks 84474, elapsed 0, voice: 1 note: 43 velocity 0 event ('note', 84474, 2, 43, 0)
	// Note off skipped, note 36 not found in channels, probably interrupted
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3832, ticks 84474, elapsed 0, voice: 3 note: 43 velocity 0 event ('note', 84474, 3, 43, 0)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3833, ticks 84474, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 84474, 10, 40, 0)
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3834, ticks 84480, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 84480, 1, 36, 100)
	0,((( 1 &4)<<5)|( 36 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3835, ticks 84480, elapsed 0, voice: 1 note: 36 velocity 100 event ('note', 84480, 2, 36, 100)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3836, ticks 84480, elapsed 0, voice: 2 note: 43 velocity 100 event ('note', 84480, 2, 43, 100)
	0,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3837, ticks 84480, elapsed 0, voice: 3 note: 48 velocity 100 event ('note', 84480, 2, 48, 100)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3838, ticks 84480, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 84480, 3, 43, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3839, ticks 84480, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 84480, 3, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3840, ticks 84480, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 84480, 3, 60, 100)
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3841, ticks 84480, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 84480, 4, 36, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3842, ticks 84480, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 84480, 10, 35, 100)
	14,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3843, ticks 84708, elapsed 14, voice: 3 note: 48 velocity 0 event ('note', 84708, 2, 48, 0)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3844, ticks 84708, elapsed 0, voice: 2 note: 43 velocity 0 event ('note', 84708, 2, 43, 0)
	0,((( 1 &4)<<5)|( 36 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3845, ticks 84708, elapsed 0, voice: 1 note: 36 velocity 0 event ('note', 84708, 2, 36, 0)
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3849, ticks 84708, elapsed 0, voice: 0 note: 35 velocity 0 event ('note', 84708, 10, 35, 0)
	1,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3850, ticks 84726, elapsed 1, voice: 0 note: 36 velocity 100 event ('note', 84726, 2, 36, 100)
	0,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3851, ticks 84726, elapsed 0, voice: 1 note: 43 velocity 100 event ('note', 84726, 2, 43, 100)
	0,((( 2 &4)<<5)|( 48 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3852, ticks 84726, elapsed 0, voice: 2 note: 48 velocity 100 event ('note', 84726, 2, 48, 100)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3853, ticks 84726, elapsed 0, voice: 3 note: 43 velocity 100 event ('note', 84726, 3, 43, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3854, ticks 84726, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 84726, 3, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3855, ticks 84726, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 84726, 3, 60, 100)
	// Note off skipped, note 36 not found in channels, probably interrupted
	// Note off skipped, note 36 not found in channels, probably interrupted
	14,((( 2 &4)<<5)|( 48 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3858, ticks 84954, elapsed 14, voice: 2 note: 48 velocity 0 event ('note', 84954, 2, 48, 0)
	0,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3859, ticks 84954, elapsed 0, voice: 1 note: 43 velocity 0 event ('note', 84954, 2, 43, 0)
	// Note off skipped, note 36 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3861, ticks 84954, elapsed 0, voice: 0 note: 60 velocity 0 event ('note', 84954, 3, 60, 0)
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3863, ticks 84954, elapsed 0, voice: 3 note: 43 velocity 0 event ('note', 84954, 3, 43, 0)
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3864, ticks 84960, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 84960, 1, 36, 100)
	0,((( 1 &4)<<5)|( 36 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3865, ticks 84960, elapsed 0, voice: 1 note: 36 velocity 100 event ('note', 84960, 2, 36, 100)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3866, ticks 84960, elapsed 0, voice: 2 note: 43 velocity 100 event ('note', 84960, 2, 43, 100)
	0,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3867, ticks 84960, elapsed 0, voice: 3 note: 48 velocity 100 event ('note', 84960, 2, 48, 100)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3868, ticks 84960, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 84960, 3, 43, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3869, ticks 84960, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 84960, 3, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3870, ticks 84960, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 84960, 3, 60, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3871, ticks 84960, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 84960, 4, 35, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3872, ticks 84960, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 84960, 10, 40, 100)
	14,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3873, ticks 85188, elapsed 14, voice: 3 note: 48 velocity 0 event ('note', 85188, 2, 48, 0)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3874, ticks 85188, elapsed 0, voice: 2 note: 43 velocity 0 event ('note', 85188, 2, 43, 0)
	0,((( 1 &4)<<5)|( 36 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3875, ticks 85188, elapsed 0, voice: 1 note: 36 velocity 0 event ('note', 85188, 2, 36, 0)
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3879, ticks 85188, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 85188, 10, 40, 0)
	1,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3880, ticks 85206, elapsed 1, voice: 0 note: 36 velocity 100 event ('note', 85206, 2, 36, 100)
	0,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3881, ticks 85206, elapsed 0, voice: 1 note: 43 velocity 100 event ('note', 85206, 2, 43, 100)
	0,((( 2 &4)<<5)|( 48 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3882, ticks 85206, elapsed 0, voice: 2 note: 48 velocity 100 event ('note', 85206, 2, 48, 100)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3883, ticks 85206, elapsed 0, voice: 3 note: 43 velocity 100 event ('note', 85206, 3, 43, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3884, ticks 85206, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 85206, 3, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3885, ticks 85206, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 85206, 3, 60, 100)
	// Note off skipped, note 36 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	14,((( 2 &4)<<5)|( 48 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3888, ticks 85434, elapsed 14, voice: 2 note: 48 velocity 0 event ('note', 85434, 2, 48, 0)
	0,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3889, ticks 85434, elapsed 0, voice: 1 note: 43 velocity 0 event ('note', 85434, 2, 43, 0)
	// Note off skipped, note 36 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3891, ticks 85434, elapsed 0, voice: 0 note: 60 velocity 0 event ('note', 85434, 3, 60, 0)
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3893, ticks 85434, elapsed 0, voice: 3 note: 43 velocity 0 event ('note', 85434, 3, 43, 0)
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3894, ticks 85440, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 85440, 1, 36, 100)
	0,((( 1 &4)<<5)|( 36 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3895, ticks 85440, elapsed 0, voice: 1 note: 36 velocity 100 event ('note', 85440, 2, 36, 100)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3896, ticks 85440, elapsed 0, voice: 2 note: 43 velocity 100 event ('note', 85440, 2, 43, 100)
	0,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3897, ticks 85440, elapsed 0, voice: 3 note: 48 velocity 100 event ('note', 85440, 2, 48, 100)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3898, ticks 85440, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 85440, 3, 43, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3899, ticks 85440, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 85440, 3, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3900, ticks 85440, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 85440, 3, 60, 100)
	0,((( 0 &4)<<5)|( 33 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3901, ticks 85440, elapsed 0, voice: 0 note: 33 velocity 100 event ('note', 85440, 4, 33, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3902, ticks 85440, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 85440, 5, 55, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3903, ticks 85440, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 85440, 10, 35, 100)
	// Note off skipped, note 60 not found in channels, probably interrupted
	14,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3905, ticks 85668, elapsed 14, voice: 3 note: 48 velocity 0 event ('note', 85668, 2, 48, 0)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3906, ticks 85668, elapsed 0, voice: 2 note: 43 velocity 0 event ('note', 85668, 2, 43, 0)
	0,((( 1 &4)<<5)|( 36 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3907, ticks 85668, elapsed 0, voice: 1 note: 36 velocity 0 event ('note', 85668, 2, 36, 0)
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3912, ticks 85668, elapsed 0, voice: 0 note: 35 velocity 0 event ('note', 85668, 10, 35, 0)
	1,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3913, ticks 85686, elapsed 1, voice: 0 note: 36 velocity 100 event ('note', 85686, 2, 36, 100)
	0,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3914, ticks 85686, elapsed 0, voice: 1 note: 43 velocity 100 event ('note', 85686, 2, 43, 100)
	0,((( 2 &4)<<5)|( 48 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3915, ticks 85686, elapsed 0, voice: 2 note: 48 velocity 100 event ('note', 85686, 2, 48, 100)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3916, ticks 85686, elapsed 0, voice: 3 note: 43 velocity 100 event ('note', 85686, 3, 43, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3917, ticks 85686, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 85686, 3, 48, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3918, ticks 85686, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 85686, 3, 59, 100)
	0,((( 0 &4)<<5)|( 58 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3919, ticks 85686, elapsed 0, voice: 0 note: 58 velocity 100 event ('note', 85686, 5, 58, 100)
	// Note off skipped, note 36 not found in channels, probably interrupted
	// Note off skipped, note 33 not found in channels, probably interrupted
	14,((( 2 &4)<<5)|( 48 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3922, ticks 85914, elapsed 14, voice: 2 note: 48 velocity 0 event ('note', 85914, 2, 48, 0)
	0,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3923, ticks 85914, elapsed 0, voice: 1 note: 43 velocity 0 event ('note', 85914, 2, 43, 0)
	// Note off skipped, note 36 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3927, ticks 85914, elapsed 0, voice: 3 note: 43 velocity 0 event ('note', 85914, 3, 43, 0)
	0,((( 0 &4)<<5)|( 58 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3928, ticks 85914, elapsed 0, voice: 0 note: 58 velocity 0 event ('note', 85914, 5, 58, 0)
	0,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3929, ticks 85920, elapsed 0, voice: 0 note: 36 velocity 100 event ('note', 85920, 1, 36, 100)
	0,((( 1 &4)<<5)|( 36 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3930, ticks 85920, elapsed 0, voice: 1 note: 36 velocity 100 event ('note', 85920, 2, 36, 100)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3931, ticks 85920, elapsed 0, voice: 2 note: 43 velocity 100 event ('note', 85920, 2, 43, 100)
	0,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3932, ticks 85920, elapsed 0, voice: 3 note: 48 velocity 100 event ('note', 85920, 2, 48, 100)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3933, ticks 85920, elapsed 0, voice: 0 note: 43 velocity 100 event ('note', 85920, 3, 43, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3934, ticks 85920, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 85920, 3, 48, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3935, ticks 85920, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 85920, 3, 60, 100)
	0,((( 0 &4)<<5)|( 31 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3936, ticks 85920, elapsed 0, voice: 0 note: 31 velocity 100 event ('note', 85920, 4, 31, 100)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3937, ticks 85920, elapsed 0, voice: 0 note: 60 velocity 100 event ('note', 85920, 5, 60, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3938, ticks 85920, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 85920, 10, 40, 100)
	14,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3939, ticks 86148, elapsed 14, voice: 3 note: 48 velocity 0 event ('note', 86148, 2, 48, 0)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3940, ticks 86148, elapsed 0, voice: 2 note: 43 velocity 0 event ('note', 86148, 2, 43, 0)
	0,((( 1 &4)<<5)|( 36 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3941, ticks 86148, elapsed 0, voice: 1 note: 36 velocity 0 event ('note', 86148, 2, 36, 0)
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3945, ticks 86148, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 86148, 10, 40, 0)
	1,((( 0 &4)<<5)|( 36 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3946, ticks 86166, elapsed 1, voice: 0 note: 36 velocity 100 event ('note', 86166, 2, 36, 100)
	0,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3947, ticks 86166, elapsed 0, voice: 1 note: 43 velocity 100 event ('note', 86166, 2, 43, 100)
	0,((( 2 &4)<<5)|( 48 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3948, ticks 86166, elapsed 0, voice: 2 note: 48 velocity 100 event ('note', 86166, 2, 48, 100)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3949, ticks 86166, elapsed 0, voice: 3 note: 43 velocity 100 event ('note', 86166, 3, 43, 100)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3950, ticks 86166, elapsed 0, voice: 0 note: 48 velocity 100 event ('note', 86166, 3, 48, 100)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3951, ticks 86166, elapsed 0, voice: 0 note: 62 velocity 100 event ('note', 86166, 3, 62, 100)
	// Note off skipped, note 36 not found in channels, probably interrupted
	// Note off skipped, note 31 not found in channels, probably interrupted
	// Note off skipped, note 60 not found in channels, probably interrupted
	14,((( 2 &4)<<5)|( 48 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3955, ticks 86394, elapsed 14, voice: 2 note: 48 velocity 0 event ('note', 86394, 2, 48, 0)
	0,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3956, ticks 86394, elapsed 0, voice: 1 note: 43 velocity 0 event ('note', 86394, 2, 43, 0)
	// Note off skipped, note 36 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3958, ticks 86394, elapsed 0, voice: 0 note: 62 velocity 0 event ('note', 86394, 3, 62, 0)
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3960, ticks 86394, elapsed 0, voice: 3 note: 43 velocity 0 event ('note', 86394, 3, 43, 0)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3961, ticks 86400, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 86400, 1, 40, 100)
	0,((( 1 &4)<<5)|( 28 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3962, ticks 86400, elapsed 0, voice: 1 note: 28 velocity 100 event ('note', 86400, 1, 28, 100)
	0,((( 2 &4)<<5)|( 40 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3963, ticks 86400, elapsed 0, voice: 2 note: 40 velocity 100 event ('note', 86400, 2, 40, 100)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3964, ticks 86400, elapsed 0, voice: 3 note: 47 velocity 100 event ('note', 86400, 2, 47, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3965, ticks 86400, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 86400, 3, 47, 100)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3966, ticks 86400, elapsed 0, voice: 0 note: 64 velocity 100 event ('note', 86400, 3, 64, 100)
	0,((( 0 &4)<<5)|( 28 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3967, ticks 86400, elapsed 0, voice: 0 note: 28 velocity 100 event ('note', 86400, 4, 28, 100)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3968, ticks 86400, elapsed 0, voice: 0 note: 59 velocity 100 event ('note', 86400, 5, 59, 100)
	0,((( 0 &4)<<5)|( 35 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3969, ticks 86400, elapsed 0, voice: 0 note: 35 velocity 100 event ('note', 86400, 10, 35, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3970, ticks 86412, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 86412, 2, 52, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3971, ticks 86412, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 86412, 3, 52, 100)
	13,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3972, ticks 86628, elapsed 13, voice: 3 note: 47 velocity 0 event ('note', 86628, 2, 47, 0)
	0,((( 2 &4)<<5)|( 40 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3973, ticks 86628, elapsed 0, voice: 2 note: 40 velocity 0 event ('note', 86628, 2, 40, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3977, ticks 86640, elapsed 0, voice: 0 note: 52 velocity 0 event ('note', 86640, 2, 52, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3979, ticks 86646, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 86646, 2, 47, 100)
	0,((( 2 &4)<<5)|( 40 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3980, ticks 86646, elapsed 0, voice: 2 note: 40 velocity 100 event ('note', 86646, 2, 40, 100)
	0,((( 3 &4)<<5)|( 52 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3981, ticks 86646, elapsed 0, voice: 3 note: 52 velocity 100 event ('note', 86646, 2, 52, 100)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3982, ticks 86646, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 86646, 3, 47, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3983, ticks 86646, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 86646, 3, 52, 100)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3984, ticks 86646, elapsed 0, voice: 0 note: 64 velocity 100 event ('note', 86646, 3, 64, 100)
	13,((( 1 &4)<<5)|( 28 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3985, ticks 86856, elapsed 13, voice: 1 note: 28 velocity 0 event ('note', 86856, 1, 28, 0)
	0,((( 2 &4)<<5)|( 40 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3986, ticks 86856, elapsed 0, voice: 2 note: 40 velocity 0 event ('note', 86856, 1, 40, 0)
	// Note off skipped, note 28 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	1,((( 3 &4)<<5)|( 52 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3989, ticks 86874, elapsed 1, voice: 3 note: 52 velocity 0 event ('note', 86874, 2, 52, 0)
	// Note off skipped, note 40 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3992, ticks 86874, elapsed 0, voice: 0 note: 64 velocity 0 event ('note', 86874, 3, 64, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3995, ticks 86880, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 86880, 2, 40, 100)
	0,((( 1 &4)<<5)|( 47 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 3996, ticks 86880, elapsed 0, voice: 1 note: 47 velocity 100 event ('note', 86880, 2, 47, 100)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3997, ticks 86880, elapsed 0, voice: 2 note: 47 velocity 100 event ('note', 86880, 3, 47, 100)
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3998, ticks 86880, elapsed 0, voice: 3 note: 64 velocity 100 event ('note', 86880, 3, 64, 100)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3999, ticks 86880, elapsed 0, voice: 0 note: 55 velocity 100 event ('note', 86880, 5, 55, 100)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 4000, ticks 86880, elapsed 0, voice: 0 note: 40 velocity 100 event ('note', 86880, 10, 40, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 4001, ticks 86892, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 86892, 2, 52, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 4002, ticks 86892, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 86892, 3, 52, 100)
	13,((( 1 &4)<<5)|( 47 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 4003, ticks 87108, elapsed 13, voice: 1 note: 47 velocity 0 event ('note', 87108, 2, 47, 0)
	// Note off skipped, note 40 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 4005, ticks 87108, elapsed 0, voice: 3 note: 64 velocity 0 event ('note', 87108, 3, 64, 0)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 4006, ticks 87108, elapsed 0, voice: 2 note: 47 velocity 0 event ('note', 87108, 3, 47, 0)
	// Note off skipped, note 40 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 4008, ticks 87120, elapsed 0, voice: 0 note: 52 velocity 0 event ('note', 87120, 2, 52, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 4010, ticks 87126, elapsed 0, voice: 0 note: 47 velocity 100 event ('note', 87126, 2, 47, 100)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 4011, ticks 87126, elapsed 0, voice: 1 note: 40 velocity 100 event ('note', 87126, 2, 40, 100)
	0,((( 2 &4)<<5)|( 52 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 4012, ticks 87126, elapsed 0, voice: 2 note: 52 velocity 100 event ('note', 87126, 2, 52, 100)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 4013, ticks 87126, elapsed 0, voice: 3 note: 47 velocity 100 event ('note', 87126, 3, 47, 100)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 4014, ticks 87126, elapsed 0, voice: 0 note: 52 velocity 100 event ('note', 87126, 3, 52, 100)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 4015, ticks 87126, elapsed 0, voice: 0 note: 64 velocity 100 event ('note', 87126, 3, 64, 100)
	// Note off skipped, note 55 not found in channels, probably interrupted
	14,((( 2 &4)<<5)|( 52 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 4017, ticks 87354, elapsed 14, voice: 2 note: 52 velocity 0 event ('note', 87354, 2, 52, 0)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 4018, ticks 87354, elapsed 0, voice: 1 note: 40 velocity 0 event ('note', 87354, 2, 40, 0)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 4019, ticks 87354, elapsed 0, voice: 3 note: 47 velocity 0 event ('note', 87354, 2, 47, 0)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 4020, ticks 87354, elapsed 0, voice: 0 note: 64 velocity 0 event ('note', 87354, 3, 64, 0)
0xff };

