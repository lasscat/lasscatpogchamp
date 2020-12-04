
#include <3ds.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	gfxInitDefault();
	
	consoleInit(GFX_TOP, NULL);
	
	printf("\x1b[16;0HLasscat is super awesome and is pog champ\n");
	
	printf("\nTo see what this app does search this link up:    \x1b[31mhttps://bit.ly/2VDfpJM\x1b[0m\n");
	
	printf("\n\Press start to go to homescreen or exit.");
	
	// Main loop
	while (aptMainLoop())
	{
		//Scan all the inputs. This should be done once for each frame
		hidScanInput();

		//hidKeysDown returns information about which buttons have been just pressed (and they weren't in the previous frame)
		u32 kDown = hidKeysDown();

		if (kDown & KEY_START) break; // break in order to return to hbmenu
		
	}

	gfxExit();
	return 0;
}
