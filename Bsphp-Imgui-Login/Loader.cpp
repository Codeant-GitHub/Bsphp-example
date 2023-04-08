#pragma once
#include "Loader.hpp"
#include "auth.hpp"
#include <comdef.h>
#pragma execution_character_set("utf-8")

int client_width;
int client_height;

static int Ĭ����· = 0;
static int �༭��ߴ� = 150;

bool ��Ա��¼ = false;
bool ע���Ա = false;
bool ����� = false;
bool show_demo_window = true;

std::string ��ʾ�ı���Ϣ = "";
std::string ��ʾ������Ϣ = "";
static char ����д�˺�[256] = "";
static char ����д����[256] = "";
static char ����д����[256] = "";
static char ����д����[256] = "";
static char ����д����[256] = "";

inline char* KS_ANSI_to_UTF8(const char* szAnsi)
{
    if (szAnsi == NULL)
        return NULL;

    _bstr_t   bstrTmp(szAnsi);
    int       nLen = ::WideCharToMultiByte(CP_UTF8, 0, (LPCWSTR)bstrTmp, -1, NULL, 0, NULL, NULL);
    char* pUTF8 = new char[nLen + 1];
    ZeroMemory(pUTF8, nLen + 1);
    ::WideCharToMultiByte(CP_UTF8, 0, (LPCWSTR)bstrTmp, -1, pUTF8, nLen, NULL, NULL);
    return pUTF8;
}

namespace Settings
{
    static int Tab = 1;
}

void ShowDemoUI()
{
    auto& style = ImGui::GetStyle();
    style.FramePadding = { 8.f, 5.f };
    style.WindowTitleAlign = { 0.0f, 0.5f };//�������
    style.ButtonTextAlign = { 0.5f, 0.5f };//��ť���־���
    style.DisplaySafeAreaPadding = { 3.f, 3.f };

    auto& colors = style.Colors;
    colors[ImGuiCol_Text] = ImVec4(0.00f, 0.00f, 0.00f, 1.00f);//������ɫ
    colors[ImGuiCol_WindowBg] = ImVec4(0.94f, 0.94f, 0.94f, 1.00f);//���ڱ�����ɫ
    colors[ImGuiCol_PopupBg] = ImVec4(1.00f, 1.00f, 1.00f, 0.98f);
    colors[ImGuiCol_Border] = ImVec4(0.00f, 0.00f, 0.00f, 0.30f);
    colors[ImGuiCol_FrameBg] = ImColor(255, 255, 255, 100);//�༭��Ĭ����ɫ
    colors[ImGuiCol_FrameBgActive] = ImVec4(0.28f, 0.27f, 0.27f, 0.54f);//�༭����ͣ��ɫ
    colors[ImGuiCol_FrameBgHovered] = ImVec4(0.21f, 0.21f, 0.21f, 0.78f);//�༭�򼤻����ɫ
    colors[ImGuiCol_TitleBg] = ImColor(255, 255, 255, 255);//����Ĭ����ɫ
    colors[ImGuiCol_TitleBgActive] = ImColor(255, 255, 255, 255);//��������ͣ��ɫ
    colors[ImGuiCol_TitleBgCollapsed] = ImColor(255, 255, 255, 255);//�������������ɫ
    colors[ImGuiCol_Button] = ImColor(0, 191, 255, 255);//��ťĬ����ɫ
    colors[ImGuiCol_ButtonHovered] = ImColor(0, 191, 255, 200);//��ť��ͣ��ɫ
    colors[ImGuiCol_ButtonActive] = ImColor(220, 20, 60, 255);//��ť�������ɫ
    colors[ImGuiCol_Tab] = ImColor(255, 255, 255, 255); //ѡ�ťĬ����ɫ
    colors[ImGuiCol_TabHovered] = ImColor(0, 191, 255, 100);//ѡ�ť��ͣ��ɫ
    colors[ImGuiCol_TabActive] = ImColor(0, 191, 255, 255);//ѡ�ť�������ɫ
}

