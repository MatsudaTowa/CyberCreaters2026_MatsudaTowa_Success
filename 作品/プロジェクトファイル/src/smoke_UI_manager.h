//=============================================
//
//スモーク状況表示「smoke_UI_manager.h」
// Author松田永久
//
//=============================================
#ifndef _SMOKE_UI_MANAGER_H_ //これが定義されてないとき
#define _SMOKE_UI_MANAGER_H_
#include "main.h"
#include "object2D.h"
#include "number.h"
#include "active_player.h"
#include "player_UI_box.h"
#include "smoke_icon.h"
#include "keyboard_UI.h"

class CPlayer;
//=============================================
//残弾数表示クラス
//=============================================
class CSmoke_UI_Manager
{
public:
	CSmoke_UI_Manager();
	~CSmoke_UI_Manager();
	HRESULT Init(CActivePlayer* player);
	void Uninit();
	void Update();
	void SetCurrentSmoke_UI(CActivePlayer* player);

	void SetNumber(int nParcent);

	void Reset();

private:
	static const int NUM_DIGIT = 1;  //桁数
	static constexpr float DIGIT_SHIFT = 35.0f;  //桁ごとに座標をずらす

	static const D3DXVECTOR3 BOX_POS; //枠の位置
	static const D3DXVECTOR2 BOX_SIZE; //枠のサイズ

	static const D3DXVECTOR3 ICON_POS; //スモークアイコンの位置
	static const D3DXVECTOR2 ICON_SIZE; //スモークアイコンのサイズ

	static const D3DXVECTOR3 NUMBER_POS; //数字の位置
	static const D3DXVECTOR2 NUMBER_SIZE; //数字のサイズ

	static const D3DXVECTOR3 KEY_UI_POS; //キーボードのUIの位置
	static const D3DXVECTOR2 KEY_UI_SIZE; //キーボードのUIのサイズ

	int m_NumSmoke;
	D3DXVECTOR3 m_SmokePos;
	CSmokeIcon* m_pIcon;
	CPlayerUIBox* m_pUIBox;
	CKeyboard_UI* m_pkeyboard_UI;
	CNumber_2D* m_pCurrentSmoke[NUM_DIGIT];
};

#endif // DEBUG