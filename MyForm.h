#pragma once

namespace SimpleWebBrowser {

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
	private: System::Windows::Forms::WebBrowser^ webBrowser1;
	private: System::Windows::Forms::Button^ backButton;
	private: System::Windows::Forms::Button^ forwardButton;
	protected:


	private: System::Windows::Forms::Button^ searchButton;

	private: System::Windows::Forms::TextBox^ textBox1;

	protected:

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
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->forwardButton = (gcnew System::Windows::Forms::Button());
			this->searchButton = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// webBrowser1
			// 
			this->webBrowser1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->webBrowser1->Location = System::Drawing::Point(12, 62);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(999, 416);
			this->webBrowser1->TabIndex = 0;
			this->webBrowser1->Url = (gcnew System::Uri(L"http://www.google.com", System::UriKind::Absolute));
			// 
			// backButton
			// 
			this->backButton->Location = System::Drawing::Point(12, 22);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(75, 23);
			this->backButton->TabIndex = 1;
			this->backButton->Text = L"Back";
			this->backButton->UseVisualStyleBackColor = true;
			this->backButton->Click += gcnew System::EventHandler(this, &MyForm::backButton_Click);
			// 
			// forwardButton
			// 
			this->forwardButton->Location = System::Drawing::Point(93, 22);
			this->forwardButton->Name = L"forwardButton";
			this->forwardButton->Size = System::Drawing::Size(75, 23);
			this->forwardButton->TabIndex = 2;
			this->forwardButton->Text = L"Forward";
			this->forwardButton->UseVisualStyleBackColor = true;
			this->forwardButton->Click += gcnew System::EventHandler(this, &MyForm::forwardButton_Click);
			// 
			// searchButton
			// 
			this->searchButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->searchButton->Location = System::Drawing::Point(918, 22);
			this->searchButton->Name = L"searchButton";
			this->searchButton->Size = System::Drawing::Size(80, 23);
			this->searchButton->TabIndex = 3;
			this->searchButton->Text = L"Search";
			this->searchButton->UseVisualStyleBackColor = true;
			this->searchButton->Click += gcnew System::EventHandler(this, &MyForm::searchButton_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Location = System::Drawing::Point(185, 22);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(715, 20);
			this->textBox1->TabIndex = 4;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1023, 490);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->searchButton);
			this->Controls->Add(this->forwardButton);
			this->Controls->Add(this->backButton);
			this->Controls->Add(this->webBrowser1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void searchButton_Click(System::Object^ sender, System::EventArgs^ e) {
		webBrowser1->Navigate(textBox1->Text);

	}
private: System::Void backButton_Click(System::Object^ sender, System::EventArgs^ e) {

	webBrowser1->GoBack();

}
private: System::Void forwardButton_Click(System::Object^ sender, System::EventArgs^ e) {

	webBrowser1->GoForward();
	
}
};
}
