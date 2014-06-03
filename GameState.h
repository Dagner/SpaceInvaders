#pragma once
#include "GameStateManager.h"
#include "ofxUI.h"

class GameStateManager;
class GameState {
public:
  virtual void init() = 0;
  virtual void cleanup() = 0;

  virtual void pause() = 0;
  virtual void resume() = 0;

  virtual void keyPressed(int key) = 0;
  virtual void mouseMoved(int x, int y) = 0;
  virtual void update(GameStateManager* game) = 0;
  virtual void draw(GameStateManager* game) = 0;
  virtual void guiEvent(ofxUIEventArgs &e) = 0;

  void changeState( GameStateManager* gameMgr, GameState* state){
	  gameMgr->changeState(state);
  }

  protected: GameState() { }

};

