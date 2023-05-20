static const char norm_fg[] = "#dfddd2";
static const char norm_bg[] = "#080708";
static const char norm_border[] = "#9c9a93";

static const char sel_fg[] = "#dfddd2";
static const char sel_bg[] = "#837C78";
static const char sel_border[] = "#dfddd2";

static const char urg_fg[] = "#dfddd2";
static const char urg_bg[] = "#74706E";
static const char urg_border[] = "#74706E";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
