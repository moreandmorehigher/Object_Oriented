void UseSmartPointer()
{
    unique_ptr<Song> song2(new Song(L"Nothing on You", L"Bruno Mars"));

    wstring s = song2 -> duration_;
}