//
//  main.cpp
//  test
//
//  Created by Chukie on 15/8/7.
//  Copyright (c) 2015年 Chukie. All rights reserved.
//
#define GLFW_INCLUDE_GLCOREARB
#include <iostream>
#include <ctime>
#include <map>
#include "Game.h"

using namespace std;

int main(int argc, const char * argv[]) {
    Library::Game* game = new Library::Game("oglFrameWork",SCREEN_WIDTH,SCREEN_HEIGHT);
    if(!game->Run())
    {
        std::cout<<"game run failed"<<std::endl;
    }
    else
    {
        std::cout<<"game exit"<<std::endl;
    }
    
//    const glm::vec4 CornflowerBlue = glm::vec4(0.392f, 0.584f, 0.929f, 1.0f);
//    
//    if (!glfwInit())
//    {
//        return -1;
//    }
//    
//    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
//    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
//    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
//    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 1);
//    GLFWwindow* window = glfwCreateWindow(800, 600, "OpenGL Essentials", nullptr, nullptr);
//    if (window == nullptr)
//    {
//        return -1;
//    }
//    
//    glfwMakeContextCurrent(window);
//    cout << "OpenGL Vendor:" << glGetString(GL_VENDOR) << endl;
//    cout << "OpenGL Renderer: " << glGetString(GL_RENDERER) << endl;
//    cout << "OpenGL Version: " << glGetString(GL_VERSION) << endl;
//    cout << "GLSL Version:" << glGetString(GL_SHADING_LANGUAGE_VERSION) << endl;
//    
//    glViewport(0, 0, 800, 600);
//    GLuint vao;
//    glGenVertexArrays(1, &vao);
//    glBindVertexArray(vao);
//    
//    while (!glfwWindowShouldClose(window))
//    {
//        glClear(GL_COLOR_BUFFER_BIT);
//        glClearColor(0.2, 0.3, 0.8, 1.0);
//        
//        glDrawArrays(GL_ARRAY_BUFFER, 0, 0);
//        glfwSwapBuffers(window);
//        glfwPollEvents();
//    }
//    
//    glfwDestroyWindow(window);
//    glfwTerminate();
    return 0;
}
