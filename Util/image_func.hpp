/// *********************16/02/2013***********************///
/* Some Global functions in namespace ImageFunc,
used for ease of processing images
*/


#ifndef _IMAGE_FUNC_HPP_
    #define _IMAGE_FUNC_HPP_

#include<SDL2/SDL.h>

namespace ImageFunc
{

SDL_Surface* LoadSprites(const char* filemame,bool alpha=false,
                         int r=0, int g=0, int b=0);

int BlitSprites(int dx, int dy, SDL_Surface*src, SDL_Surface*des,
                bool clip=false,int cx=0, int cy=0,int cw=0, int ch=0);

}



#endif
