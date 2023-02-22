#pragma once
#include"Funciones.h"
#include"ListaDoble.h"
#include<fstream>
#include<iostream>
#include"Estructuras.h"
#include"listans.h"
#include <msclr/marshal_cppstd.h>
#include<vector>
#include<string>

using namespace std;

namespace SQL {
//#include"Funciones.h"
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for interfaz
	/// </summary>
	public ref class interfaz : public System::Windows::Forms::Form
	{
	public:
		interfaz(void)
		{
			InitializeComponent();
		

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~interfaz()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button6;

	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::ListBox^ listBox1;

	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::ListBox^ listBox4;




	private: System::Windows::Forms::Label^ label5;


	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::ErrorProvider^ errorProvider2;
	private: System::Windows::Forms::ErrorProvider^ errorProvider3;


	private: System::ComponentModel::IContainer^ components;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(interfaz::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->errorProvider2 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->errorProvider3 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider3))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(16, 83);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(210, 122);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &interfaz::button1_Click);
			// 
			// button2
			// 
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(16, 234);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(210, 117);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &interfaz::button2_Click);
			// 
			// button3
			// 
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(16, 373);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(210, 114);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &interfaz::button3_Click);
			// 
			// button4
			// 
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(16, 518);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(210, 114);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &interfaz::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(-4, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(864, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"_________________________________________________________________________________"
				L"______________";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(-4, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(591, 46);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Proyecto: Teoria de Conjuntos Aplicada";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(226, 83);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(657, 309);
			this->tabControl1->TabIndex = 6;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->button9);
			this->tabPage1->Controls->Add(this->button6);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->button8);
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Controls->Add(this->listBox4);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(649, 276);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Conjunto A";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &interfaz::tabPage1_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(484, 53);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(136, 20);
			this->label8->TabIndex = 21;
			this->label8->Text = L"SELECCIONADO";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(88, 19);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(233, 26);
			this->textBox2->TabIndex = 13;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(349, 52);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(106, 20);
			this->label5->TabIndex = 18;
			this->label5->Text = L"DISPONIBLE";
			this->label5->Click += gcnew System::EventHandler(this, &interfaz::label5_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(461, 174);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(41, 36);
			this->button9->TabIndex = 17;
			this->button9->Text = L"<<";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &interfaz::button9_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(7, 15);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 34);
			this->button6->TabIndex = 12;
			this->button6->Text = L"FILE A";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &interfaz::button6_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(7, 53);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->Size = System::Drawing::Size(314, 215);
			this->dataGridView1->TabIndex = 11;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &interfaz::dataGridView1_CellContentClick);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(461, 122);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(41, 36);
			this->button8->TabIndex = 16;
			this->button8->Text = L">>";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &interfaz::button8_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(343, 75);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(112, 184);
			this->listBox1->TabIndex = 14;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &interfaz::listBox1_SelectedIndexChanged);
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->ItemHeight = 20;
			this->listBox4->Location = System::Drawing::Point(508, 75);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(112, 184);
			this->listBox4->TabIndex = 15;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->button11);
			this->tabPage2->Controls->Add(this->button10);
			this->tabPage2->Controls->Add(this->listBox3);
			this->tabPage2->Controls->Add(this->listBox2);
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Controls->Add(this->button7);
			this->tabPage2->Controls->Add(this->dataGridView2);
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(649, 276);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Conjunto B";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Click += gcnew System::EventHandler(this, &interfaz::tabPage2_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(475, 55);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(136, 20);
			this->label9->TabIndex = 23;
			this->label9->Text = L"SELECCIONADO";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(340, 55);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(106, 20);
			this->label10->TabIndex = 22;
			this->label10->Text = L"DISPONIBLE";
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(452, 174);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(41, 36);
			this->button11->TabIndex = 18;
			this->button11->Text = L"<<";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &interfaz::button11_Click_1);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(452, 122);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(41, 36);
			this->button10->TabIndex = 17;
			this->button10->Text = L">>";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &interfaz::button10_Click_1);
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 20;
			this->listBox3->Location = System::Drawing::Point(499, 79);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(112, 184);
			this->listBox3->TabIndex = 16;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 20;
			this->listBox2->Location = System::Drawing::Point(334, 79);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(112, 184);
			this->listBox2->TabIndex = 15;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(92, 19);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(225, 26);
			this->textBox3->TabIndex = 14;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(10, 15);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 34);
			this->button7->TabIndex = 13;
			this->button7->Text = L"FILE B";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &interfaz::button7_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(10, 55);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 62;
			this->dataGridView2->RowTemplate->Height = 28;
			this->dataGridView2->Size = System::Drawing::Size(307, 208);
			this->dataGridView2->TabIndex = 0;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(633, 505);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(155, 26);
			this->textBox1->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(650, 467);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(147, 20);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Nombre de Archivo:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(794, 511);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 20);
			this->label4->TabIndex = 9;
			this->label4->Text = L".dat";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(670, 557);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 37);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Guardar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &interfaz::button5_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->FileName = L"openFileDialog2";
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(240, 448);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 62;
			this->dataGridView3->RowTemplate->Height = 28;
			this->dataGridView3->Size = System::Drawing::Size(307, 222);
			this->dataGridView3->TabIndex = 11;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(251, 412);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(159, 33);
			this->label7->TabIndex = 20;
			this->label7->Text = L"RESULTADO";
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// errorProvider2
			// 
			this->errorProvider2->ContainerControl = this;
			// 
			// errorProvider3
			// 
			this->errorProvider3->ContainerControl = this;
			// 
			// interfaz
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(920, 682);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"interfaz";
			this->Text = L"interfaz";
			this->Load += gcnew System::EventHandler(this, &interfaz::interfaz_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
    
	private: System::Void interfaz_Load(System::Object^ sender, System::EventArgs^ e) {
	}
static ListaDoble* moveList;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		errorProvider1->Clear();
		errorProvider2->Clear();
		errorProvider3->Clear();
		Funciones function;
		vector<string>nombreCampos;
		vector<string>nombreCampos2;
		int cont = 0;
		//Obtener campos seleccionados
		for (int x = 0; x < listBox4->Items->Count; x++) {
			string itn = msclr::interop::marshal_as< std::string >(listBox4->Items[x]->ToString());
			nombreCampos.push_back(itn);

		}
		for (int x = 0; x < listBox3->Items->Count; x++) {
			string itn = msclr::interop::marshal_as< std::string >(listBox3->Items[x]->ToString());
			nombreCampos2.push_back(itn);

		}
		ListaDoble listaA;
		ListaDoble listaB;
		ListaDoble respuesta;
		string name = msclr::interop::marshal_as< std::string >(textBox2->Text);
		string name2 = msclr::interop::marshal_as< std::string >(textBox3->Text);

		// OBTENER LISTAS
		listaA = function.tabla(name);
		listaB = function.tabla(name2);
		NodoSimple* revisaCA = listaA.primero->Objetos.primero;
		NodoSimple* revisaCB = listaB.primero->Objetos.primero;
		vector<TipoCampo>typeHeaderA;
		vector<TipoCampo>typeHeaderB;
		bool confirmado = true;
		while (revisaCA != nullptr) {
			for (int x = 0; x < nombreCampos.size(); x++) {
				if (revisaCA->getNombreC() == nombreCampos[x]) {
					typeHeaderA.push_back(revisaCA->getTipo());
				}
			}
			revisaCA = revisaCA->getSiguiente();
		}
		while (revisaCB != nullptr) {
			for (int x = 0; x < nombreCampos2.size(); x++) {
				if (revisaCB->getNombreC() == nombreCampos2[x]) {
					typeHeaderB.push_back(revisaCB->getTipo());
				}
			}
			revisaCB = revisaCB->getSiguiente();
		}

		if (nombreCampos.size() == nombreCampos2.size()) {
			for (int x = 0; x < typeHeaderA.size(); x++) {
				if (typeHeaderA[x] == typeHeaderB[x]) {

				}
				else {
					confirmado = false;
				}
			}
		}
		else {
			confirmado = false;
		}


		if (confirmado == true){
			//oPERACION
			respuesta = function.Diferencia(listaA, listaB, nombreCampos, nombreCampos2);
			if (respuesta.primero != nullptr) {
				resultheory = respuesta;


				//tabla

				int cantReg = function.obtenerTamanoRegistros(respuesta);
				int cantCamp = function.obtenerTamanoCampos(respuesta.primero->Objetos);
				dataGridView3->ColumnCount = cantCamp;
				dataGridView3->RowCount = cantReg;
				NodoSimple* tmp = respuesta.primero->Objetos.primero;
				for (int x = 0; x < cantCamp; x++) {
					string nCampo = tmp->getNombreC();
					String^ str3 = gcnew String(nCampo.c_str());
					dataGridView3->Columns[x]->Name = str3;
					tmp = tmp->getSiguiente();
				}
				NodoDoble* tmp2 = respuesta.primero;

				for (int x = 0; x < cantReg; x++) {
					NodoSimple* tmp3 = tmp2->Objetos.primero;
					for (int y = 0; y < cantCamp; y++) {
						TipoCampo tipos = tmp3->getTipo();

						switch (tipos) {

						case TipoCampo::t_Entero:
						{
							Entero* valor = (Entero*)tmp3;
							dataGridView3->Rows[x]->Cells[y]->Value = valor->getValorEntero();
						}
						break;
						case TipoCampo::t_Cadena:
						{
							Cadena* valor = (Cadena*)tmp3;
							string v2 = valor->getValorCadena();
							String^ str2 = gcnew String(v2.c_str());
							dataGridView3->Rows[x]->Cells[y]->Value = str2;



						}
						break;
						case TipoCampo::t_Char:
						{
							Caracter* valor = (Caracter*)tmp3;
							dataGridView3->Rows[x]->Cells[y]->Value = valor->getValorCaracter();


						}
						break;

						case TipoCampo::t_Decimal:

						{
							Decimal1* valor = (Decimal1*)tmp3;
							dataGridView3->Rows[x]->Cells[y]->Value = valor->getValorDecimal();

						}

						break;

						case TipoCampo::t_Logico:
						{

							Logico* valor = (Logico*)tmp3;
							if (valor->getValorLogico() == true) {
								dataGridView3->Rows[x]->Cells[y]->Value = "true";
							}
							else if (valor->getValorLogico() == false) {
								dataGridView3->Rows[x]->Cells[y]->Value = "false";
							}

						}

						break;
						}
						tmp3 = tmp3->getSiguiente();
					}

					tmp2 = tmp2->getSiguiente();
				}
			}
			else {
				errorProvider3->SetError(dataGridView3, "NO SE ENCONTRO MATCH");
			}
	}
		else {
		errorProvider1->SetError(listBox4,"NUMERO O TIPO DE CAMPOS NO SON IGUALES");
		errorProvider2->SetError(listBox3, "NUMERO O TIPO DE CAMPOS NO SON IGUALES");
		}
	}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Funciones function;
	ListaDoble list = resultheory;
	fstream archivoTeorias;
	NodoDoble* tmp = list.primero;
		string name = msclr::interop::marshal_as< std::string >(textBox1->Text);
		archivoTeorias.open(name+".dat", ios::in | ios::out | ios::app | ios::binary);
		InfoTabla informacion;
		informacion.cantidadR = function.obtenerTamanoRegistros(list);
		informacion.cantidadC = function.obtenerTamanoCampos(list.primero->Objetos);
		archivoTeorias.write(reinterpret_cast<const char*>(&informacion), sizeof(InfoTabla));
		NodoSimple* tmp2 = list.primero->Objetos.primero;
		for (int i = 0; i < informacion.cantidadC; i++) {
			TipoCampo tipo = tmp2->getTipo();
			string nombrec = tmp2->getNombreC();
			char nameCampo[20];
			strcpy(nameCampo, nombrec.c_str());
			InfoCampo campo;
			campo.tipocampo = tipo;
			strcpy(campo.nombreC, nameCampo);
			archivoTeorias.write(reinterpret_cast<const char*>(&campo), sizeof(InfoCampo));
			tmp2 = tmp2->getSiguiente();
		}
		NodoDoble* guardar1 = list.primero;
		for (int i = 0; i < informacion.cantidadR; i++) {
			archivoTeorias.seekg(sizeof(InfoTabla), ios::beg);
			long posicionLectura = archivoTeorias.tellg();
			NodoSimple* guardar2 = guardar1->Objetos.primero;
			for (int j = 0; j < informacion.cantidadC; j++) {
				archivoTeorias.seekg(posicionLectura, ios::beg);
				InfoCampo campo1;
				archivoTeorias.read(reinterpret_cast<char*>(&campo1), sizeof(InfoCampo));

				posicionLectura = archivoTeorias.tellg();

				switch (campo1.tipocampo) {
				case TipoCampo::t_Entero:
				{
					Entero* valor = (Entero*)guardar2;
					RegistroEntero v;
					v.valor = valor->getValorEntero();
					archivoTeorias.seekp(0, ios::end);
					archivoTeorias.write(reinterpret_cast<const char*>(&v), sizeof(RegistroEntero));

				}
				break;
				case TipoCampo::t_Cadena:
				{
					Cadena* valor = (Cadena*)guardar2;
					RegistroCadena v;
					string value = valor->getValorCadena();
					strcpy(v.valor, value.c_str());
					archivoTeorias.seekp(0, ios::end);
					archivoTeorias.write(reinterpret_cast<const char*>(&v), sizeof(RegistroCadena));

				}
				break;
				case TipoCampo::t_Char:
				{
					Caracter* valor = (Caracter*)guardar2;
					RegistroCaracter v;
					v.valor = valor->getValorCaracter();
					archivoTeorias.seekp(0, ios::end);
					archivoTeorias.write(reinterpret_cast<const char*>(&v), sizeof(RegistroCaracter));

				}
				break;

				case TipoCampo::t_Decimal:
				{
					Decimal1* valor = (Decimal1*)guardar2;
					RegistroDecimal v;
					v.valor = valor->getValorDecimal();

					archivoTeorias.seekp(0, ios::end);
					archivoTeorias.write(reinterpret_cast<const char*>(&v), sizeof(RegistroDecimal));
				}

				break;

				case TipoCampo::t_Logico:
				{
					RegistroLogico v;
					Logico* valor = (Logico*)guardar2;
					v.valor = valor->getValorLogico();
					archivoTeorias.seekp(0, ios::end);
					archivoTeorias.write(reinterpret_cast<const char*>(&v), sizeof(RegistroLogico));
				}

				break;
				}
				guardar2 = guardar2->getSiguiente();
			}
			guardar1 = guardar1->getSiguiente();
		}

	

}

