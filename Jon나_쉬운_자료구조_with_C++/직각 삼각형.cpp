#include <iostream>

using namespace std;

int main() {
    int height;
    cout << "³ôÀÌ : ";
    cin >> height;
    char** data = (char**)malloc(height * sizeof(char*));
    for (int i = 0; i < height; i++) {
        *(data + i) = (char*)malloc(i + 2 * sizeof(char));
        for (int j = 0; j < i + 1; j++)
            *(*(data + i) + j) = '*';
        *(*(data + i) + i+1)  = '\0';
    }
    for (int i = 0; i < height; i++)
        cout << *(data + i)<<"\n";
    free(data);
    return 0;
}