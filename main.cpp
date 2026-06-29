#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>

struct state{
    float r = 0.0f;
    float g = 0.0f;
    float b = 0.0f;
};

int main(){
    /*---VARIABLES---*/
    state color;

    /*---GLFW SETUP---*/
    glfwInit();
    GLFWwindow* window = glfwCreateWindow(800, 600, "Background Color Changer", NULL, NULL);
    glfwMakeContextCurrent(window);
    /*---GLEW---*/
    glewExperimental = GL_TRUE;
    glewInit();

    //Color
    glClearColor(color.r, color.g, color.b, 1.0f);

    //Rendering Loop
    while(!glfwWindowShouldClose(window)){
        glfwPollEvents();

        //Color per key
        if(glfwGetKey(window, GLFW_KEY_R) == GLFW_PRESS) color.r = 1.0f;
        if(glfwGetKey(window, GLFW_KEY_G) == GLFW_PRESS) color.g = 1.0f;
        if(glfwGetKey(window, GLFW_KEY_B) == GLFW_PRESS) color.b = 1.0f;

        //Removing Keys
        if(glfwGetKey(window, GLFW_KEY_1) == GLFW_PRESS) color.r = 0.0f;
        if(glfwGetKey(window, GLFW_KEY_2) == GLFW_PRESS) color.g = 0.0f;
        if(glfwGetKey(window, GLFW_KEY_3) == GLFW_PRESS) color.b = 0.0f;

        //All Color Removing Key
        if(glfwGetKey(window, GLFW_KEY_BACKSPACE) == GLFW_PRESS){
            color.r=0.0f;
            color.g=0.0f;
            color.b=0.0f;
        };

        //All Color Adding Key
        if(glfwGetKey(window, GLFW_KEY_ENTER) == GLFW_PRESS || glfwGetKey(window, GLFW_KEY_SPACE) == GLFW_PRESS ){
            color.r=1.0f;
            color.g=1.0f;
            color.b=1.0f;
        };
        
        //Specific Keys
        if(glfwGetKey(window, GLFW_KEY_L) == GLFW_PRESS){
            color.r=0.827f;
            color.g=0.827f;
            color.b=0.827f;
        };
        if(glfwGetKey(window, GLFW_KEY_O) == GLFW_PRESS){
            color.r=1.0f;
            color.g=0.627f;
        };
        
        glClearColor(color.r, color.g, color.b, 1.0);
        glClear(GL_COLOR_BUFFER_BIT);
        glfwSwapBuffers(window);
    }

    glfwTerminate();

    return 0;
}