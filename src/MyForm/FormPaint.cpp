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
	// TODO: REDO MESSAGE ABOUT PROGRAM
	MessageBox::Show("Рисовалка\nСоздатель Михаил (Volt)\nkovalprog@yandex.ru ИЛИ https://t.me/VPaintSupportBot",
					 "О программе",
					 MessageBoxButtons::OK,
					 MessageBoxIcon::Information);
	return System::Void();
}

System::Void VPaint::FormPaint::exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	// TODO: CHECK ON OPEN FILE BEFORE EXIT
	Application::Exit();
	return System::Void();
}

System::Void VPaint::FormPaint::undoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	// TODO: UNDO BUTTON
	return System::Void();
}

System::Void VPaint::FormPaint::redoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	// TODO: REDO BUTTON
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
	this->ChangeState(STATES::SQUARE);
	return System::Void();
}

System::Void VPaint::FormPaint::circleTool_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->ChangeState(STATES::CIRCLE);
	return System::Void();
}

System::Void VPaint::FormPaint::lineTool_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->ChangeState(STATES::LINE);
	return System::Void();
}

System::Void VPaint::FormPaint::textureTool_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->ChangeState(STATES::TEXTURE);
	this->openFileDialog->ShowDialog();
	String^ file = this->openFileDialog->FileName;
	if (file != "openFileDialog")
	{
		this->_texture = gcnew Bitmap(file);
	}

	return System::Void();
}

System::Void VPaint::FormPaint::textTool_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->ChangeState(STATES::TEXT);
	return System::Void();
}

System::Void VPaint::FormPaint::colorTool_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->colorDialog->ShowDialog();
	this->_color = this->colorDialog->Color;
	this->buttonColor->BackColor = this->_color;
	this->_pen = gcnew Pen(this->_color, this->_size);

	return System::Void();
}

System::Void VPaint::FormPaint::settingsTool_Click(System::Object^ sender, System::EventArgs^ e)
{
	// TODO: SETTINGS
	return System::Void();
}

System::Void VPaint::FormPaint::triangleTool_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->ChangeState(STATES::TRIANGLE);
	return System::Void();
}

System::Void VPaint::FormPaint::clearTool_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->_isClearAll = true;
	this->pictureBox->Invalidate();
	return System::Void();
}

System::Void VPaint::FormPaint::numericUpDownBrushSize_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	this->_size = Convert::ToSingle(this->numericUpDownBrushSize->Value);
	this->_pen = gcnew Pen(this->_color, this->_size);
	return System::Void();
}

System::Void VPaint::FormPaint::pictureBox_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
{
	switch (this->_statePen)
	{
		case STATES::LINE:
			if (this->_points->Count > 1)
			{
				this->_canvas->DrawLines(this->_pen, this->_points->ToArray());
			}
			break;
		case STATES::SQUARE:
			if (this->_mousePosition.X != -1 && this->_mousePosition.Y != -1)
			{
				this->_canvas->DrawRectangle(this->_pen,
											 this->_mousePosition.X,
											 this->_mousePosition.Y,
											 Convert::ToInt32(this->numericUpDownBrushSize->Value),
											 Convert::ToInt32(this->numericUpDownBrushSize->Value));
			}
			break;
		case STATES::CIRCLE:
			if (this->_mousePosition.X != -1 && this->_mousePosition.Y != -1)
			{
				this->_canvas->DrawEllipse(this->_pen,
										   this->_mousePosition.X,
										   this->_mousePosition.Y,
										   Convert::ToInt32(this->numericUpDownBrushSize->Value),
										   Convert::ToInt32(this->numericUpDownBrushSize->Value));
			}
			break;
		case STATES::TRIANGLE:
			// TODOL NAKE TRIANGLE
			break;
		case STATES::TEXTURE:
			if (this->_mousePosition.X != -1 && this->_mousePosition.Y != -1)
			{
				this->_canvas->DrawImage(this->_texture,
										 this->_mousePosition.X,
										 this->_mousePosition.Y,
										 Convert::ToInt32(this->numericUpDownBrushSize->Value),
										 Convert::ToInt32(this->numericUpDownBrushSize->Value));
			}
			break;
		case STATES::TEXT:
			// TODO: MAKE TEXT
			break;
	}
	if (this->_isClearAll)
	{
		this->_points->Clear();
		this->_canvas->Clear(Color::White);
		this->_isClearAll = false;
		this->_mousePosition.X = -1;
		this->_mousePosition.Y = -1;
		DrawBackground();
	}

	return System::Void();
}

