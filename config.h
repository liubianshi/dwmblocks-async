#define CMDLENGTH 80
#define DELIMITER " "
#define CLICKABLE_BLOCKS
// #define LEADING_DELIMITER ""

const Block blocks[] = {
	//BLOCK("sb-mail",    1800, 17),
	//BLOCK("sb-music",   0,    18),
	//BLOCK("sb-disk",    1800, 19),
	//BLOCK("sb-memory",  10,   20),
	//BLOCK("sb-loadavg", 5,    21),
	//BLOCK("sb-mic",     0,    26),
	//BLOCK("sb-record",  0,    27),
	//BLOCK("sb-volume",  0,    22),
	//BLOCK("sb-battery", 5,    23),
	//BLOCK("sb-date",    1,    24)
    BLOCK("weather",    18000, 1),
    BLOCK("memory",     10, 0),
    BLOCK("clock",      60, 0)
};
