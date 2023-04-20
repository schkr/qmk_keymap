/* PloopyCo Thumb Trackball Config
Used for schkr/keymap.c
*/

// ## Ploopy Main Mouse Settings
#define PLOOPY_DPI_OPTIONS { 100, 1600, 1800, 2400 } // Define DPI array. Default { 600, 900, 1200, 1600 }
#define PLOOPY_DPI_DEFAULT 1 // Set Default DPI based on 0 index array. Default 0.
#define OPT_DEBOUNCE 5  // (ms) Time between scroll events. Default 5
#define SCROLL_BUTT_DEBOUNCE 100  // (ms) Time between scroll events. Default 100

// ### Ploopy Drag Scroll Settings
#define PLOOPY_DRAGSCROLL_MOMENTARY // Makes key into a momentary key, rather than toggle. Default disabled
// #define PLOOPY_DRAGSCROLL_MULTIPLIER 0.45 // Sets DPI multiplier instead of fixed. Default 0.75, disabled
#define PLOOPY_DRAGSCROLL_FIXED // Enable fixed DPI rather than a DRAGSCROLL_MULTIPLIER. Default disabled
#define PLOOPY_DRAGSCROLL_DPI 100 // Sets the FIXED DPI to be used for Drag Scroll. Default 100, disabled
#define PLOOPY_DRAGSCROLL_INVERT // Reverse the direction of scroll (aka macOS default). Default enabled

// ## QMK Settings
#define ONESHOT_TAP_TOGGLE 2  /* Tapping this number of times holds the key until tapped once again. */
#define ONESHOT_TIMEOUT 5000  /* Time (in ms) before the one shot key is released */