void RegDemo()
{
    ImGui::Text("   �˺�"); ImGui::SameLine();
    ImGui::SetNextItemWidth(�༭��ߴ�);
    ImGui::InputText("##1", ����д�˺�, IM_ARRAYSIZE(����д�˺�));

    ImGui::Text("   ����"); ImGui::SameLine();
    ImGui::SetNextItemWidth(�༭��ߴ�);
    ImGui::InputText("##2", ����д����, IM_ARRAYSIZE(����д����));

    ImGui::Text("   ����"); ImGui::SameLine();
    ImGui::SetNextItemWidth(�༭��ߴ�);
    ImGui::InputText("##3", ����д����, IM_ARRAYSIZE(����д����));

    ImGui::Text("   ����"); ImGui::SameLine();
    ImGui::SetNextItemWidth(�༭��ߴ�);
    ImGui::InputText("##4", ����д����, IM_ARRAYSIZE(����д����));

    ImGui::Text(" "); ImGui::SameLine();

    static ImVec4 active = imguipp::to_vec4(255, 255, 255, 255);
    ImGui::PushStyleColor(ImGuiCol_ButtonActive, active);
    if (ImGui::Button("ע ��", ImVec2(�༭��ߴ� + 30, 35)))
    {
        if (ע���Ա)
        {
            if (strncmp(����д�˺�, "", 10) != 0 && strncmp(����д����, "", 10) != 0)
            {
                CString LoginBang = Bsphp::��¼_�������˺�ע��(strlwr(����д�˺�), ����д����, ����д����, ����д����, "", "", "", "", "", "");
                ��ʾ�ı���Ϣ = KS_ANSI_to_UTF8(LoginBang);
            }
        }
    }
}

void BangDemo()
{
    CString LoginBang = Bsphp::��¼_���˺�����(strlwr(����д�˺�), ����д����);
    ��ʾ�ı���Ϣ = KS_ANSI_to_UTF8(LoginBang);
}

void JieDemo()
{
    ImGui::Text("");
    ImGui::Text("   �˺�"); ImGui::SameLine();
    ImGui::SetNextItemWidth(�༭��ߴ�);
    ImGui::InputText("##", ����д�˺�, IM_ARRAYSIZE(����д�˺�));
    ImGui::Text("   ����"); ImGui::SameLine();
    ImGui::SetNextItemWidth(�༭��ߴ�);
    ImGui::InputText("###", ����д����, IM_ARRAYSIZE(����д����), ImGuiInputTextFlags_Password);

    ImGui::Text(" "); ImGui::SameLine();
    static ImVec4 active = imguipp::to_vec4(255, 255, 255, 255);
    ImGui::PushStyleColor(ImGuiCol_ButtonActive, active);
    if (ImGui::Button("�� ��", ImVec2(�༭��ߴ� + 30, 35)))
    {
        if (�����)
        {
            if (strncmp(����д�˺�, "", 10) != 0 && strncmp(����д����, "", 10) != 0)
            {
               CString LoginJie = Bsphp::��¼_����˺Ű�(strlwr(����д�˺�), ����д����);
                std::string ����ʱ�� = LoginJie.GetBuffer();
                ����ʱ�� = ����ʱ��.substr(0, ����ʱ��.length() - 19);
                if (����ʱ�� == std::to_string(7012).c_str())
                {
                    BangDemo();
                }
                else if (LoginJie == std::to_string(7010).c_str())
               {
                    BangDemo();
                }
                else
                {
                    ��ʾ�ı���Ϣ = KS_ANSI_to_UTF8(LoginJie);
                }
            }
        }
    }
}

