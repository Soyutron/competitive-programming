# コンパイラとフラグの設定
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -Wconversion -O2

# ビルド対象とソースファイル
TARGET = main
SRC = main.cpp

# デフォルトターゲット: make とだけ打つと help が表示される
.DEFAULT_GOAL := help

# ソースをコンパイルして実行ファイルを生成
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# build: 実行ファイルをビルドする
build: $(TARGET)

# run: ビルドしてから実行する
run: $(TARGET)
	./$(TARGET)

# clean: 生成物を削除する
clean:
	rm -f $(TARGET) a.out

# help: 利用可能なコマンド一覧を表示する
help:
	@echo "利用可能なコマンド:"
	@echo "  make build  - ソースをビルドして実行ファイルを生成"
	@echo "  make run    - ビルドしてから実行ファイルを実行"
	@echo "  make clean  - 生成物 (main, a.out) を削除"
	@echo "  make help   - このヘルプメッセージを表示"

.PHONY: build run clean help
