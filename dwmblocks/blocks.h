//Modify this file to change what commands output to your statusbar, and recompile using the make command.

static const Block blocks[] = {
    /*Icon*/    /*Command*/                    /*Update Interval*/    /*Update Signal*/
    //{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",    30,        0},

    //{"", "$(pamixer --get-volume)",                    0,        10}, // Commenter la partie du volume
    {"", "cat /sys/class/power_supply/BAT0/capacity",    30,        0}, // Lecture directe du fichier capacity
    {"", "$(date '+%H:%M')",                    5,        0}, // Format 24 heures
    {"", "^$(date '+%b %d (%a) %Y') \"",                    5,        0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;

