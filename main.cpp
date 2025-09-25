
int main() {
   
    int score1, score2, score3;
    cout << "請輸入3次分數(0~100): ";
    cin >> score1 >> score2 >> score3;
    double averageScore = (score1 + score2 + score3)/3;
    if (score1 < 40 || score2 < 40 || score3 < 40) {
        cout << "不及格\n";
    } else if (averageScore >= 60) {
        cout << "你及格\n";
    } else if (averageScore < 60) {
        cout << "不及格\n";
    }
    cout << "你的平均為: \a" << averageScore;

    return 0;
}