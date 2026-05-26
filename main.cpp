#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int main(void) {

	int res;
	int score = 0;

	HWND owner = GetConsoleWindow();

	// 問1
	res = MessageBox(owner, L"自分は自己中心的だと思う", L"問1", MB_ICONQUESTION | MB_YESNO); 
		if (res == IDYES) {
			score += 4;
		}

	// 問2
	res = MessageBox(owner, L"自分は寂しがりやだと思う", L"問2", MB_ICONQUESTION | MB_YESNO);
		if (res == IDYES) {
		score += 3;
		}

	// 問3
	res = MessageBox(owner, L"辛抱強いほうだと思う", L"問3", MB_ICONQUESTION | MB_YESNO);
		if (res == IDNO) {
			score += 7;
		}

	// 問4
	res = MessageBox(owner, L"TV番組はニュースよりバラエティーが好き", L"問4", MB_ICONQUESTION | MB_YESNO);
		if (res == IDYES) {
			score += 9;
		}

	// 問5
	res = MessageBox(owner, L"自分は責任感が強いと思う", L"問5", MB_ICONQUESTION | MB_YESNO);
		if (res == IDNO) {
			score += 5;
		}

	// 問6
	res = MessageBox(owner, L"なんでも分け合うことができる", L"問6", MB_ICONQUESTION | MB_YESNO);
		if (res == IDNO) {
			score += 5;
		}

	// 問7
	res = MessageBox(owner, L"ときどき赤ちゃん言葉を使う", L"問7", MB_ICONQUESTION | MB_YESNO);
		if (res == IDYES) {
			score += 8;
		}

	// 問8
	res = MessageBox(owner, L"ちょっとした事でハラがたつ", L"問8", MB_ICONQUESTION | MB_YESNO);
		if (res == IDYES) {
			score += 7;
		}

	// 問9
	res = MessageBox(owner, L"人前で話すのが苦手だ", L"問9", MB_ICONQUESTION | MB_YESNO);
		if (res == IDYES) {
			score += 2;
		}

	// 問10
	res = MessageBoxA(owner, "他人が持ってるものは自分も欲しくなる", "問10", MB_ICONQUESTION | MB_YESNO);
		if (res == IDYES) {
			score += 9;
		}

	// 問11
	res = MessageBoxA(owner, "夢中になると他人の話が聞こえない", "問11", MB_ICONQUESTION | MB_YESNO);
		if (res == IDYES) {
			score += 6;
		}

	// 問12
	res = MessageBoxA(owner, "『目には目を歯には歯を』だと思う", "問12", MB_ICONQUESTION | MB_YESNO);
		if (res == IDYES) {
			score += 6;
		}

	// 問13
	res = MessageBoxA(owner, "人に頼まれたらすずに引き受ける", "問13", MB_ICONQUESTION | MB_YESNO);
		if (res == IDNO) {
			score += 4;
		}
	
	// 問14
	res = MessageBoxA(owner, "ひとの顔色を伺って行動してしまう", "問14", MB_ICONQUESTION | MB_YESNO);
		if (res == IDYES) {
			score += 6;
		}

	// 問15
	res = MessageBoxA(owner, "飽き症だ", "問15", MB_ICONQUESTION | MB_YESNO);
		if (res == IDYES) {
			score += 8;
		}

	// 問16
	res = MessageBoxA(owner, "カラオケでアニメソングを歌ったことがある", "問16", MB_ICONQUESTION | MB_YESNO);
		if (res == IDYES) {
			score += 5;
		}

	// 問17
	res = MessageBoxA(owner, "ストーカー行為は許せないと思う", "問17", MB_ICONQUESTION | MB_YESNO);
		if (res == IDNO) {
			score += 4;
		}

	// 問18
	res = MessageBoxA(owner, "トラブルは話し合いで解決する", "問18", MB_ICONQUESTION | MB_YESNO);
		if (res == IDNO) {
			score += 7;
		}

	// 問19
	res = MessageBoxA(owner, "好きな食べ物は最後までとっておく", "問19", MB_ICONQUESTION | MB_YESNO);
		if (res == IDYES) {
			score += 6;
		}

	// 問20
	res = MessageBoxA(owner, "自分は一人前だと思う", "問20", MB_ICONQUESTION | MB_YESNO);
		if (res == IDYES) {
			score += 6;
		}

		std::string result_msg = "Score is " + std::to_string(score) + " points";
		MessageBoxA(owner, result_msg.c_str(), "診断結果", MB_OK);

		if (score == 67) {
			MessageBoxA(owner, "6, 7 !!", "Bruh", MB_ICONEXCLAMATION);
		}

	return 0;
}	