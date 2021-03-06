/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

#include "gruvbox.h"

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Iosevka:size=12"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { gb$light2 , gb$dark0 },
	[SchemeSel] = { gb$dark0_hard, gb$neutral_purple },
	[SchemeSelHighlight] = { gb$light2 , gb$neutral_purple },
	[SchemeNormHighlight] = { gb$bright_purple, gb$dark0 },
	[SchemeOut] = { gb$bright_green, gb$dark0 },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 20;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 2;

/* Default width of the window; can be overridden using the -w option */
static const unsigned int default_width = 400;
