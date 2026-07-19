class Solution {
public:
    int lengthOfLastWord(string s) {
        // 1.st store words in vector 
        //2. iterate left to right and count the words
        //3 go to last string avoid trailing space and count character

        int i = s.length()-1; // counts /0
        int count =0;

        while (i>=0 && s[i]==' '){
            i--; // heloo worldXX peeche ke space ko hta kr index hta
        } 
        // now count the char
        while(i>=0 && s[i]!=' '){
            i--;
            count++;
        }
        return count;
    }
};
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
using namespace std;

static constexpr size_t max_align = alignof(max_align_t);
alignas(max_align) static unsigned char BUFFER[64 * 1024 * 1024];
static size_t pos = 0;

void *operator new(const size_t size) {
    const size_t padding = (max_align - (pos % max_align)) % max_align;
    pos += padding + size;
    return static_cast<void *>(&BUFFER[pos - size]);
}

void *operator new[](const size_t size) { return operator new(size); }
void operator delete(void *) noexcept {}
void operator delete[](void *) noexcept {}
void operator delete(void *, size_t) noexcept {}
void operator delete[](void *, size_t) noexcept {}