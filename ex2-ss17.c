#include <stdio.h>
#include <string.h>

void inputString(char *str) {
    printf("Moi ban nhap vao chuoi: ");
    scanf(" %[^\n]", str); 
    printf("\n");
}

void displayString(char *str) {
    printf("Chuoi vua nhap la: %s\n\n", str);
}

void countLetters(char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            count++;
        }
    }
    printf("So luong chu cai trong chuoi: %d\n\n", count);
}

void countDigits(char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            count++;
        }
    }
    printf("So luong chu so trong chuoi: %d\n\n", count);
}

void countSpecialCharacters(char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (!((str[i] >= 'a' && str[i] <= 'z') || 
              (str[i] >= 'A' && str[i] <= 'Z') || 
              (str[i] >= '0' && str[i] <= '9') || 
              str[i] == ' ')) {
            count++;
        }
    }
    printf("So luong ky tu dac biet trong chuoi: %d\n\n", count);
}

int main() {
    int menu;
    char str[100] = "";
    int isStringEntered = 0;

    do {
        printf("MENU\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi\n");
        printf("3. Dem so luong chu cai trong chuoi\n");
        printf("4. Dem so luong chu so trong chuoi\n");
        printf("5. Dem so luong ky tu dac biet trong chuoi\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &menu);

        if (!isStringEntered && menu != 1 && menu != 6) {
            printf("Chuoi chua duoc nhap. Vui long chon 1 de nhap chuoi truoc!\n\n");
            continue;
        }

        switch (menu) {
            case 1:
                inputString(str);
                isStringEntered = 1;
                break;
            case 2:
                displayString(str);
                break;
            case 3:
                countLetters(str);
                break;
            case 4:
                countDigits(str);
                break;
            case 5:
                countSpecialCharacters(str);
                break;
            case 6:
                printf("Thoat chuong trinh. Tam biet!\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long nhap lai!\n\n");
        }
    } while (menu != 6);

    return 0;
}