System::Void VPaint::FormPaint::pictureBox_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	if (this->_statePen == STATES::LINE)
	{
		this->_points->Clear();
		this->_points->Add(e->Location);
		this->_isDraw = true;
		//this->pictureBox->SizeMode = PictureBoxSizeMode::Normal;
	}
	else
	{
		this->_mousePosition.X = e->Location.X;
		this->_mousePosition.Y = e->Location.Y;
	}
	this->pictureBox->Invalidate();
	return System::Void();
}

System::Void VPaint::FormPaint::pictureBox_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	if (this->_isDraw && !this->_points->Contains(Point(e->X, e->Y)))
	{
		if (e->Button == System::Windows::Forms::MouseButtons::Left)
		{
			this->_points->Add(e->Location);
		}
		this->pictureBox->Invalidate();
	}
	return System::Void();
}

System::Void VPaint::FormPaint::pictureBox_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	this->_isDraw = false;
	this->pictureBox->Invalidate();
	this->_mousePosition.X = -1;
	this->_mousePosition.Y = -1;
	return System::Void();
}

System::Void VPaint::FormPaint::pictureBox_SizeChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (this->pictureBox->Image)
	{
		// TODO: FIX BUG WITH RESIZE WINDOW
		//Bitmap^ img = gcnew Bitmap(this->pictureBox->Width, this->pictureBox->Height, Graphics::FromImage(this->pictureBox->Image));

		this->_background = gcnew Bitmap(this->_background ? this->_background : this->pictureBox->Image,
										 this->pictureBox->Width,
										 this->pictureBox->Height);
		delete this->_canvas;
		this->_canvas = Graphics::FromImage(this->_background);
		this->pictureBox->Image = this->_background;
		/*
		this->_canvas = Graphics::FromImage(img);
		this->pictureBox->Image = img;
		*/
		this->pictureBox->Refresh();
		this->pictureBox->Invalidate();
	}
	return System::Void();
}

System::Void VPaint::FormPaint::FormPaint_Load(System::Object^ sender, System::EventArgs^ e)
{
	this->_color = Color::Black;
	this->_size = 12;
	this->_pen = gcnew Pen(this->_color, this->_size);
	this->_points = gcnew List<Point>();
	this->_isDraw = false;
	this->_statePen = STATES::LINE;
	this->_isClearAll = false;

	this->buttonLine->BackColor = Color::Green;
	this->buttonSquare->BackColor = Color::LightGray;
	this->buttonCircle->BackColor = Color::LightGray;
	this->buttonTriangle->BackColor = Color::LightGray;
	this->buttonTexture->BackColor = Color::LightGray;

	Bitmap^ img = gcnew Bitmap(this->pictureBox->Width, this->pictureBox->Height);

	this->_canvas = Graphics::FromImage(img);
	this->pictureBox->Image = img;
	this->pictureBox->BackColor = Color::White;


	this->_filename = "openFileDialog";
	this->Text += this->_filename;
	this->buttonColor->BackColor = this->_color;

	this->numericUpDownHeigth->Minimum = 350;
	this->numericUpDownWidth->Minimum = 650;
	this->numericUpDownHeigth->Maximum = GetSystemMetrics(SM_CXSCREEN);
	this->numericUpDownWidth->Maximum = GetSystemMetrics(SM_CYSCREEN);


	return System::Void();
}

System::Void VPaint::FormPaint::DrawBackground(System::Void)
{
	if (this->_filename != "openFileDialog")
	{
		this->_background = gcnew Bitmap(this->_filename);
		this->_background = gcnew Bitmap(this->_background, this->pictureBox->Width, this->pictureBox->Height);
	}
	else
	{
		this->_background = gcnew Bitmap(this->pictureBox->Image, this->pictureBox->Width, this->pictureBox->Height);
	}

	delete this->_canvas;
	this->_canvas = Graphics::FromImage(this->_background);
	this->pictureBox->Image = this->_background;
	this->pictureBox->Refresh();
	this->pictureBox->Invalidate();
	return System::Void();
}