void LoginDemo()
{
    ImGui::Text("");
    ImGui::Text("   �˺�"); ImGui::SameLine();
    ImGui::SetNextItemWidth(�༭��ߴ�);
    ImGui::InputText("##", ����д�˺�, IM_ARRAYSIZE(����д�˺�));
    ImGui::Text("   ����"); ImGui::SameLine();
    ImGui::SetNextItemWidth(�༭��ߴ�);
    ImGui::InputText("###", ����д����, IM_ARRAYSIZE(����д����), ImGuiInputTextFlags_Password);

    ImGui::Text(" "); ImGui::SameLine();
    static ImVec4 active = imguipp::to_vec4(255, 255, 255, 255);
    ImGui::PushStyleColor(ImGuiCol_ButtonActive, active);
    if (ImGui::Button("�� ¼", ImVec2(�༭��ߴ� + 30, 35)))
    {
        if (��Ա��¼)
        {
            if (strncmp(����д�˺�, "", 10) != 0 && strncmp(����д����, "", 10) != 0)
            {
                CString LoginRet = Bsphp::��¼_�û���¼(strlwr(����д�˺�), ����д����);

                CString strTmp = LoginRet.Mid(0, 7);

                if (strTmp == "01|1011")
                {
                    ��ʾ�ı���Ϣ = KS_ANSI_to_UTF8(LoginRet);
                }
                else
                {
                    ��ʾ�ı���Ϣ = KS_ANSI_to_UTF8(LoginRet);
                }
            }
        }
    }
}

void ShowDemo(bool* p_open)
{
    ShowDemoUI();

    ImGuiWindowFlags window_flags = 0;
    window_flags |= ImGuiWindowFlags_NoCollapse;
    window_flags |= ImGuiWindowFlags_NoResize;
    window_flags |= ImGuiWindowFlags_NoScrollbar;

    ImGui::SetNextWindowPos(ImVec2((client_width / 2) - (220 / 2), (client_height / 2) - (340 / 2)), ImGuiCond_FirstUseEver);
    ImGui::SetNextWindowSize(ImVec2(220, 340), ImGuiCond_FirstUseEver);

    if (!ImGui::Begin("Bsphp Login", p_open, window_flags))
    {
        ImGui::End();
        return;
    }
    ImGui::PushItemWidth(ImGui::GetFontSize() * -12);

    ImGui::BeginChild("Mina1", ImVec2(0, 90), true, window_flags);
    {
        
        ImGui::Text(��ʾ������Ϣ.c_str());
    }
    ImGui::NewLine();
    ImGui::EndChild();

    if (ImGui::BeginTabBar("##tabs", ImGuiTabBarFlags_None))
    {
        if (ImGui::BeginTabItem("��¼"))
        {
            LoginDemo();
            ImGui::EndTabItem();
        }
        if (ImGui::BeginTabItem("ע��"))
        {
            RegDemo();
            ImGui::EndTabItem();
        }
        if (ImGui::BeginTabItem("��"))
        {
            JieDemo();
            ImGui::EndTabItem();
        }
        if (ImGui::BeginTabItem("����"))
        {
            ImGui::Text("");
            ImGui::Text("     "); ImGui::SameLine();
            ImGui::EndTabItem();
        }
        ImGui::EndTabBar();
    }

    ImGui::SetCursorPosY(ImGui::GetWindowHeight() - 25);
    imguipp::center_text_ex(��ʾ�ı���Ϣ.c_str(), 10, 1, false);

    ImGui::PopItemWidth();
    ImGui::End();
}

