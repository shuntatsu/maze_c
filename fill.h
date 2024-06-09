#pragma once  // プラグマ ワンス

// 迷路を表す構造体
typedef struct{

    // 幅、高さ
    int width, height;

    // 迷路の文字配列を指すポインタ
    char* map;  
} MAZE;

// 迷路を作成・破棄。出力す関数の宣言
MAZE* new_maze(int width, int height);
void delete_maze(MAZE* maze);
void print_maze(MAZE* maze);
