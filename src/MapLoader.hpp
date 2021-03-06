//
//  MapLoader.hpp
//  OpenGL
//
//  Created by Execution on 02/01/2017.
//  Copyright © 2017 Execution. All rights reserved.
//

#ifndef MapLoader_hpp
#define MapLoader_hpp

#include "macro.h"
extern OBJ obj[10000];
extern Object object[10000];
extern vec3 position;

bool loadMap(char * filename);
int loadMdl(const char* path, int objIndex);
int loadMat(const char* path, int mtlIndex);
bool shouldDelete(const char* entity, const int rcd);
bool shouldReverseNormal(const char* mdl);
int findDiffuseTexture(const char* path);
int findNormalTexture(const char* path);
#endif /* MapLoader_hpp */
