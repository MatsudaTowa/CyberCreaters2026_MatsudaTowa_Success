//=============================================
//
//リザルト画面[result_screen.h]
//Author Matsuda Towa
//
//=============================================
#ifndef _RESULT_SCREEN_H_ //これが定義されてないとき

#define _RESULT_SCREEN_H_
#include "main.h"
#include "object2D.h"

//=============================================
//リザルト画面クラス
//=============================================
class CResult_Screen : public CObject2D
{
public:
	static const int RESULT_SCREEN_PRIORITY = 20;  //描画順
	CResult_Screen(int nPriority = RESULT_SCREEN_PRIORITY);
	~CResult_Screen()override;
	HRESULT Init()override;
	void Uninit()override;
	void Update()override;
	void Draw()override;
	static CResult_Screen* Create(D3DXVECTOR3 pos);
private:
	static const std::string TEXTURE_NAME;	//テクスチャの名前
};
#endif