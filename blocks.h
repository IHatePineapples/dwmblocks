//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
//	{"", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

	{" ", "",		60,		0},
	{"", "acpi -b | awk '/^Battery/ { print $3 $4}' | sed 's/,$/\ /' ",		60,		0},
    {"used ", "free -h | awk '/^Mem/ { print $4 }'",        10,     0},   
    {"free ", "free -h | awk '/^Mem/ { print $3 }'",        10,     0},    
    {"", "date +'%Y-%m-%d %H:%M:%S'",					5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
