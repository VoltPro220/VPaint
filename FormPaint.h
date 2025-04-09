#pragma once
#include <stdlib.h>

namespace VPaint
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class FormPaint : public System::Windows::Forms::Form
	{
	public:
		FormPaint(void)
		{
			InitializeComponent();
		}

	protected:
		~FormPaint()
		{
			if (components)
			{
				delete components;
			}
		}
	private:


#pragma region private fields
		// Components

		System::ComponentModel::Container^ components;
		System::Windows::Forms::PictureBox^ pictureBox;

		// ******************** MENU STRIP *************************

		System::Windows::Forms::MenuStrip^ menuStrip1;
		System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ newToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ closeToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ editToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ undoToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ redoToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ mainToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ imageToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ backgroundToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ loadBackgroundToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ createBackgroundToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ squareToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ circleToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ lineToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ textureToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ textToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ colorToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ refToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ supportToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ gitHubToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ documentationToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ sourceCodeToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ aboutProgramToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ triagleToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ clearToolStripMenuItem;

		// ********************** GROUP BOX TOOLS *****************************
		System::Windows::Forms::GroupBox^ groupBoxTools;
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Button^ buttonColor;
		System::Windows::Forms::Button^ buttonClear;
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::NumericUpDown^ numericUpDownBrushSize;
		System::Windows::Forms::Label^ label3;
		System::Windows::Forms::Button^ buttonTexture;
		System::Windows::Forms::Button^ buttonTriagle;
		System::Windows::Forms::Button^ buttonLine;
		System::Windows::Forms::Button^ buttonCircle;
		System::Windows::Forms::Button^ buttonSquare;
		System::Windows::Forms::Button^ buttonText;
		System::Windows::Forms::ToolStripMenuItem^ settingsToolStripMenuItem;

		// ********************** DIALOGS **********************************
		System::Windows::Forms::OpenFileDialog^ openFileDialog;
		System::Windows::Forms::SaveFileDialog^ saveFileDialog;
		System::Windows::Forms::ColorDialog^ colorDialog;
		System::Windows::Forms::FontDialog^ fontDialog;

		// ********************* OTHER FIELDS *********************************


#pragma endregion

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormPaint::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->closeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mainToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->undoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->redoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->imageToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->backgroundToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->loadBackgroundToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->createBackgroundToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->squareToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->circleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lineToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textureToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->triagleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->colorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clearToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->refToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->settingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supportToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gitHubToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->documentationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sourceCodeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutProgramToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBoxTools = (gcnew System::Windows::Forms::GroupBox());
			this->buttonText = (gcnew System::Windows::Forms::Button());
			this->buttonTexture = (gcnew System::Windows::Forms::Button());
			this->buttonTriagle = (gcnew System::Windows::Forms::Button());
			this->buttonLine = (gcnew System::Windows::Forms::Button());
			this->buttonCircle = (gcnew System::Windows::Forms::Button());
			this->buttonSquare = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownBrushSize = (gcnew System::Windows::Forms::NumericUpDown());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->buttonColor = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->colorDialog = (gcnew System::Windows::Forms::ColorDialog());
			this->fontDialog = (gcnew System::Windows::Forms::FontDialog());
			this->menuStrip1->SuspendLayout();
			this->groupBoxTools->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownBrushSize))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5)
			{
				this->fileToolStripMenuItem,
					this->mainToolStripMenuItem, this->editToolStripMenuItem, this->imageToolStripMenuItem, this->refToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(925, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6)
			{
				this->newToolStripMenuItem,
					this->openToolStripMenuItem, this->saveToolStripMenuItem, this->saveAsToolStripMenuItem, this->closeToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->fileToolStripMenuItem->Text = L"Файл";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->newToolStripMenuItem->Text = L"Новый";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormPaint::newToolStripMenuItem_Click);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->openToolStripMenuItem->Text = L"Открыть";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormPaint::openToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->saveToolStripMenuItem->Text = L"Сохранить";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormPaint::saveToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->saveAsToolStripMenuItem->Text = L"Сохранить как";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormPaint::saveAsToolStripMenuItem_Click);
			// 
			// closeToolStripMenuItem
			// 
			this->closeToolStripMenuItem->Name = L"closeToolStripMenuItem";
			this->closeToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->closeToolStripMenuItem->Text = L"Закрыть";
			this->closeToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormPaint::closeToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->exitToolStripMenuItem->Text = L"Выход";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormPaint::exitToolStripMenuItem_Click);
			// 
			// mainToolStripMenuItem
			// 
			this->mainToolStripMenuItem->Name = L"mainToolStripMenuItem";
			this->mainToolStripMenuItem->Size = System::Drawing::Size(63, 20);
			this->mainToolStripMenuItem->Text = L"Главная";
			this->mainToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormPaint::mainToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2)
			{
				this->undoToolStripMenuItem,
					this->redoToolStripMenuItem
			});
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->editToolStripMenuItem->Text = L"Правка";
			// 
			// undoToolStripMenuItem
			// 
			this->undoToolStripMenuItem->Name = L"undoToolStripMenuItem";
			this->undoToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->undoToolStripMenuItem->Text = L"Отменить";
			this->undoToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormPaint::undoToolStripMenuItem_Click);
			// 
			// redoToolStripMenuItem
			// 
			this->redoToolStripMenuItem->Name = L"redoToolStripMenuItem";
			this->redoToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->redoToolStripMenuItem->Text = L"Вернуть";
			this->redoToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormPaint::redoToolStripMenuItem_Click);
			// 
			// imageToolStripMenuItem
			// 
			this->imageToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9)
			{
				this->backgroundToolStripMenuItem,
					this->squareToolStripMenuItem, this->circleToolStripMenuItem, this->lineToolStripMenuItem, this->textureToolStripMenuItem, this->triagleToolStripMenuItem,
					this->textToolStripMenuItem, this->colorToolStripMenuItem, this->clearToolStripMenuItem
			});
			this->imageToolStripMenuItem->Name = L"imageToolStripMenuItem";
			this->imageToolStripMenuItem->Size = System::Drawing::Size(95, 20);
			this->imageToolStripMenuItem->Text = L"Изображение";
			// 
			// backgroundToolStripMenuItem
			// 
			this->backgroundToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2)
			{
				this->loadBackgroundToolStripMenuItem,
					this->createBackgroundToolStripMenuItem
			});
			this->backgroundToolStripMenuItem->Name = L"backgroundToolStripMenuItem";
			this->backgroundToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->backgroundToolStripMenuItem->Text = L"Фон";
			// 
			// loadBackgroundToolStripMenuItem
			// 
			this->loadBackgroundToolStripMenuItem->Name = L"loadBackgroundToolStripMenuItem";
			this->loadBackgroundToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->loadBackgroundToolStripMenuItem->Text = L"Загрузить";
			this->loadBackgroundToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormPaint::loadBackgroundToolStripMenuItem_Click);
			// 
			// createBackgroundToolStripMenuItem
			// 
			this->createBackgroundToolStripMenuItem->Name = L"createBackgroundToolStripMenuItem";
			this->createBackgroundToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->createBackgroundToolStripMenuItem->Text = L"Создать";
			this->createBackgroundToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormPaint::createBackgroundToolStripMenuItem_Click);
			// 
			// squareToolStripMenuItem
			// 
			this->squareToolStripMenuItem->Name = L"squareToolStripMenuItem";
			this->squareToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->squareToolStripMenuItem->Text = L"Квадрат";
			this->squareToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormPaint::squareTool_Click);
			// 
			// circleToolStripMenuItem
			// 
			this->circleToolStripMenuItem->Name = L"circleToolStripMenuItem";
			this->circleToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->circleToolStripMenuItem->Text = L"Круг";
			this->circleToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormPaint::circleTool_Click);
			// 
			// lineToolStripMenuItem
			// 
			this->lineToolStripMenuItem->Name = L"lineToolStripMenuItem";
			this->lineToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->lineToolStripMenuItem->Text = L"Линия";
			this->lineToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormPaint::lineTool_Click);
			// 
			// textureToolStripMenuItem
			// 
			this->textureToolStripMenuItem->Name = L"textureToolStripMenuItem";
			this->textureToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->textureToolStripMenuItem->Text = L"Текстура";
			this->textureToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormPaint::textureTool_Click);
			// 
			// triagleToolStripMenuItem
			// 
			this->triagleToolStripMenuItem->Name = L"triagleToolStripMenuItem";
			this->triagleToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->triagleToolStripMenuItem->Text = L"Треугольник";
			this->triagleToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormPaint::triagleTool_Click);
			// 
			// textToolStripMenuItem
			// 
			this->textToolStripMenuItem->Name = L"textToolStripMenuItem";
			this->textToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->textToolStripMenuItem->Text = L"Текст";
			this->textToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormPaint::textTool_Click);
			// 
			// colorToolStripMenuItem
			// 
			this->colorToolStripMenuItem->Name = L"colorToolStripMenuItem";
			this->colorToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->colorToolStripMenuItem->Text = L"Цвет";
			this->colorToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormPaint::colorTool_Click);
			// 
			// clearToolStripMenuItem
			// 
			this->clearToolStripMenuItem->Name = L"clearToolStripMenuItem";
			this->clearToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->clearToolStripMenuItem->Text = L"Очистить";
			this->clearToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormPaint::clearTool_Click);
			// 
			// refToolStripMenuItem
			// 
			this->refToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4)
			{
				this->settingsToolStripMenuItem,
					this->supportToolStripMenuItem, this->gitHubToolStripMenuItem, this->aboutProgramToolStripMenuItem
			});
			this->refToolStripMenuItem->Name = L"refToolStripMenuItem";
			this->refToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->refToolStripMenuItem->Text = L"Справка";
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->Name = L"settingsToolStripMenuItem";
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->settingsToolStripMenuItem->Text = L"Настройки";
			this->settingsToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormPaint::settingsTool_Click);
			// 
			// supportToolStripMenuItem
			// 
			this->supportToolStripMenuItem->Name = L"supportToolStripMenuItem";
			this->supportToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->supportToolStripMenuItem->Text = L"Поддержка";
			this->supportToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormPaint::supportToolStripMenuItem_Click);
			// 
			// gitHubToolStripMenuItem
			// 
			this->gitHubToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2)
			{
				this->documentationToolStripMenuItem,
					this->sourceCodeToolStripMenuItem
			});
			this->gitHubToolStripMenuItem->Name = L"gitHubToolStripMenuItem";
			this->gitHubToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->gitHubToolStripMenuItem->Text = L"GitHub";
			// 
			// documentationToolStripMenuItem
			// 
			this->documentationToolStripMenuItem->Name = L"documentationToolStripMenuItem";
			this->documentationToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->documentationToolStripMenuItem->Text = L"Документация";
			this->documentationToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormPaint::documentationToolStripMenuItem_Click);
			// 
			// sourceCodeToolStripMenuItem
			// 
			this->sourceCodeToolStripMenuItem->Name = L"sourceCodeToolStripMenuItem";
			this->sourceCodeToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->sourceCodeToolStripMenuItem->Text = L"Исходный код";
			this->sourceCodeToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormPaint::sourceCodeToolStripMenuItem_Click);
			// 
			// aboutProgramToolStripMenuItem
			// 
			this->aboutProgramToolStripMenuItem->Name = L"aboutProgramToolStripMenuItem";
			this->aboutProgramToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->aboutProgramToolStripMenuItem->Text = L"О программе";
			this->aboutProgramToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormPaint::aboutProgramToolStripMenuItem_Click);
			// 
			// groupBoxTools
			// 
			this->groupBoxTools->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
																							| System::Windows::Forms::AnchorStyles::Right));
			this->groupBoxTools->Controls->Add(this->buttonText);
			this->groupBoxTools->Controls->Add(this->buttonTexture);
			this->groupBoxTools->Controls->Add(this->buttonTriagle);
			this->groupBoxTools->Controls->Add(this->buttonLine);
			this->groupBoxTools->Controls->Add(this->buttonCircle);
			this->groupBoxTools->Controls->Add(this->buttonSquare);
			this->groupBoxTools->Controls->Add(this->label3);
			this->groupBoxTools->Controls->Add(this->label2);
			this->groupBoxTools->Controls->Add(this->numericUpDownBrushSize);
			this->groupBoxTools->Controls->Add(this->buttonClear);
			this->groupBoxTools->Controls->Add(this->buttonColor);
			this->groupBoxTools->Controls->Add(this->label1);
			this->groupBoxTools->Location = System::Drawing::Point(0, 27);
			this->groupBoxTools->Name = L"groupBoxTools";
			this->groupBoxTools->Size = System::Drawing::Size(925, 145);
			this->groupBoxTools->TabIndex = 1;
			this->groupBoxTools->TabStop = false;
			// 
			// buttonText
			// 
			this->buttonText->AutoSize = true;
			this->buttonText->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->buttonText->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
									  static_cast<System::Byte>(204)));
			this->buttonText->Location = System::Drawing::Point(129, 97);
			this->buttonText->Name = L"buttonText";
			this->buttonText->Size = System::Drawing::Size(69, 30);
			this->buttonText->TabIndex = 11;
			this->buttonText->Text = L"Текст";
			this->buttonText->UseVisualStyleBackColor = true;
			this->buttonText->Click += gcnew System::EventHandler(this, &FormPaint::textTool_Click);
			// 
			// buttonTexture
			// 
			this->buttonTexture->AutoSize = true;
			this->buttonTexture->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->buttonTexture->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
										 static_cast<System::Byte>(204)));
			this->buttonTexture->Location = System::Drawing::Point(12, 97);
			this->buttonTexture->Name = L"buttonTexture";
			this->buttonTexture->Size = System::Drawing::Size(101, 30);
			this->buttonTexture->TabIndex = 10;
			this->buttonTexture->Text = L"Тесктура";
			this->buttonTexture->UseVisualStyleBackColor = true;
			this->buttonTexture->Click += gcnew System::EventHandler(this, &FormPaint::textureTool_Click);
			// 
			// buttonTriagle
			// 
			this->buttonTriagle->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->buttonTriagle->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
										 static_cast<System::Byte>(204)));
			this->buttonTriagle->Location = System::Drawing::Point(371, 97);
			this->buttonTriagle->Name = L"buttonTriagle";
			this->buttonTriagle->Size = System::Drawing::Size(135, 30);
			this->buttonTriagle->TabIndex = 9;
			this->buttonTriagle->Text = L"Треугольник";
			this->buttonTriagle->UseVisualStyleBackColor = true;
			this->buttonTriagle->Click += gcnew System::EventHandler(this, &FormPaint::triagleTool_Click);
			// 
			// buttonLine
			// 
			this->buttonLine->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->buttonLine->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
									  static_cast<System::Byte>(204)));
			this->buttonLine->Location = System::Drawing::Point(230, 97);
			this->buttonLine->Name = L"buttonLine";
			this->buttonLine->Size = System::Drawing::Size(135, 30);
			this->buttonLine->TabIndex = 8;
			this->buttonLine->Text = L"Линия";
			this->buttonLine->UseVisualStyleBackColor = true;
			this->buttonLine->Click += gcnew System::EventHandler(this, &FormPaint::lineTool_Click);
			// 
			// buttonCircle
			// 
			this->buttonCircle->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->buttonCircle->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
										static_cast<System::Byte>(204)));
			this->buttonCircle->Location = System::Drawing::Point(371, 61);
			this->buttonCircle->Name = L"buttonCircle";
			this->buttonCircle->Size = System::Drawing::Size(135, 30);
			this->buttonCircle->TabIndex = 7;
			this->buttonCircle->Text = L"Круг";
			this->buttonCircle->UseVisualStyleBackColor = true;
			this->buttonCircle->Click += gcnew System::EventHandler(this, &FormPaint::circleTool_Click);
			// 
			// buttonSquare
			// 
			this->buttonSquare->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->buttonSquare->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
										static_cast<System::Byte>(204)));
			this->buttonSquare->Location = System::Drawing::Point(230, 61);
			this->buttonSquare->Name = L"buttonSquare";
			this->buttonSquare->Size = System::Drawing::Size(135, 30);
			this->buttonSquare->TabIndex = 6;
			this->buttonSquare->Text = L"Квадрат";
			this->buttonSquare->UseVisualStyleBackColor = true;
			this->buttonSquare->Click += gcnew System::EventHandler(this, &FormPaint::squareTool_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
								  static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(317, 23);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 24);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Фигуры";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
								  static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(137, 23);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Размер";
			// 
			// numericUpDownBrushSize
			// 
			this->numericUpDownBrushSize->Location = System::Drawing::Point(140, 43);
			this->numericUpDownBrushSize->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownBrushSize->Name = L"numericUpDownBrushSize";
			this->numericUpDownBrushSize->Size = System::Drawing::Size(58, 20);
			this->numericUpDownBrushSize->TabIndex = 3;
			this->numericUpDownBrushSize->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 12, 0, 0, 0 });
			this->numericUpDownBrushSize->ValueChanged += gcnew System::EventHandler(this, &FormPaint::numericUpDownBrushSize_ValueChanged);
			// 
			// buttonClear
			// 
			this->buttonClear->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->buttonClear->AutoSize = true;
			this->buttonClear->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->buttonClear->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
									   static_cast<System::Byte>(204)));
			this->buttonClear->Location = System::Drawing::Point(798, 111);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(102, 30);
			this->buttonClear->TabIndex = 2;
			this->buttonClear->Text = L"Очистить";
			this->buttonClear->UseVisualStyleBackColor = true;
			this->buttonClear->Click += gcnew System::EventHandler(this, &FormPaint::clearTool_Click);
			// 
			// buttonColor
			// 
			this->buttonColor->AutoSize = true;
			this->buttonColor->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->buttonColor->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
									   static_cast<System::Byte>(204)));
			this->buttonColor->Location = System::Drawing::Point(12, 43);
			this->buttonColor->Name = L"buttonColor";
			this->buttonColor->Size = System::Drawing::Size(62, 30);
			this->buttonColor->TabIndex = 1;
			this->buttonColor->Text = L"Цвет";
			this->buttonColor->UseVisualStyleBackColor = true;
			this->buttonColor->Click += gcnew System::EventHandler(this, &FormPaint::colorTool_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
								  static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Кисть";
			// 
			// pictureBox
			// 
			this->pictureBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox->Location = System::Drawing::Point(0, 0);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(925, 621);
			this->pictureBox->TabIndex = 2;
			this->pictureBox->TabStop = false;
			// 
			// openFileDialog
			// 
			this->openFileDialog->FileName = L"openFileDialog";
			// 
			// FormPaint
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(925, 621);
			this->Controls->Add(this->groupBoxTools);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->pictureBox);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MinimumSize = System::Drawing::Size(660, 350);
			this->Name = L"FormPaint";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"VPaint";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBoxTools->ResumeLayout(false);
			this->groupBoxTools->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownBrushSize))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

		System::Void supportToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void documentationToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void sourceCodeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void aboutProgramToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

		System::Void mainToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

		System::Void newToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void closeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

		System::Void undoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void redoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

		System::Void loadBackgroundToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void createBackgroundToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

		System::Void squareTool_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void circleTool_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void lineTool_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void textureTool_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void textTool_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void colorTool_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void settingsTool_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void triagleTool_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void clearTool_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void numericUpDownBrushSize_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	};
}