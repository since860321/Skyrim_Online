#pragma once

//< ��ũ�� �Լ�

#define SAFE_RELEASE(p) { if(p) { (p)->Release(); (p) = NULL; } }
#define SAFE_DELETE(p) {if(p) { delete (p); (p) = NULL; } }
#define SAFE_DELETE_ARRAY(p) {if(p) { delete[] (p); (p) = NULL; } }

#define sgNetwork cWinSocketServer::GetInstance()
#define sgAI cAI::GetInstance() // AI(��)

