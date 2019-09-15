#pragma once
#include "Tarea.h"
namespace Tarea1JoséDeLeon1170419 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Label^ lblResultado;
	private: System::Windows::Forms::TextBox^ txtMultiplicador;
	private: System::Windows::Forms::TextBox^ txtSumador;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txtPalabra;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtBase;
	private: System::Windows::Forms::Button^ btnBinario;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label6;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->lblResultado = (gcnew System::Windows::Forms::Label());
			this->txtMultiplicador = (gcnew System::Windows::Forms::TextBox());
			this->txtSumador = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtPalabra = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtBase = (gcnew System::Windows::Forms::TextBox());
			this->btnBinario = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(165, 103);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Calcular";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			// 
			// lblResultado
			// 
			this->lblResultado->AutoSize = true;
			this->lblResultado->Location = System::Drawing::Point(12, 130);
			this->lblResultado->Name = L"lblResultado";
			this->lblResultado->Size = System::Drawing::Size(72, 17);
			this->lblResultado->TabIndex = 19;
			this->lblResultado->Text = L"Resultado";
			this->lblResultado->Click += gcnew System::EventHandler(this, &MyForm::LblResultado_Click);
			// 
			// txtMultiplicador
			// 
			this->txtMultiplicador->Location = System::Drawing::Point(133, 74);
			this->txtMultiplicador->Margin = System::Windows::Forms::Padding(4);
			this->txtMultiplicador->Name = L"txtMultiplicador";
			this->txtMultiplicador->Size = System::Drawing::Size(132, 22);
			this->txtMultiplicador->TabIndex = 18;
			this->txtMultiplicador->TextChanged += gcnew System::EventHandler(this, &MyForm::TxtMultiplicador_TextChanged);
			// 
			// txtSumador
			// 
			this->txtSumador->Location = System::Drawing::Point(133, 21);
			this->txtSumador->Margin = System::Windows::Forms::Padding(4);
			this->txtSumador->Name = L"txtSumador";
			this->txtSumador->Size = System::Drawing::Size(132, 22);
			this->txtSumador->TabIndex = 17;
			this->txtSumador->TextChanged += gcnew System::EventHandler(this, &MyForm::TxtSumador_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 78);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 17);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Multiplicador";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::Label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 17);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Sumador";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::Label1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(318, 20);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(145, 17);
			this->label4->TabIndex = 23;
			this->label4->Text = L"Paralabra Palindroma";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(321, 103);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 22;
			this->button1->Text = L"Revisar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// txtPalabra
			// 
			this->txtPalabra->Location = System::Drawing::Point(321, 41);
			this->txtPalabra->Margin = System::Windows::Forms::Padding(4);
			this->txtPalabra->Name = L"txtPalabra";
			this->txtPalabra->Size = System::Drawing::Size(132, 22);
			this->txtPalabra->TabIndex = 21;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(318, 79);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(72, 17);
			this->label5->TabIndex = 24;
			this->label5->Text = L"Resultado";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Enabled = false;
			this->label3->Location = System::Drawing::Point(540, 20);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 17);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Base M a N";
			// 
			// txtBase
			// 
			this->txtBase->Enabled = false;
			this->txtBase->Location = System::Drawing::Point(543, 41);
			this->txtBase->Margin = System::Windows::Forms::Padding(4);
			this->txtBase->Name = L"txtBase";
			this->txtBase->Size = System::Drawing::Size(78, 22);
			this->txtBase->TabIndex = 26;
			// 
			// btnBinario
			// 
			this->btnBinario->Enabled = false;
			this->btnBinario->Location = System::Drawing::Point(543, 79);
			this->btnBinario->Name = L"btnBinario";
			this->btnBinario->Size = System::Drawing::Size(24, 23);
			this->btnBinario->TabIndex = 27;
			this->btnBinario->Text = L"2";
			this->btnBinario->UseVisualStyleBackColor = true;
			this->btnBinario->Click += gcnew System::EventHandler(this, &MyForm::BtnBinario_Click);
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(573, 79);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(24, 23);
			this->button3->TabIndex = 28;
			this->button3->Text = L"8";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Enabled = false;
			this->button4->Location = System::Drawing::Point(603, 79);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(36, 23);
			this->button4->TabIndex = 29;
			this->button4->Text = L"16";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Enabled = false;
			this->label6->Location = System::Drawing::Point(665, 45);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 17);
			this->label6->TabIndex = 30;
			this->label6->Text = L"Resultado";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(739, 168);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->btnBinario);
			this->Controls->Add(this->txtBase);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtPalabra);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->lblResultado);
			this->Controls->Add(this->txtMultiplicador);
			this->Controls->Add(this->txtSumador);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"Tarea 1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Tarea^ TareaObj = gcnew Tarea();
		double base = System::Convert::ToDouble(txtSumador->Text);
		double multiplicador = System::Convert::ToDouble(txtMultiplicador->Text);
		lblResultado->Text = "El resultado es: " + System::Convert::ToString(TareaObj->Multiplicacion(base, multiplicador));
	}
private: System::Void LblResultado_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void TxtMultiplicador_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void TxtSumador_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	//STACKOVERFLOW
	//AYUDA Estuardo Villeda 
	//Leyendo archivo
	StreamReader^ streamReader = gcnew StreamReader("../ArchivoLeer.txt");
	//Una vez declarada la clase, se le manda a leer el archivo, 
	String^ textoDelArchivo = streamReader->ReadToEnd();
	Tarea^ TareaObj = gcnew Tarea();
	System::Windows::Forms::MessageBox::Show("Ingeniera no me salio esto de ninguna manera :c, al menos en recursividad no me salio. ","Perdon D: ");
	Tarea ^ Tareaobj = gcnew Tarea();
	label5->Text = "El total de palabras es: " + System::Convert::ToString(Tareaobj->Palindromas(textoDelArchivo->ToLower()));
	
	StreamWriter^ streamWritter = gcnew StreamWriter("../ArchivoDestino.txt");
	streamWritter->Write("Hola mundo");
	streamWritter->Close();


	
}
private: System::Void BtnBinario_Click(System::Object^ sender, System::EventArgs^ e) {
	//int base = System::Convert::ToInt(txtBase);
	//System::Convert::ToString^
}
};
}
