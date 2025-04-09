#include "..\..\FormPaint.h"

System::Void VPaint::FormPaint::supportToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Diagnostics::Process::Start("https://t.me/VPaintSupportBot");
	return System::Void();
}

System::Void VPaint::FormPaint::documentationToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Diagnostics::Process::Start("https://github.com/VoltPro220/VPaint/blob/master/README.md");
	return System::Void();
}

System::Void VPaint::FormPaint::sourceCodeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Diagnostics::Process::Start("https://github.com/VoltPro220/VPaint");
	return System::Void();
}

System::Void VPaint::FormPaint::aboutProgramToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Рисовалка\nСоздатель Михаил (Volt)\nkovalprog@yandex.ru ИЛИ https://t.me/VPaintSupportBot",
					 "О программе",
					 MessageBoxButtons::OK,
					 MessageBoxIcon::Information);
	return System::Void();
}

System::Void VPaint::FormPaint::exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
	return System::Void();
}

System::Void VPaint::FormPaint::undoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void VPaint::FormPaint::redoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void VPaint::FormPaint::loadBackgroundToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void VPaint::FormPaint::createBackgroundToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void VPaint::FormPaint::squareTool_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void VPaint::FormPaint::circleTool_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void VPaint::FormPaint::lineTool_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void VPaint::FormPaint::textureTool_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void VPaint::FormPaint::textTool_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void VPaint::FormPaint::colorTool_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void VPaint::FormPaint::settingsTool_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void VPaint::FormPaint::triagleTool_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void VPaint::FormPaint::clearTool_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void VPaint::FormPaint::numericUpDownBrushSize_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void VPaint::FormPaint::newToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void VPaint::FormPaint::openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void VPaint::FormPaint::saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void VPaint::FormPaint::saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void VPaint::FormPaint::closeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void VPaint::FormPaint::mainToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->groupBoxTools->Visible = !this->groupBoxTools->Visible;
	return System::Void();
}
