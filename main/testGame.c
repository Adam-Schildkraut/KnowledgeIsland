#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "Game.h"

int main(int argc, char *argv[]) {

	Game testGame = newGame(DEFAULT_DISCIPLINES, DEFAULT_DICE);

	// TODO: write your tests on the Game here, using asserts

	// clean up: keep your memory beautiful
	disposeGame(testGame);

	// TODO: all tests passed message :)

	return EXIT_SUCCESS;
}
