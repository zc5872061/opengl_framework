//
//  Util.h
//  test
//
//  Created by Chukie on 15/9/15.
//  Copyright (c) 2015年 Chukie. All rights reserved.
//
#pragma once

#include <string>

using namespace std;

#define HOME

#ifdef HOME
#define cubeVertexShaderStr  "/Users/chukie/Study/WorkWork/opengl_framework/test/resource/CubeDemo.vert"
#define cubeFragShaderStr  "/Users/chukie/Study/WorkWork/opengl_framework/test/resource/CubeDemo.frag"
#define bassicVertexShaderStr  "/Users/chukie/Study/WorkWork/opengl_framework/test/resource/BasicEffect.vert"
#define bassicFragShaderStr  "/Users/chukie/Study/WorkWork/opengl_framework/test/resource/BasicEffect.frag"
#else
#define cubeVertexShaderStr  "/Users/chukie/Desktop/Demo/opengl_framework/test/resource/CubeDemo.vert"
#define cubeFragShaderStr  "/Users/chukie/Desktop/Demo/opengl_framework/test/resource/CubeDemo.frag"
#define bassicVertexShaderStr  "/Users/chukie/Desktop/Demo/opengl_framework/test/resource/BasicEffect.vert"
#define bassicFragShaderStr  "/Users/chukie/Desktop/Demo/opengl_framework/test/resource/BasicEffect.frag"
#endif

