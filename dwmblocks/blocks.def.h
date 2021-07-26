//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/

    {" 🐧 ", "/home/helico/dwm/dwmblocks-distrotube/scripts/kernel",		    360,		        2},

	{" 🔺 ", "/home/helico/dwm/dwmblocks-distrotube/scripts/upt",		        60,		            2},

	{" 📦 ", "/home/helico/dwm/dwmblocks-distrotube/scripts/pacupdate",		360,		        9},
	
    {"  💻", "/home/helico/dwm/dwmblocks-distrotube/scripts/cpu",			1,		            0},
	{" 💾 ", "/home/helico/dwm/dwmblocks-distrotube/scripts/memory",	        1,		            0},

	{" 🔊 ", "/home/helico/dwm/dwmblocks-distrotube/scripts/volume",			2,		            0},

	{" 🕑 ", "/home/helico/dwm/dwmblocks-distrotube/scripts/clock",			5,		            0},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
