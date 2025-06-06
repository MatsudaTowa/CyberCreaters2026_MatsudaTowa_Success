//=============================================
//
//ウェーブリザルト画面[wave_result_screen.cpp]
//Author Matsuda Towa
//
//=============================================
#include "wave_result_screen.h"
#include "manager.h"

//色
const D3DXCOLOR CWave_Result_Screen::COLOR = { 0.0f, 0.0f, 0.0f, 0.85f };

//=============================================
//コンストラクタ
//=============================================
CWave_Result_Screen::CWave_Result_Screen(int nPriority):CObject2D(nPriority)
{
}

//=============================================
//デストラクタ
//=============================================
CWave_Result_Screen::~CWave_Result_Screen()
{
}

//=============================================
//初期化
//=============================================
HRESULT CWave_Result_Screen::Init()
{
	//親クラスの初期化を呼ぶ
	CObject2D::Init();

	//自分自身のサイズ取得
	D3DXVECTOR2 size = GetSize();

	size = D3DXVECTOR2(SCREEN_WIDTH * HALF, SCREEN_HEIGHT * HALF);

	//テクスチャ座標設定
	SetTexPos(VEC2_RESET_ONE);

	//サイズを代入
	SetSize(size);

	//サイズを代入
	SetSize(size);

	//カラー取得
	D3DXCOLOR col = GetColor();

	col = COLOR;

	//カラーを代入
	SetColor(col);

	//頂点設定
	SetVtx(1.0f);
	return S_OK;
}

//=============================================
//終了
//=============================================
void CWave_Result_Screen::Uninit()
{
	//親クラスの終了を呼ぶ
	CObject2D::Uninit();
}

//=============================================
//更新
//=============================================
void CWave_Result_Screen::Update()
{
	//親クラスの更新
	CObject2D::Update();
}

//=============================================
//描画
//=============================================
void CWave_Result_Screen::Draw()
{
	//親クラスの描画
	CObject2D::Draw();
}

//=============================================
//生成
//=============================================
CWave_Result_Screen* CWave_Result_Screen::Create(D3DXVECTOR3 pos)
{
	CWave_Result_Screen* pWave_Result_Screen = new CWave_Result_Screen;

	//nullならnullを返す
	if (pWave_Result_Screen == nullptr) { return nullptr; }

	pWave_Result_Screen->SetPos(pos); //pos設定

	pWave_Result_Screen->SetType(OBJECT_TYPE_RESULT); //タイプ設定

	pWave_Result_Screen->Init();

	return pWave_Result_Screen;
}