bool isWin7()
{
    OSVERSIONINFOEX osvi;
    BOOL bOsVersionInfoEx;

    ZeroMemory(&osvi, sizeof(OSVERSIONINFOEX));
    osvi.dwOSVersionInfoSize = sizeof(OSVERSIONINFOEX);
    bOsVersionInfoEx = GetVersionEx((OSVERSIONINFO*)&osvi);

    // win7��ϵͳ�汾ΪNT6.1
    if (VER_PLATFORM_WIN32_NT == osvi.dwPlatformId &&
        osvi.dwMajorVersion == 6 &&
        osvi.dwMinorVersion == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

static bool Enabled = true;
HWND Window = nullptr;

LPDIRECT3DDEVICE9        g_pd3dDevice;
D3DPRESENT_PARAMETERS    g_d3dpp;
LPDIRECT3D9              g_pD3D;

extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

const int WINDOW_WIDTH = 1200;
const int WINDOW_HEIGHT = 800;

bool CreateDeviceD3D(HWND hWnd)
{
    if ((g_pD3D = Direct3DCreate9(D3D_SDK_VERSION)) == NULL)
        return false;
    ZeroMemory(&g_d3dpp, sizeof(g_d3dpp));
    g_d3dpp.Windowed = TRUE;
    g_d3dpp.SwapEffect = D3DSWAPEFFECT_DISCARD;
    g_d3dpp.BackBufferFormat = D3DFMT_UNKNOWN;
    g_d3dpp.EnableAutoDepthStencil = TRUE;
    g_d3dpp.AutoDepthStencilFormat = D3DFMT_D16;
    g_d3dpp.PresentationInterval = D3DPRESENT_INTERVAL_ONE;
    if (g_pD3D->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, hWnd, D3DCREATE_HARDWARE_VERTEXPROCESSING, &g_d3dpp, &g_pd3dDevice) < 0)
        return false;
    return true;
}

void CleanupDeviceD3D()
{
    if (g_pd3dDevice) {
        g_pd3dDevice->Release(); g_pd3dDevice = NULL;
    }
    if (g_pD3D) {
        g_pD3D->Release(); g_pD3D = NULL;
    }
}

void ResetDevice()
{
    ImGui_ImplDX9_InvalidateDeviceObjects();
    HRESULT Result = g_pd3dDevice->Reset(&g_d3dpp);
    if (Result == D3DERR_INVALIDCALL)
        IM_ASSERT(0);
    ImGui_ImplDX9_CreateDeviceObjects();
}

DWORD WINAPI ThreadFun2(LPVOID lpParameter)
{
    Bsphp::ServerUrl = "http://app.bsphp.com/AppEn.php?appid=20230320&m=7644f1e890fbaa18b34f94eed9edce6c";

    Bsphp::MesKey = "69afc01007f6fa02772207d91b57465d";

    Bsphp::���ݼ�������("Ju2mczwz1sTRnrmNml");

    CString InternetinfoRets = Bsphp::������֤();

    if (InternetinfoRets == std::to_string(1).c_str())
    {
        ��ʾ�ı���Ϣ = "������������";
        Bsphp::SeSsL = Bsphp::ȡBSphpSeSsL();
        ��ʾ������Ϣ = KS_ANSI_to_UTF8(Bsphp::ȡ����Ĺ���());
        ��Ա��¼ = true;
        ע���Ա = true;
        ����� = true;
    }
    else
    {
        ��ʾ�ı���Ϣ = KS_ANSI_to_UTF8(InternetinfoRets);
    }

    return 0;
}

DWORD WINAPI ThreadFun1(LPVOID lpParameter)
{
    WNDCLASSEX wc = { sizeof(WNDCLASSEX), CS_CLASSDC, WndProc, 0L, 0L, GetModuleHandleA(0), 0,0,0, 0, "Bsphp Login", 0 };
    RegisterClassEx(&wc);
    Window = CreateWindow(wc.lpszClassName, "Bsphp Login", WS_POPUP, 0, 0, 5, 5, 0, 0, wc.hInstance, 0);

    //�����ܴ���������
    SetWindowPos(Window, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOSIZE | SWP_NOMOVE);

    if (!CreateDeviceD3D(Window))
    {
        CleanupDeviceD3D();
        UnregisterClass(wc.lpszClassName, wc.hInstance);
        return 1;
    }

    ShowWindow(Window, SW_HIDE);
    UpdateWindow(Window);

    ImGui::CreateContext();

    ImGuiIO& io = ImGui::GetIO();

    if (isWin7())
    {
        io.Fonts->AddFontFromFileTTF("c:/windows/fonts/msyh.ttf", 15.0f, NULL, io.Fonts->GetGlyphRangesChineseFull());
    }
    else
    {
        io.Fonts->AddFontFromFileTTF("c:/windows/fonts/msyh.ttc", 15.0f, NULL, io.Fonts->GetGlyphRangesChineseFull());
    }

    HWND hd = GetDesktopWindow();
    // ����һ
    RECT rect;
    // ֻ��ô��ڿͻ����Ĵ�С
    GetClientRect(hd, &rect);
    client_width = (rect.right - rect.left);
    client_height = (rect.bottom - rect.top);

    io.IniFilename = nullptr;
    io.LogFilename = nullptr;
    io.ConfigFlags |= ImGuiConfigFlags_ViewportsEnable;

    static const ImWchar icons_ranges[] = { 0xf000, 0xf3ff, 0 };
    ImFontConfig icons_config;

    io.IniFilename = nullptr;
    io.LogFilename = nullptr;

    icons_config.MergeMode = true;
    icons_config.PixelSnapH = true;
    icons_config.OversampleH = 3;
    icons_config.OversampleV = 3;

    ImFontConfig CustomFont;
    CustomFont.FontDataOwnedByAtlas = false;

    ImGui_ImplWin32_Init(Window);
    ImGui_ImplDX9_Init(g_pd3dDevice);

    MSG msg;
    memset(&msg, 0, sizeof(msg));
    while (msg.message != WM_QUIT)
    {
        if (PeekMessage(&msg, NULL, 0U, 0U, PM_REMOVE))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
            continue;
        }

        ImGui_ImplDX9_NewFrame();
        ImGui_ImplWin32_NewFrame();
        ImGui::NewFrame();

        if (show_demo_window)
        {
            ShowDemo(&show_demo_window);
        }
        else
        {
            ExitProcess(0);
        }

        // Rendering
        ImGui::EndFrame();

        g_pd3dDevice->Clear(0, NULL, D3DCLEAR_TARGET | D3DCLEAR_ZBUFFER, 0, 1.0f, 0);
        if (g_pd3dDevice->BeginScene() >= 0)
        {
            ImGui::Render();
            ImGui_ImplDX9_RenderDrawData(ImGui::GetDrawData());
            g_pd3dDevice->EndScene();
        }

        if (io.ConfigFlags & ImGuiConfigFlags_ViewportsEnable)
        {
            ImGui::UpdatePlatformWindows();
            ImGui::RenderPlatformWindowsDefault();
        }

        HRESULT result = g_pd3dDevice->Present(NULL, NULL, NULL, NULL);
        if (result == D3DERR_DEVICELOST && g_pd3dDevice->TestCooperativeLevel() == D3DERR_DEVICENOTRESET) {
            ResetDevice();
        }
        if (!Enabled) {
            msg.message = WM_QUIT;
        }
    }

    ImGui_ImplDX9_Shutdown();
    ImGui_ImplWin32_Shutdown();
    ImGui::DestroyContext();

    CleanupDeviceD3D();
    DestroyWindow(Window);
    UnregisterClass(wc.lpszClassName, wc.hInstance);

    return 0;
}

int APIENTRY WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    HANDLE hThread2 = CreateThread(NULL, 0, ThreadFun2, NULL, 0, NULL);
    WaitForSingleObject(hThread2, INFINITE);//�ȴ��߳�

    HANDLE hThread1 = CreateThread(NULL, 0, ThreadFun1, NULL, 0, NULL);    
    WaitForSingleObject(hThread1, INFINITE);//�ȴ��߳�

    return 0;
}

LRESULT CALLBACK WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) 
{
    if (ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam))
        return true;

    switch (msg)
    {
    case WM_SIZE:
        if (g_pd3dDevice != NULL && wParam != SIZE_MINIMIZED)
        {
            g_d3dpp.BackBufferWidth = LOWORD(lParam);
            g_d3dpp.BackBufferHeight = HIWORD(lParam);
            ResetDevice();
        }
        return 0;
    case WM_SYSCOMMAND:
        if ((wParam & 0xfff0) == SC_KEYMENU) // Disable ALT application menu
            return 0;
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    }
    return DefWindowProc(hWnd, msg, wParam, lParam);
}