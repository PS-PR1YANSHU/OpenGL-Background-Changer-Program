# 🎨 OpenGL Background Color Changer

A simple OpenGL project written in **C++** using **GLFW** and **GLEW**.
This program changes the background color based on the keyboard key you press.

---

## 📖 About

This is my **first OpenGL project**. It demonstrates:

* OpenGL window creation
* Keyboard input using GLFW
* Background color manipulation with `glClearColor()`
* Basic rendering loop

The complete source code is included in this repository.

---

## ⌨️ Controls

| Key                   | Action                        |
| --------------------- | ----------------------------- |
| **R**                 | Enable Red                    |
| **G**                 | Enable Green                  |
| **B**                 | Enable Blue                   |
| **1**                 | Disable Red                   |
| **2**                 | Disable Green                 |
| **3**                 | Disable Blue                  |
| **Backspace**         | Reset to Black                |
| **Enter** / **Space** | Set Color to White (RGB Full) |
| **L**                 | Light Gray                    |
| **O**                 | Orange                        |

---

## 📦 Dependencies

This project requires the following libraries:

* OpenGL
* GLFW
* GLEW
* C++ Compiler (g++)

All required project dependencies are included in this repository.

---

## 🛠 Development Environment

### IDE

* Visual Studio Code

### Compiler

* MSYS2 MinGW64 (g++)

---

## 🔧 Build

Compile using:

```bash
g++ main.cpp -o main -lglew32 -lglfw3 -lopengl32
```

Compile and run:

```powershell
g++ main.cpp -o main -lglew32 -lglfw3 -lopengl32
if ($?) { .\main }
```

---

## 📝 Notes

* The build commands above were tested on **Windows** using **Visual Studio Code** with **MSYS2 MinGW64**.
* Windows already includes OpenGL (`opengl32.dll`), so you do not need to install OpenGL separately.
* If the program reports an OpenGL-related error, your graphics driver or hardware may not support the required version.
