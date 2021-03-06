#ifndef __MODULESCENEHAO_H__
#define __MODULESCENEHAO_H__

#include "Module.h"
#include "Animation.h"
#include "Globals.h"

struct SDL_Texture;

class ModuleSceneHao : public Module
{
public:
	ModuleSceneHao();
	~ModuleSceneHao();

	bool Start();
	update_status Update();
	bool CleanUp();


public:

	SDL_Texture* graphics = nullptr;
	SDL_Texture* ui = nullptr;
	SDL_Rect ground;
	SDL_Rect foreground;
	SDL_Rect background;

	Animation backgroundanim;

	void roundFinish();
	void BattleEnd();


	//text vars
	bool start = false;
};

#endif // __MODULESCENEHAO_H__