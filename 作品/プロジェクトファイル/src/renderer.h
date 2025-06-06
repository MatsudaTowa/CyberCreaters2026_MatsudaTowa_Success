//=============================================
//
//描画処理[renderer.h]
//Author Matsuda Towa
//
//=============================================
#ifndef _RENDERER_H_ //これが定義されてないとき

#define _RENDERER_H_

//=============================================
//レンダラークラス
//=============================================
class CRenderer
{
public:
	CRenderer();
	~CRenderer();
	HRESULT Init(HWND hWnd,BOOL bWindow);
	void Uninit();
	void Update();
	void Draw();
	void DrawFPS(int nCntFPS);
	static LPDIRECT3DDEVICE9 GetDevice(); //3Dデバイス取得

	LPD3DXFONT GetFont();

private:
	LPD3DXFONT m_pFont; //フォントへのポインタ

	LPDIRECT3D9	m_pD3D; //Direct3Dオブジェクトへのポインタ
	static LPDIRECT3DDEVICE9 m_pD3DDevice; //Direct3Dデバイスへのポインタ
	LPDIRECT3DVERTEXBUFFER9 m_pVtxBuffMain; //頂点バッファへのポインタ
};
#endif