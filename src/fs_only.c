// make FS_ONLY=1: boot straight into Four Swords. Linked at 0x08700000 (ldscript.txt) because the
// ROM's .INCBIN data still holds fixed code addresses, so code before it must not move.
#ifdef FS_ONLY
void sub_08030E0C(void);

// Replaces the "CHOOSE A GAME" handler (mode 6) in the mode table: start Four Swords as soon as a
// file is picked, as FourSwordsRecomp's fs_boot.cpp does.
void fs_only_choose_game(void)
{
    sub_08030E0C();
}
#endif
