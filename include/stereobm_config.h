#ifndef _STEREOBM_CONFIG_H_
#define _STEREOBM_CONFIG_H_

/* Input and output image resolution */
#define IMG_WIDTH 450
#define IMG_HEIGHT 375

/* Size of disparity window, e.g. 5x5 */
#define SAD_WINDOW_SIZE 17
#define SAD_WINDOW_SIZE2 (SAD_WINDOW_SIZE / 2)

/* Bit depth of the sobel filter */
#define SOBEL_DEPTH 4
#define SOBEL_CLAMP ((1 << SOBEL_DEPTH) - 1)

/* Bit depth of the depth map */
#define DISPARITY_DEPTH 7
#define DISPARITY_CLAMP ((1 << DISPARITY_DEPTH) - 1)

/* Start and stop indices for block matching */
#define MIN_DISPARITY 0
#define MAX_DISPARITY 96

/* The percentage by which the best SAD value must beat every other SAD value
 * for a given pixel location */
#define UNIQ_RATIO 15

#endif
