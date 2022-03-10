#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <stdbool.h>
#include <math.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
typedef struct ennemi
{





}ennemi;


void initEnnemi(Ennemi*e)
void afficherEnnemi(Ennemi e, SDL_Surface * screen)
void animerEnnemi( Ennemi * e)
void deplacer( Ennemi * e)
int collisionBB( personne p, Ennemi e) ou int collisionBB( SDL_Rect posp, SDL_Rect pose)
