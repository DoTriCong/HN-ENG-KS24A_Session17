#include <stdio.h>
#include <string.h>

void inputString(char *str); 
void reverseString(char *str); 
void countWords(char *str);
void compareStrings(char *str1);
void uppercaseString(char *str);
void appendString(char *str1);
int main() {
    int menu;
    char str[200] = ""; 
    int isStringEntered = 0;

    do {
        printf("MENU\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi dao nguoc\n");
        printf("3. Dem so luong tu trong chuoi\n");
        printf("4. So sanh voi chuoi khac\n");
        printf("5. In hoa tat ca chu cai trong chuoi\n");
        printf("6. Them chuoi khac vao chuoi ban dau\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &menu);
        if (!isStringEntered && menu != 1 && menu != 7) {
            printf("Chuoi chua duoc nhap. Vui long chon 1 de nhap chuoi truoc!\n\n");
            continue;
        }
        switch (menu) {
            case 1:
                inputString(str);
                isStringEntered = 1;
                break;
            case 2:
                reverseString(str);
                break;
            case 3:
                countWords(str);
                break;
            case 4:
                compareStrings(str);
                break;
            case 5:
                uppercaseString(str);
                break;
            case 6:
                appendString(str);
                break;
            case 7:
                printf("Thoat chuong trinh\n");
                break;
            default:
                printf("Lua chon khong hop le\n");
        }
    } while (menu != 7);

    return 0;
}
void inputString(char *str) {
    printf("Moi ban nhap vao chuoi: ");
    scanf(" %[^\n]", str); 
    printf("\n");
}

void reverseString(char *str) {
    int len = strlen(str);
    printf("Chuoi dao nguoc la: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n\n");
}

void countWords(char *str) {
    int count = 0, inWord = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            if (!inWord) {
                count++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }
    printf("So luong tu trong chuoi la: %d\n\n", count);
}

void compareStrings(char *str1) {
    char str2[100];
    printf("Nhap vao chuoi khac: ");
    scanf(" %[^\n]", str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 > len2) {
        printf("Chuoi moi ngan hon chuoi ban dau.\n\n");
    } else if (len1 < len2) {
        printf("Chuoi moi dai hon chuoi ban dau.\n\n");
    } else {
        printf("Hai chuoi co do dai bang nhau.\n\n");
    }
}

void uppercaseString(char *str) {
    printf("Chuoi sau khi chuyen thanh chu in hoa: ");
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            printf("%c", str[i] - 32); 
        } else {
            printf("%c", str[i]);
        }
    }
    printf("\n\n");
}

void appendString(char *str1) {
    char str2[100];
    printf("Nhap vao chuoi khac de them vao chuoi ban dau: ");
    scanf(" %[^\n]", str2);

    strcat(str1, str2); 
    printf("Chuoi sau khi noi la: %s\n\n", str1);
}

