const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#221b3c", /* black   */
  [1] = "#5691D4", /* red     */
  [2] = "#E1A296", /* green   */
  [3] = "#D0ADA0", /* yellow  */
  [4] = "#9AA9D2", /* blue    */
  [5] = "#B3C7D4", /* magenta */
  [6] = "#D2D6D2", /* cyan    */
  [7] = "#e6e6e0", /* white   */

  /* 8 bright colors */
  [8]  = "#a1a19c",  /* black   */
  [9]  = "#5691D4",  /* red     */
  [10] = "#E1A296", /* green   */
  [11] = "#D0ADA0", /* yellow  */
  [12] = "#9AA9D2", /* blue    */
  [13] = "#B3C7D4", /* magenta */
  [14] = "#D2D6D2", /* cyan    */
  [15] = "#e6e6e0", /* white   */

  /* special colors */
  [256] = "#221b3c", /* background */
  [257] = "#e6e6e0", /* foreground */
  [258] = "#e6e6e0",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
