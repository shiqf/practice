typedef unsigned packed_t;

int xbyte(packed_t word, int bytenum) {
    int left_move = (sizeof(int) - bytenum - 1) << 3;

    return (int)(word << left_move) >> 24;
}