System::Void VPaint::FormPaint::ChangeState(STATES state)
{
	switch (state)
	{
		case VPaint::FormPaint::STATES::LINE:
			this->_statePen = STATES::LINE;
			this->buttonLine->BackColor = Color::Green;
			this->buttonCircle->BackColor = Color::LightGray;
			this->buttonTexture->BackColor = Color::LightGray;
			this->buttonTriangle->BackColor = Color::LightGray;
			this->buttonSquare->BackColor = Color::LightGray;
			this->buttonText->BackColor = Color::LightGray;
			break;
		case VPaint::FormPaint::STATES::SQUARE:
			this->_statePen = STATES::SQUARE;
			this->buttonLine->BackColor = Color::LightGray;
			this->buttonCircle->BackColor = Color::LightGray;
			this->buttonTexture->BackColor = Color::LightGray;
			this->buttonTriangle->BackColor = Color::LightGray;
			this->buttonSquare->BackColor = Color::Green;
			this->buttonText->BackColor = Color::LightGray;
			break;
		case VPaint::FormPaint::STATES::CIRCLE:
			this->_statePen = STATES::CIRCLE;
			this->buttonLine->BackColor = Color::LightGray;
			this->buttonCircle->BackColor = Color::Green;
			this->buttonTexture->BackColor = Color::LightGray;
			this->buttonTriangle->BackColor = Color::LightGray;
			this->buttonSquare->BackColor = Color::LightGray;
			this->buttonText->BackColor = Color::LightGray;
			break;
		case VPaint::FormPaint::STATES::TRIANGLE:
			this->_statePen = STATES::TRIANGLE;
			this->buttonLine->BackColor = Color::LightGray;
			this->buttonCircle->BackColor = Color::LightGray;
			this->buttonTexture->BackColor = Color::LightGray;
			this->buttonTriangle->BackColor = Color::Green;
			this->buttonSquare->BackColor = Color::LightGray;
			this->buttonText->BackColor = Color::LightGray;
			break;
		case VPaint::FormPaint::STATES::TEXTURE:
			this->_statePen = STATES::TEXTURE;
			this->buttonLine->BackColor = Color::LightGray;
			this->buttonCircle->BackColor = Color::LightGray;
			this->buttonTexture->BackColor = Color::Green;
			this->buttonTriangle->BackColor = Color::LightGray;
			this->buttonSquare->BackColor = Color::LightGray;
			this->buttonText->BackColor = Color::LightGray;
			break;
		case VPaint::FormPaint::STATES::TEXT:
			this->_statePen = STATES::TEXT;
			this->buttonLine->BackColor = Color::LightGray;
			this->buttonCircle->BackColor = Color::LightGray;
			this->buttonTexture->BackColor = Color::LightGray;
			this->buttonTriangle->BackColor = Color::LightGray;
			this->buttonSquare->BackColor = Color::LightGray;
			this->buttonText->BackColor = Color::Green;
			break;
		default:
			break;
	}
	return System::Void();
}

System::Void VPaint::FormPaint::buttonGroupBoxCreate_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Width = Convert::ToInt32(this->numericUpDownWidth->Value);
	this->Height = Convert::ToInt32(this->numericUpDownHeigth->Value);
	this->groupBoxCreateProject->Visible == true ? false : this->groupBoxCreateProject->Visible;
	this->_filename = "openFileDialog";

	return System::Void();
}

System::Void VPaint::FormPaint::buttonGroupBoxOpen_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void VPaint::FormPaint::newToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (this->groupBoxCreateProject->Visible)
	{
		this->groupBoxCreateProject->Visible = false;
	}
	else
	{
		this->groupBoxCreateProject->Visible = true;
		this->groupBoxCreateProject->Location = Point(GetSystemMetrics(SM_CXSCREEN) / 2, GetSystemMetrics(SM_CYSCREEN) / 2);
	}
	return System::Void();
}

System::Void VPaint::FormPaint::openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->openFileDialog->ShowDialog();
	this->_filename = this->openFileDialog->FileName;
	if (this->_filename != "openFileDialog")
	{
		this->_background = gcnew Bitmap(this->_filename);
		this->_canvas = Graphics::FromImage(this->_background);
		this->pictureBox->Image = this->_background;
		this->groupBoxCreateProject->Visible == true ? false : this->groupBoxCreateProject->Visible;
	}

	return System::Void();
}

System::Void VPaint::FormPaint::saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void VPaint::FormPaint::saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->saveFileDialog->ShowDialog();
	String^ file = this->saveFileDialog->FileName;

	if (file != "")
	{
		Bitmap^ img = gcnew Bitmap(this->pictureBox->Image);
		img->Save(file);
		this->Text = "VPaint " + file;
	}

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
