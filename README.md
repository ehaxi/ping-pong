# Pong Game in Terminal with ncurses  

🔹 **Brief Description**  
This project is a classic Pong game implemented in the terminal using the ncurses library. It offers a simple yet engaging two-player experience, where players control paddles to hit a ball and score points. The game features real-time controls, a scoreboard, and a winner announcement upon reaching 21 points.  

## Acquired/Improved Skills  
- **Low-Level Programming**: Developed proficiency in C programming and mastered ncurses library for creating terminal-based graphical interfaces.  
- **Game Development Fundamentals**: Gained hands-on experience implementing core game mechanics including real-time physics simulation, collision detection, and score tracking.  
- **Interactive Systems Design**: Created responsive two-player control scheme with intuitive keyboard inputs and smooth real-time rendering.  
- **Software Architecture**: Designed modular system architecture with clear separation between display, game logic and control components.  
- **Performance Optimization**: Implemented efficient rendering pipeline achieving smooth gameplay with minimal resource consumption in terminal environment.  
- **Debugging & Testing**: Performed extensive manual testing to ensure proper game mechanics and edge case handling.  
- **User Experience**: Developed clear in-game instructions and feedback systems for player actions.  

## 🛠️ Technologies  
- **Language**: C  
- **Library**: ncurses (for terminal-based UI and input handling)  
- **Environment**: Unix-like systems (Linux, macOS)  

## ✨ Key Features  
- **Terminal-Based UI**: Utilizes ncurses for rendering graphics and handling input in the terminal.  
- **Real-Time Controls**: Players can move paddles up and down using keyboard keys (`a/z` for Player 1, `k/m` for Player 2).  
- **Score Tracking**: Displays live scores and announces the winner when a player reaches 21 points.  
- **Simple and Lightweight**: No external dependencies beyond ncurses, making it easy to compile and run.  

## 🚀 How to Run the Project  

### Prerequisites  
- Ensure `ncurses` is installed on your system. On Ubuntu/Debian, you can install it with:  
  ```bash  
  sudo apt-get install libncurses-dev  
  ```
### Compilation and Execution
- Clone the repository:
  ```bash
  git clone git@github.com:ehaxi/ping-pong.git
  cd ping-pong/src
  ```
- Compile the program:
  ```bash
  make pong_interactive
  ```
- Run the game:
  ```bash
  ./pong_interactive
  ```
