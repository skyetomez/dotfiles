static const char norm_fg[] = "#e6e6e0";
static const char norm_bg[] = "#221b3c";
static const char norm_border[] = "#a1a19c";

static const char sel_fg[] = "#e6e6e0";
static const char sel_bg[] = "#E1A296";
static const char sel_border[] = "#e6e6e0";

static const char urg_fg[] = "#e6e6e0";
static const char urg_bg[] = "#5691D4";
static const char urg_border[] = "#5691D4";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