private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox1->Items->Clear();
	listBox4->Items->Clear();
	openFileDialog1->ShowDialog();
	textBox2->Text = openFileDialog1->FileName;
	
	
	string name = msclr::interop::marshal_as< std::string >(textBox2->Text);


	fstream archivoEmpleados(name, ios::in | ios::binary);
	cout << name;
	TipoCampo tipo;
	InfoCampo campos;
	InfoTabla table;
	long posicion;
	long posicion2 = sizeof(InfoTabla);

	archivoEmpleados.read(reinterpret_cast<char*>(&table), sizeof(InfoTabla));
	dataGridView1->ColumnCount = table.cantidadC;
	dataGridView1->RowCount = table.cantidadR;
	for (int x = 0; x < table.cantidadC; x++) {
		archivoEmpleados.read(reinterpret_cast<char*>(&campos), sizeof(InfoCampo));
		string camp= campos.nombreC;
		String^ str3 = gcnew String(camp.c_str());
		dataGridView1->Columns[x]->Name = str3;
		listBox1->Items->Add(str3);

	}

	posicion = archivoEmpleados.tellg();


	for (int x = 0; x < table.cantidadR; x++) {
		posicion2 = sizeof(InfoTabla);
		for (int y = 0; y < table.cantidadC; y++) {

			archivoEmpleados.seekg(posicion2, ios::beg);
			archivoEmpleados.read(reinterpret_cast<char*>(&campos), sizeof(InfoCampo));
			posicion2 = archivoEmpleados.tellg();
			switch (campos.tipocampo) {

			case TipoCampo::t_Entero:
				archivoEmpleados.seekg(posicion, ios::beg);
				RegistroEntero v;
				archivoEmpleados.read(reinterpret_cast<char*>(&v), sizeof(RegistroEntero));
			
				dataGridView1->Rows[x]->Cells[y]->Value = v.valor;
				posicion = archivoEmpleados.tellg();



				break;
			case TipoCampo::t_Cadena:
			{
				archivoEmpleados.seekg(posicion, ios::beg);
				RegistroCadena v;
				archivoEmpleados.read(reinterpret_cast<char*>(&v), sizeof(RegistroCadena));
				string v2 = v.valor;
				String^ str2 = gcnew String(v2.c_str());
				dataGridView1->Rows[x]->Cells[y]->Value = str2;
				posicion = archivoEmpleados.tellg();


			}
			break;
			case TipoCampo::t_Char:
			{
				archivoEmpleados.seekg(posicion, ios::beg);
				RegistroCaracter v;
				archivoEmpleados.read(reinterpret_cast<char*>(&v), sizeof(RegistroCaracter));
				dataGridView1->Rows[x]->Cells[y]->Value = v.valor;
				posicion = archivoEmpleados.tellg();


			}
			break;

			case TipoCampo::t_Decimal:
				archivoEmpleados.seekg(posicion, ios::beg);
				{
					RegistroDecimal v;
					archivoEmpleados.read(reinterpret_cast<char*>(&v), sizeof(RegistroDecimal));
					dataGridView1->Rows[x]->Cells[y]->Value = v.valor;
					posicion = archivoEmpleados.tellg();
				}

				break;

			case TipoCampo::t_Logico:
			{
				archivoEmpleados.seekg(posicion, ios::beg);
				RegistroLogico v;
				archivoEmpleados.read(reinterpret_cast<char*>(&v), sizeof(RegistroLogico));

				if (v.valor == true) {
					dataGridView1->Rows[x]->Cells[y]->Value = "true";
				}
				else {
					dataGridView1->Rows[x]->Cells[y]->Value = "false";
				}

				posicion = archivoEmpleados.tellg();
			}

			break;
			}

		}

		
	}
	archivoEmpleados.close();

}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox2->Items->Clear();
		listBox3->Items->Clear();
		openFileDialog2->ShowDialog();
		textBox3->Text = openFileDialog2->FileName;


		string name = msclr::interop::marshal_as< std::string >(textBox3->Text);


		fstream archivoEmpleados(name, ios::in | ios::binary);
		cout << name;
		TipoCampo tipo;
		InfoCampo campos;
		InfoTabla table;
		long posicion;
		long posicion2 = sizeof(InfoTabla);

		archivoEmpleados.read(reinterpret_cast<char*>(&table), sizeof(InfoTabla));
		dataGridView2->ColumnCount = table.cantidadC;
		dataGridView2->RowCount = table.cantidadR;
		for (int x = 0; x < table.cantidadC; x++) {
			archivoEmpleados.read(reinterpret_cast<char*>(&campos), sizeof(InfoCampo));
			string camp = campos.nombreC;
			String^ str3 = gcnew String(camp.c_str());
			dataGridView2->Columns[x]->Name = str3;
			listBox2->Items->Add(str3);

		}

		posicion = archivoEmpleados.tellg();


		for (int x = 0; x < table.cantidadR; x++) {
			posicion2 = sizeof(InfoTabla);
			for (int y = 0; y < table.cantidadC; y++) {

				archivoEmpleados.seekg(posicion2, ios::beg);
				archivoEmpleados.read(reinterpret_cast<char*>(&campos), sizeof(InfoCampo));
				posicion2 = archivoEmpleados.tellg();
				switch (campos.tipocampo) {

				case TipoCampo::t_Entero:
					archivoEmpleados.seekg(posicion, ios::beg);
					RegistroEntero v;
					archivoEmpleados.read(reinterpret_cast<char*>(&v), sizeof(RegistroEntero));

					dataGridView2->Rows[x]->Cells[y]->Value = v.valor;
					posicion = archivoEmpleados.tellg();



					break;
				case TipoCampo::t_Cadena:
				{
					archivoEmpleados.seekg(posicion, ios::beg);
					RegistroCadena v;
					archivoEmpleados.read(reinterpret_cast<char*>(&v), sizeof(RegistroCadena));
					string v2 = v.valor;
					String^ str2 = gcnew String(v2.c_str());
					dataGridView2->Rows[x]->Cells[y]->Value = str2;
					posicion = archivoEmpleados.tellg();


				}
				break;
				case TipoCampo::t_Char:
				{
					archivoEmpleados.seekg(posicion, ios::beg);
					RegistroCaracter v;
					archivoEmpleados.read(reinterpret_cast<char*>(&v), sizeof(RegistroCaracter));
					dataGridView2->Rows[x]->Cells[y]->Value = v.valor;
					posicion = archivoEmpleados.tellg();


				}
				break;

				case TipoCampo::t_Decimal:
					archivoEmpleados.seekg(posicion, ios::beg);
					{
						RegistroDecimal v;
						archivoEmpleados.read(reinterpret_cast<char*>(&v), sizeof(RegistroDecimal));
						dataGridView2->Rows[x]->Cells[y]->Value = v.valor;
						posicion = archivoEmpleados.tellg();
					}

					break;

				case TipoCampo::t_Logico:
				{
					archivoEmpleados.seekg(posicion, ios::beg);
					RegistroLogico v;
					archivoEmpleados.read(reinterpret_cast<char*>(&v), sizeof(RegistroLogico));

					if (v.valor == true) {
						dataGridView2->Rows[x]->Cells[y]->Value = "true";
					}
					else {
						dataGridView2->Rows[x]->Cells[y]->Value = "false";
					}

					posicion = archivoEmpleados.tellg();
				}

				break;
				}

			}

		}
	}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox4->Items->Add(listBox1->SelectedItem->ToString());
	listBox1->Items->RemoveAt(listBox1->SelectedIndex);
	
	//listBox4->Items->Add();

}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox1->Items->Add(listBox4->SelectedItem->ToString());
	listBox4->Items->RemoveAt(listBox4->SelectedIndex);
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	errorProvider1->Clear();
	errorProvider2->Clear();
	errorProvider3->Clear();
	Funciones function;
	vector<string>nombreCampos;
	vector<string>nombreCampos2;
	int cont = 0;
	//Obtener campos seleccionados
	for (int x = 0; x < listBox4->Items->Count; x++) {
		string itn = msclr::interop::marshal_as< std::string >(listBox4->Items[x]->ToString());
		nombreCampos.push_back(itn);

	}
	for (int x = 0; x < listBox3->Items->Count; x++) {
		string itn = msclr::interop::marshal_as< std::string >(listBox3->Items[x]->ToString());
		nombreCampos2.push_back(itn);

	}
	ListaDoble listaA;
	ListaDoble listaB;
	ListaDoble respuesta;
	string name = msclr::interop::marshal_as< std::string >(textBox2->Text);
	string name2 = msclr::interop::marshal_as< std::string >(textBox3->Text);
	// OBTENER LISTAS
	listaA = function.tabla(name);
	listaB = function.tabla(name2);
	NodoSimple* revisaCA = listaA.primero->Objetos.primero;
	NodoSimple* revisaCB = listaB.primero->Objetos.primero;
	vector<TipoCampo>typeHeaderA;
	vector<TipoCampo>typeHeaderB;
	bool confirmado = true;
	while (revisaCA != nullptr) {
		for (int x = 0; x < nombreCampos.size(); x++) {
			if (revisaCA->getNombreC() == nombreCampos[x]) {
				typeHeaderA.push_back(revisaCA->getTipo());
			}
		}
		revisaCA = revisaCA->getSiguiente();
	}
	while (revisaCB != nullptr) {
		for (int x = 0; x < nombreCampos2.size(); x++) {
			if (revisaCB->getNombreC() == nombreCampos2[x]) {
				typeHeaderB.push_back(revisaCB->getTipo());
			}
		}
		revisaCB = revisaCB->getSiguiente();
	}

	if (nombreCampos.size() == nombreCampos2.size()) {
		for (int x = 0; x < typeHeaderA.size(); x++) {
			if (typeHeaderA[x] == typeHeaderB[x]) {

			}
			else {
				confirmado = false;
			}
		}
	}
	if (confirmado == true){
		//oPERACION
		respuesta = function.Interseccion(listaA, listaB, nombreCampos, nombreCampos2);
		if (respuesta.primero != nullptr) {
			resultheory = respuesta;
			//tabla

			int cantReg = function.obtenerTamanoRegistros(respuesta);
			int cantCamp = function.obtenerTamanoCampos(respuesta.primero->Objetos);
			dataGridView3->ColumnCount = cantCamp;
			dataGridView3->RowCount = cantReg;
			NodoSimple* tmp = respuesta.primero->Objetos.primero;
			for (int x = 0; x < cantCamp; x++) {
				string nCampo = tmp->getNombreC();
				String^ str3 = gcnew String(nCampo.c_str());
				dataGridView3->Columns[x]->Name = str3;
				tmp = tmp->getSiguiente();
			}
			NodoDoble* tmp2 = respuesta.primero;

			for (int x = 0; x < cantReg; x++) {
				NodoSimple* tmp3 = tmp2->Objetos.primero;
				for (int y = 0; y < cantCamp; y++) {
					TipoCampo tipos = tmp3->getTipo();

					switch (tipos) {

					case TipoCampo::t_Entero:
					{
						Entero* valor = (Entero*)tmp3;
						dataGridView3->Rows[x]->Cells[y]->Value = valor->getValorEntero();
					}
					break;
					case TipoCampo::t_Cadena:
					{
						Cadena* valor = (Cadena*)tmp3;
						string v2 = valor->getValorCadena();
						String^ str2 = gcnew String(v2.c_str());
						dataGridView3->Rows[x]->Cells[y]->Value = str2;



					}
					break;
					case TipoCampo::t_Char:
					{
						Caracter* valor = (Caracter*)tmp3;
						dataGridView3->Rows[x]->Cells[y]->Value = valor->getValorCaracter();


					}
					break;

					case TipoCampo::t_Decimal:

					{
						Decimal1* valor = (Decimal1*)tmp3;
						dataGridView3->Rows[x]->Cells[y]->Value = valor->getValorDecimal();

					}

					break;

					case TipoCampo::t_Logico:
					{

						Logico* valor = (Logico*)tmp3;
						if (valor->getValorLogico() == true) {
							dataGridView3->Rows[x]->Cells[y]->Value = "true";
						}
						else if (valor->getValorLogico() == false) {
							dataGridView3->Rows[x]->Cells[y]->Value = "false";
						}

					}

					break;
					}
					tmp3 = tmp3->getSiguiente();
				}

				tmp2 = tmp2->getSiguiente();
			}
		}
		else {
			errorProvider3->SetError(dataGridView3, "NO SE ENCONTRO MATCH");
		}
}
	else {
		errorProvider1->SetError(listBox4, "NUMERO O TIPO DE CAMPOS NO SON IGUALES");
		errorProvider2->SetError(listBox3, "NUMERO O TIPO DE CAMPOS NO SON IGUALES");
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	errorProvider1->Clear();
	errorProvider2->Clear();
	errorProvider3->Clear();
	Funciones function;
	vector<string>nombreCampos;
	vector<string>nombreCampos2;
	int cont = 0;
	//Obtener campos seleccionados
	for (int x = 0; x < listBox4->Items->Count; x++) {
		string itn = msclr::interop::marshal_as< std::string >(listBox4->Items[x]->ToString());
		nombreCampos.push_back(itn);

	}
	for (int x = 0; x < listBox3->Items->Count; x++) {
		string itn = msclr::interop::marshal_as< std::string >(listBox3->Items[x]->ToString());
		nombreCampos2.push_back(itn);

	}
	ListaDoble listaA;
	ListaDoble listaB;
	ListaDoble respuesta;
	string name = msclr::interop::marshal_as< std::string >(textBox2->Text);
	string name2 = msclr::interop::marshal_as< std::string >(textBox3->Text);
	// OBTENER LISTAS
	listaA = function.tabla(name);
	listaB = function.tabla(name2);
	NodoSimple* revisaCA = listaA.primero->Objetos.primero;
	NodoSimple* revisaCB = listaB.primero->Objetos.primero;
	vector<TipoCampo>typeHeaderA;
	vector<TipoCampo>typeHeaderB;
	bool confirmado = true;
	while (revisaCA != nullptr) {
		for (int x = 0; x < nombreCampos.size(); x++) {
			if (revisaCA->getNombreC() == nombreCampos[x]) {
				typeHeaderA.push_back(revisaCA->getTipo());
			}
		}
		revisaCA = revisaCA->getSiguiente();
	}
	while (revisaCB != nullptr) {
		for (int x = 0; x < nombreCampos2.size(); x++) {
			if (revisaCB->getNombreC() == nombreCampos2[x]) {
				typeHeaderB.push_back(revisaCB->getTipo());
			}
		}
		revisaCB = revisaCB->getSiguiente();
	}

	if (nombreCampos.size() == nombreCampos2.size()) {
		for (int x = 0; x < typeHeaderA.size(); x++) {
			if (typeHeaderA[x] == typeHeaderB[x]) {

			}
			else {
				confirmado = false;
			}
		}
	}
	else {
		confirmado = false;
	}
	if (confirmado == true) {
		//oPERACION
		respuesta = function.Union(listaA, listaB, nombreCampos, nombreCampos2);
		if (respuesta.primero != nullptr) {
			resultheory = respuesta;
			//tabla

			int cantReg = function.obtenerTamanoRegistros(respuesta);
			int cantCamp = function.obtenerTamanoCampos(respuesta.primero->Objetos);
			dataGridView3->ColumnCount = cantCamp;
			dataGridView3->RowCount = cantReg;
			NodoSimple* tmp = respuesta.primero->Objetos.primero;
			for (int x = 0; x < cantCamp; x++) {
				string nCampo = tmp->getNombreC();
				String^ str3 = gcnew String(nCampo.c_str());
				dataGridView3->Columns[x]->Name = str3;
				tmp = tmp->getSiguiente();
			}
			NodoDoble* tmp2 = respuesta.primero;

			for (int x = 0; x < cantReg; x++) {
				NodoSimple* tmp3 = tmp2->Objetos.primero;
				for (int y = 0; y < cantCamp; y++) {
					TipoCampo tipos = tmp3->getTipo();

					switch (tipos) {

					case TipoCampo::t_Entero:
					{
						Entero* valor = (Entero*)tmp3;
						dataGridView3->Rows[x]->Cells[y]->Value = valor->getValorEntero();
					}
					break;
					case TipoCampo::t_Cadena:
					{
						Cadena* valor = (Cadena*)tmp3;
						string v2 = valor->getValorCadena();
						String^ str2 = gcnew String(v2.c_str());
						dataGridView3->Rows[x]->Cells[y]->Value = str2;



					}
					break;
					case TipoCampo::t_Char:
					{
						Caracter* valor = (Caracter*)tmp3;
						dataGridView3->Rows[x]->Cells[y]->Value = valor->getValorCaracter();


					}
					break;

					case TipoCampo::t_Decimal:

					{
						Decimal1* valor = (Decimal1*)tmp3;
						dataGridView3->Rows[x]->Cells[y]->Value = valor->getValorDecimal();

					}

					break;

					case TipoCampo::t_Logico:
					{

						Logico* valor = (Logico*)tmp3;
						if (valor->getValorLogico() == true) {
							dataGridView3->Rows[x]->Cells[y]->Value = "true";
						}
						else if (valor->getValorLogico() == false) {
							dataGridView3->Rows[x]->Cells[y]->Value = "false";
						}

					}

					break;
					}
					tmp3 = tmp3->getSiguiente();
				}

				tmp2 = tmp2->getSiguiente();
			}
		}
		else {
			errorProvider3->SetError(dataGridView3, "NO SE ENCONTRO MATCH");
		}
	}
	else {
		errorProvider1->SetError(listBox4, "NUMERO O TIPO DE CAMPOS NO SON IGUALES");
		errorProvider2->SetError(listBox3, "NUMERO O TIPO DE CAMPOS NO SON IGUALES");
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	errorProvider1->Clear();
	errorProvider2->Clear();
	errorProvider3->Clear();
	Funciones function;
	vector<string>nombreCampos;
	vector<string>nombreCampos2;
	int cont = 0;
	//Obtener campos seleccionados
	for (int x = 0; x < listBox4->Items->Count; x++) {
		string itn = msclr::interop::marshal_as< std::string >(listBox4->Items[x]->ToString());
		nombreCampos.push_back(itn);

	}
	for (int x = 0; x < listBox3->Items->Count; x++) {
		string itn = msclr::interop::marshal_as< std::string >(listBox3->Items[x]->ToString());
		nombreCampos2.push_back(itn);

	}
	
	ListaDoble listaA;
	ListaDoble listaB;
	ListaDoble respuesta;
	string name = msclr::interop::marshal_as< std::string >(textBox2->Text);
	string name2 = msclr::interop::marshal_as< std::string >(textBox3->Text);
	// OBTENER LISTAS
	listaA = function.tabla(name);
	listaB = function.tabla(name2);
	NodoSimple* revisaCA = listaA.primero->Objetos.primero;
	NodoSimple* revisaCB = listaB.primero->Objetos.primero;
	vector<TipoCampo>typeHeaderA;
	vector<TipoCampo>typeHeaderB;
	bool confirmado = true;
	while (revisaCA != nullptr) {
		for (int x = 0; x < nombreCampos.size(); x++) {
			if (revisaCA->getNombreC() == nombreCampos[x]) {
				typeHeaderA.push_back(revisaCA->getTipo());
			}
		}
		revisaCA = revisaCA->getSiguiente();
	}
	while (revisaCB != nullptr) {
		for (int x = 0; x < nombreCampos2.size(); x++) {
			if (revisaCB->getNombreC() == nombreCampos2[x]) {
				typeHeaderB.push_back(revisaCB->getTipo());
			}
		}
		revisaCB = revisaCB->getSiguiente();
	}

	if (nombreCampos.size() == nombreCampos2.size()) {
		for (int x = 0; x < typeHeaderA.size(); x++) {
			if (typeHeaderA[x] == typeHeaderB[x]) {

			}
			else {
				confirmado = false;
			}
		}
	}
	else {
		confirmado = false;
	}

	if (confirmado == true) {
		//oPERACION
		respuesta = function.Diferencia(listaB, listaA, nombreCampos2, nombreCampos);
		if (respuesta.primero != nullptr) {

			resultheory = respuesta;
			//tabla

			int cantReg = function.obtenerTamanoRegistros(respuesta);
			int cantCamp = function.obtenerTamanoCampos(respuesta.primero->Objetos);
			dataGridView3->ColumnCount = cantCamp;
			dataGridView3->RowCount = cantReg;
			NodoSimple* tmp = respuesta.primero->Objetos.primero;
			for (int x = 0; x < cantCamp; x++) {
				string nCampo = tmp->getNombreC();
				String^ str3 = gcnew String(nCampo.c_str());
				dataGridView3->Columns[x]->Name = str3;
				tmp = tmp->getSiguiente();
			}
			NodoDoble* tmp2 = respuesta.primero;

			for (int x = 0; x < cantReg; x++) {
				NodoSimple* tmp3 = tmp2->Objetos.primero;
				for (int y = 0; y < cantCamp; y++) {
					TipoCampo tipos = tmp3->getTipo();

					switch (tipos) {

					case TipoCampo::t_Entero:
					{
						Entero* valor = (Entero*)tmp3;
						dataGridView3->Rows[x]->Cells[y]->Value = valor->getValorEntero();
					}
					break;
					case TipoCampo::t_Cadena:
					{
						Cadena* valor = (Cadena*)tmp3;
						string v2 = valor->getValorCadena();
						String^ str2 = gcnew String(v2.c_str());
						dataGridView3->Rows[x]->Cells[y]->Value = str2;



					}
					break;
					case TipoCampo::t_Char:
					{
						Caracter* valor = (Caracter*)tmp3;
						dataGridView1->Rows[x]->Cells[y]->Value = valor->getValorCaracter();


					}
					break;

					case TipoCampo::t_Decimal:

					{
						Decimal1* valor = (Decimal1*)tmp3;
						dataGridView1->Rows[x]->Cells[y]->Value = valor->getValorDecimal();

					}

					break;

					case TipoCampo::t_Logico:
					{

						Logico* valor = (Logico*)tmp3;
						if (valor->getValorLogico() == true) {
							dataGridView1->Rows[x]->Cells[y]->Value = "true";
						}
						else if (valor->getValorLogico() == false) {
							dataGridView1->Rows[x]->Cells[y]->Value = "false";
						}

					}

					break;
					}
					tmp3 = tmp3->getSiguiente();
				}

				tmp2 = tmp2->getSiguiente();
			}
		}
		else {
			errorProvider3->SetError(dataGridView3, "NO SE ENCONTRO MATCH");
		}
	}
	else {
		errorProvider1->SetError(listBox4,"NUMERO O TIPO DE CAMPOS NO SON IGUALES");
		errorProvider2->SetError(listBox3, "NUMERO O TIPO DE CAMPOS NO SON IGUALES");
		
	}
}
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button10_Click_1(System::Object^ sender, System::EventArgs^ e) {
	listBox3->Items->Add(listBox2->SelectedItem->ToString());
	listBox2->Items->RemoveAt(listBox2->SelectedIndex);
}
private: System::Void button11_Click_1(System::Object^ sender, System::EventArgs^ e) {
	listBox2->Items->Add(listBox3->SelectedItem->ToString());
	listBox3->Items->RemoveAt(listBox3->SelectedIndex);
}
};
}
