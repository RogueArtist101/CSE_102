Flappy Bird Game in C++

Flappy Bird OpenGL Igraphics C++ License
📖 Introduction

This project is a recreation of the classic Flappy Bird game, written in C++ using the Igraphics library (an OpenGL wrapper). The goal is to provide the same engaging and challenging gameplay as the original, with smooth graphics and a scoring system.
🎮 Features

    Classic Flappy Bird mechanics: Tap to fly, avoid the pipes, and keep going as long as you can.
    Simple and intuitive controls: Just one input to control the bird's flight.
    Scoring system: Track your progress as you navigate the bird through the obstacles.
    Smooth and responsive graphics powered by OpenGL.
    Cross-platform support: Buildable on most systems with OpenGL support.

🚀 Getting Started
Prerequisites

Make sure you have the following installed on your system:

    A C++ compiler (e.g., g++, clang++)
    OpenGL libraries (glut, GLU, GL)
    Igraphics library (follow Igraphics documentation to install)

Installation & Compilation

    Clone the repository:

    bash

git clone https://github.com/RogueArtist101/CSE_102.git
cd CSE_102

Build the game:

bash

g++ -o iMain.exe iMain.cpp -lglut -lGLU -lGL

Run the executable:

bash

    ./iMain.exe

📦 Directory Structure

bash

CSE_102/
│
├── assets/          # Contains game resources (images, fonts, etc.)
├── src/             # Source files for the game
│   ├── iMain.cpp    # Main game logic
│   └── bird.cpp     # Bird movement and controls
│
├── README.md        # Project documentation
└── LICENSE          # MIT License file

🎮 Controls

    Press the Spacebar or Mouse Click to make the bird fly.
    The bird will automatically fall due to gravity when you are not tapping.
    Navigate through gaps between the pipes to score points.

🛠️ Troubleshooting

    If you encounter issues with OpenGL during compilation, ensure your system has the proper libraries:
        On Ubuntu/Debian:

        bash

        sudo apt-get install freeglut3-dev

        On Windows, ensure your IDE or build environment is set up to link OpenGL libraries.
    Graphics performance issues: Lower the window size or reduce graphical complexity.

📜 License

This project is licensed under the MIT License. See the LICENSE file for details.
🙌 Contributions

Feel free to submit issues, fork the repository, and create pull requests. Contributions to improve gameplay, graphics, or add new features are welcome!
