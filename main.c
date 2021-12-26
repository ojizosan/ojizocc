#include "9cc.h"

int main(int argc, char **argv) {
  if (argc != 2) error("%s: 引数の個数が正しくありません", argv[0]);

  // トークナイズしてパースする
  user_input = argv[1];
  token = tokenize(user_input);
  Node *node = expr();

  // アセンブリの前半部分を出力
  codegen(node);

  return 0;
}