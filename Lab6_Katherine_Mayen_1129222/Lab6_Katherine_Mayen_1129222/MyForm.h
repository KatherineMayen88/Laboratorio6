#pragma once
#include "ProcesarArchivo.h"
#include "Orden.h"
#include "listadoPokemons.h"
#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
#include <conio.h>
#include <ctime>

listadoPokemons pokemones;
Orden Ordenes;
ProcesarArchivo LecturaArch;

namespace Lab6KatherineMayen1129222 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button_cargar;
	private: System::Windows::Forms::TextBox^ textBox_pokedex;
	private: System::Windows::Forms::Button^ button_ordenar_nombres;
	private: System::Windows::Forms::Button^ button_ordenar_generacion;
	private: System::Windows::Forms::Button^ button_ordenar_num;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox_tiempo;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button_cargar = (gcnew System::Windows::Forms::Button());
			this->textBox_pokedex = (gcnew System::Windows::Forms::TextBox());
			this->button_ordenar_nombres = (gcnew System::Windows::Forms::Button());
			this->button_ordenar_generacion = (gcnew System::Windows::Forms::Button());
			this->button_ordenar_num = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_tiempo = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(407, 107);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(118, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ordenar por:";
			// 
			// button_cargar
			// 
			this->button_cargar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_cargar->Location = System::Drawing::Point(65, 53);
			this->button_cargar->Name = L"button_cargar";
			this->button_cargar->Size = System::Drawing::Size(254, 32);
			this->button_cargar->TabIndex = 1;
			this->button_cargar->Text = L"Cargar Pokemons";
			this->button_cargar->UseVisualStyleBackColor = true;
			this->button_cargar->Click += gcnew System::EventHandler(this, &MyForm::button_cargar_Click);
			// 
			// textBox_pokedex
			// 
			this->textBox_pokedex->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_pokedex->Location = System::Drawing::Point(65, 106);
			this->textBox_pokedex->Multiline = true;
			this->textBox_pokedex->Name = L"textBox_pokedex";
			this->textBox_pokedex->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox_pokedex->Size = System::Drawing::Size(254, 306);
			this->textBox_pokedex->TabIndex = 2;
			// 
			// button_ordenar_nombres
			// 
			this->button_ordenar_nombres->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_ordenar_nombres->Location = System::Drawing::Point(411, 145);
			this->button_ordenar_nombres->Name = L"button_ordenar_nombres";
			this->button_ordenar_nombres->Size = System::Drawing::Size(208, 32);
			this->button_ordenar_nombres->TabIndex = 3;
			this->button_ordenar_nombres->Text = L"Nombres";
			this->button_ordenar_nombres->UseVisualStyleBackColor = true;
			this->button_ordenar_nombres->Click += gcnew System::EventHandler(this, &MyForm::button_ordenar_nombres_Click);
			// 
			// button_ordenar_generacion
			// 
			this->button_ordenar_generacion->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_ordenar_generacion->Location = System::Drawing::Point(411, 188);
			this->button_ordenar_generacion->Name = L"button_ordenar_generacion";
			this->button_ordenar_generacion->Size = System::Drawing::Size(208, 32);
			this->button_ordenar_generacion->TabIndex = 4;
			this->button_ordenar_generacion->Text = L"Generacion";
			this->button_ordenar_generacion->UseVisualStyleBackColor = true;
			this->button_ordenar_generacion->Click += gcnew System::EventHandler(this, &MyForm::button_ordenar_generacion_Click);
			// 
			// button_ordenar_num
			// 
			this->button_ordenar_num->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_ordenar_num->Location = System::Drawing::Point(411, 231);
			this->button_ordenar_num->Name = L"button_ordenar_num";
			this->button_ordenar_num->Size = System::Drawing::Size(208, 32);
			this->button_ordenar_num->TabIndex = 5;
			this->button_ordenar_num->Text = L"National number";
			this->button_ordenar_num->UseVisualStyleBackColor = true;
			this->button_ordenar_num->Click += gcnew System::EventHandler(this, &MyForm::button_ordenar_num_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(407, 309);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(154, 21);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Tiempo recorrido:";
			// 
			// textBox_tiempo
			// 
			this->textBox_tiempo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_tiempo->Location = System::Drawing::Point(411, 343);
			this->textBox_tiempo->Name = L"textBox_tiempo";
			this->textBox_tiempo->Size = System::Drawing::Size(208, 28);
			this->textBox_tiempo->TabIndex = 7;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(707, 483);
			this->Controls->Add(this->textBox_tiempo);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button_ordenar_num);
			this->Controls->Add(this->button_ordenar_generacion);
			this->Controls->Add(this->button_ordenar_nombres);
			this->Controls->Add(this->textBox_pokedex);
			this->Controls->Add(this->button_cargar);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion
	private: System::Void button_cargar_Click(System::Object^ sender, System::EventArgs^ e) {
		
		ProcesarArchivo archivo = ProcesarArchivo();
		//Lectura del Archivo
		Ordenes.LeerArchivo("Pokemons.txt");
		std::string Mostrar = "";
		Mostrar = Ordenes.ImprimirPokemons();

		textBox_pokedex->Text = gcnew String(Mostrar.c_str());
	}


	private: System::Void button_ordenar_nombres_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox_pokedex->Text = "";
		textBox_tiempo->Text = "";

		clock_t Tiempo;
		Tiempo = clock();

		listadoPokemons* Info = Ordenes.Almacenar();
		int conteo = Ordenes.contador() - 1;
		Ordenes.startQuickSort(Info, 0, conteo);

		for (size_t i = 0; i < conteo + 1; i++)
		{
			textBox_pokedex->Text += Info[i].UnicNumber + ", ";
			textBox_pokedex->Text += gcnew String(Info[i].NombreP.c_str());
			textBox_pokedex->Text += ", " + Info[i].Generacion + "\r\n";
		}
		float StopWatch = 0;
		Tiempo = clock() - Tiempo;
		StopWatch = Tiempo;
		textBox_tiempo->Text = "" + StopWatch + " ms";
	}


	private: System::Void button_ordenar_generacion_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox_pokedex->Text = "";
		textBox_tiempo->Text = "";

		clock_t Tiempo;
		Tiempo = clock();

		listadoPokemons* Info = Ordenes.Almacenar();
		int Contador = Ordenes.contador();

		Ordenes.SelectionSort(Info, Contador, 0);

		for (size_t i = 0; i < Contador; i++)
		{
			textBox_pokedex->Text += Info[i].UnicNumber + ", ";
			textBox_pokedex->Text += gcnew String(Info[i].NombreP.c_str());
			textBox_pokedex->Text += ", " + Info[i].Generacion + "\r\n";
		}
		float StopWatch = 0;
		Tiempo = clock() - Tiempo;
		StopWatch = Tiempo;
		textBox_tiempo->Text = "" + StopWatch + " ms";
	}


	private: System::Void button_ordenar_num_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox_pokedex->Text = "";
		textBox_tiempo->Text = "";

		clock_t Tiempo;
		Tiempo = clock();

		listadoPokemons* Info = Ordenes.Almacenar();
		int Contador = Ordenes.contador();

		Ordenes.ShellSort(Info, Contador, 0);

		for (size_t i = 0; i < Contador; i++)
		{
			textBox_pokedex->Text += Info[i].UnicNumber + ", ";
			textBox_pokedex->Text += gcnew String(Info[i].NombreP.c_str());
			textBox_pokedex->Text += ", " + Info[i].Generacion + "\r\n";
		}
		float StopWatch = 0;
		Tiempo = clock() - Tiempo;
		StopWatch = Tiempo;
		textBox_tiempo->Text = "" + StopWatch + " ms";
	}
};
}
