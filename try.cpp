int main(){
    char arr[30] = "hello";
    char *p =arr;
    (*p) ++;
    printf("%s, ", p);
    p++;
    printf("%s", p);
}