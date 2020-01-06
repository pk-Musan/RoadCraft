#include "Map.h"

Map::Map( char *filename ) {
	/*
	file読み込んで幅と高さを取得
	その後，stateに対してwidth * height分の領域を確保して埋めていく
	*/
	width = 0;
	height = 0;
	startX = 0;
	startY = 0;
}

std::tuple< int, int > Map::getStartPos() {
	return { startX, startY };
}

void Map::update( int tx, int ty, int type ) {
	state[ty * width + tx] = type;

	createObject( type );
}

bool Map::hitCheck( int x, int y ) {
	if ( state[y * width + x] > 0 ) {
		return true;
	} else return false;
}

void Map::createObject( int type ) {

}