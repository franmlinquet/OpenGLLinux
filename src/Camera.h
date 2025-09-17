#ifndef CAMERA_H
#define CAMERA_H

#include <glad/glad.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

// ENUM
enum Camera_Movement
{
    FORWARD,
    BACLWARD,
    LEFT, 
    RIGHT
};

// DEFAULT VALUES
const float YAW         = -90.0f;
const float PITCH       = 0.0f;
const float SPEED       = 2.5f;
const float SENSITIVITY = 0.1f;
const float ZOOM        = 45.0f;

class Camera
{
    public:
    // Attributes
    // Euler Angles
    // Options

    // Constructors

    // View Matrix

    // Input Process
};
#endif