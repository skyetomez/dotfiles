const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#080708", /* black   */
  [1] = "#74706E", /* red     */
  [2] = "#837C78", /* green   */
  [3] = "#88827C", /* yellow  */
  [4] = "#798185", /* blue    */
  [5] = "#9A9A94", /* magenta */
  [6] = "#C0BFB1", /* cyan    */
  [7] = "#dfddd2", /* white   */

  /* 8 bright colors */
  [8]  = "#9c9a93",  /* black   */
  [9]  = "#74706E",  /* red     */
  [10] = "#837C78", /* green   */
  [11] = "#88827C", /* yellow  */
  [12] = "#798185", /* blue    */
  [13] = "#9A9A94", /* magenta */
  [14] = "#C0BFB1", /* cyan    */
  [15] = "#dfddd2", /* white   */

  /* special colors */
  [256] = "#080708", /* background */
  [257] = "#dfddd2", /* foreground */
  [258] = "#dfddd2",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
