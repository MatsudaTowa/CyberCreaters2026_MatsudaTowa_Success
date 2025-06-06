//=============================================
//
//アルティメット[ult.h]
//Author Matsuda Towa
//
//=============================================
#ifndef _ULT_
#define _ULT_
#include "character_behavior.h"
#include "active_player.h"
#include "ult_icon.h"
#include "ult_range.h"
#include "ult_camera_effect.h"

//=============================================
//アルティメット処理ストラテジー
//=============================================
class CUlt
{
public:
	CUlt();
	virtual ~CUlt();
	virtual HRESULT Init();
	virtual void Uninit();
	virtual void Update();
	virtual bool Action(CActivePlayer* player) = 0;

	//クールタイム代入
	inline void SetCoolTime(int CoolTime)
	{
		m_CoolTime = CoolTime;
	}

	//クールタイム代入
	inline void SetCoolTimeCnt(int CoolTimeCnt)
	{
		m_CoolTimeCnt = CoolTimeCnt;
	}

	inline int& GetCoolTime()
	{
		return m_CoolTime;
	}

	inline int& GetCoolTimeCnt()
	{
		return m_CoolTimeCnt;
	}
protected:
	bool m_isFinish;
private:
	int m_CoolTime;
	int m_CoolTimeCnt;
};

//=============================================
//ミディアムキャラアルティメット処理ストラテジー
//=============================================
class CMediumUlt:public CUlt
{
public:
	CMediumUlt();
	~CMediumUlt() override;
	HRESULT Init() override;
	void Uninit() override;
	void Update() override;
	bool Action(CActivePlayer* player) override;
private:
	static const int MEDIUM_ULT_COOL_TIME = 900;
	static constexpr float FLYING_HIGHT = 400.0f; //どこまで飛ぶか
	static const D3DXVECTOR3 SPEED;

	float m_move_y; //y軸の移動量
	CUltRange* m_pUltRange; //ウルトの判定
	CUltCameraEffect* m_pUltCameraEffect; //ウルトのカメラエフェクト
};

#endif // !_ULT_
