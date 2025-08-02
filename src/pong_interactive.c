#include <ncurses.h>
#include <stdio.h>

void graphics(int x, int y, int racket_1y, int racket_2y, int ball_x, int ball_y, int height, int width);
void instruction();
void scoreboard(int score_1, int score_2);
void congratulations(int score_1, int score_2);

void init_ncurses() {
    initscr();              // Инициализация ncurses
    cbreak();               // Отключение буферизации
    noecho();               // Отключение отображения символов
    nodelay(stdscr, TRUE);  // Делаем getch() неблокирующим
    keypad(stdscr, TRUE);   // Разрешение спец. клавиш
}

void end_ncurses() {
    endwin();  // Восстановление терминала
}

int main() {
    init_ncurses();
    const int width = 60, height = 19;
    int racket_1y = height / 2, racket_2y = height / 2, ball_x = width / 2, ball_y = height / 2, dx = 1,
        dy = 1, score_1 = 0, score_2 = 0;
    char action;
    while (1) {
        clear();  // Очищение экрана
        (ball_x) += (dx);
        (ball_y) += (dy);
        if (ball_y <= 1 || ball_y >= height - 2) dy = -(dy);
        if (ball_x == 2) {
            if (ball_y >= racket_1y - 1 && ball_y <= racket_1y + 1)
                dx = -(dx);
            else {
                ++(score_2);
                ball_x = width / 2;
                ball_y = height / 2;
                dx = 1;
                dy = 1;
            }
        }
        if (ball_x == width - 4) {
            if (ball_y >= racket_2y - 1 && ball_y <= racket_2y + 1)
                dx = -(dx);
            else {
                ++(score_1);
                ball_x = width / 2;
                ball_y = height / 2;
                dx = -1;
                dy = 1;
            }
        }
        if (score_1 == 21 || score_2 == 21) {
            congratulations(score_1, score_2);
            return 0;
        }
        scoreboard(score_1, score_2);
        for (int y = 0; y < height; ++y) {
            for (int x = 0; x < width; ++x) {
                graphics(x, y, racket_1y, racket_2y, ball_x, ball_y, height, width);
            }
            addch('\n');
        }
        refresh();  // Обновление экрана
        instruction();
        action = getch();
        if (action == 'q') {
            end_ncurses();
            break;
        } else if (action == ' ')
            continue;
        else {
            if (action == 'a') {
                if (racket_1y > 2) --(racket_1y);
            } else if (action == 'z') {
                if (racket_1y < height - 3) ++(racket_1y);
            } else if (action == 'k') {
                if (racket_2y > 2) --(racket_2y);
            } else if (action == 'm') {
                if (racket_2y < height - 3) ++(racket_2y);
            }
        }
        napms(50);  // Задержка
    }
}

void graphics(int x, int y, int racket_1y, int racket_2y, int ball_x, int ball_y, int height, int width) {
    if (y == 0 || y == height - 1 || x == 0 || x == width - 1) {
        addch('#');
    } else if (x == 2) {
        (y >= racket_1y - 1 && y <= racket_1y + 1) ? addch('|') : addch(' ');
    } else if (x == width - 3) {
        (y >= racket_2y - 1 && y <= racket_2y + 1) ? addch('|') : addch(' ');
    } else if (x == ball_x && y == ball_y) {
        addch('o');
    } else {
        addch(' ');
    }
}

void instruction() {
    printw("Control:\n");
    printw("Racket 1: 'a' - up, 'z' - down\n");
    printw("Racket 2: 'k' - up, 'm' - down\n");
    printw("Skipping a move: space\n");
    printw("Exit: 'q'\n");
}

void scoreboard(int score_1, int score_2) {
    printw("SCore: player_1 - %d  player_2 - %d\n", score_1, score_2);
}

void congratulations(int score_1, int score_2) {
    if (score_1 == 21) {
        printw("WINNER - player_1\n");
        end_ncurses();
    }

    if (score_2 == 21) {
        printw("WINNER - player_2\n");
        end_ncurses();
    }
}
