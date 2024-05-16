namespace WindowsFormsApp
{
    partial class Form1
    {
        /// <summary>
        /// 필수 디자이너 변수입니다.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 사용 중인 모든 리소스를 정리합니다.
        /// </summary>
        /// <param name="disposing">관리되는 리소스를 삭제해야 하면 true이고, 그렇지 않으면 false입니다.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form 디자이너에서 생성한 코드

        /// <summary>
        /// 디자이너 지원에 필요한 메서드입니다. 
        /// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
        /// </summary>
        private void InitializeComponent()
        {
            this.btnEvent = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.chkbok = new System.Windows.Forms.CheckBox();
            this.chkjjam = new System.Windows.Forms.CheckBox();
            this.chkTang = new System.Windows.Forms.CheckBox();
            this.chkla = new System.Windows.Forms.CheckBox();
            this.lblOrder = new System.Windows.Forms.Label();
            this.radioAgree = new System.Windows.Forms.RadioButton();
            this.radioDisagree = new System.Windows.Forms.RadioButton();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.label2 = new System.Windows.Forms.Label();
            this.btnEnter = new System.Windows.Forms.Button();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.btnReset = new System.Windows.Forms.Button();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.cbPay = new System.Windows.Forms.ComboBox();
            this.lbArea = new System.Windows.Forms.ListBox();
            this.btnPay = new System.Windows.Forms.Button();
            this.groupBox1.SuspendLayout();
            this.SuspendLayout();
            // 
            // btnEvent
            // 
            this.btnEvent.Location = new System.Drawing.Point(46, 124);
            this.btnEvent.Name = "btnEvent";
            this.btnEvent.Size = new System.Drawing.Size(301, 20);
            this.btnEvent.TabIndex = 0;
            this.btnEvent.Text = "주문";
            this.btnEvent.UseVisualStyleBackColor = true;
            this.btnEvent.Click += new System.EventHandler(this.btnEvent_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("맑은 고딕", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label1.Location = new System.Drawing.Point(41, 20);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(123, 30);
            this.label1.TabIndex = 1;
            this.label1.Text = "주문하세요.";
            // 
            // chkbok
            // 
            this.chkbok.AutoSize = true;
            this.chkbok.Location = new System.Drawing.Point(46, 79);
            this.chkbok.Name = "chkbok";
            this.chkbok.Size = new System.Drawing.Size(60, 16);
            this.chkbok.TabIndex = 2;
            this.chkbok.Text = "볶음밥";
            this.chkbok.UseVisualStyleBackColor = true;
            // 
            // chkjjam
            // 
            this.chkjjam.AutoSize = true;
            this.chkjjam.Location = new System.Drawing.Point(122, 79);
            this.chkjjam.Name = "chkjjam";
            this.chkjjam.Size = new System.Drawing.Size(48, 16);
            this.chkjjam.TabIndex = 3;
            this.chkjjam.Text = "짬뽕";
            this.chkjjam.UseVisualStyleBackColor = true;
            // 
            // chkTang
            // 
            this.chkTang.AutoSize = true;
            this.chkTang.Location = new System.Drawing.Point(191, 79);
            this.chkTang.Name = "chkTang";
            this.chkTang.Size = new System.Drawing.Size(60, 16);
            this.chkTang.TabIndex = 4;
            this.chkTang.Text = "탕수육";
            this.chkTang.UseVisualStyleBackColor = true;
            // 
            // chkla
            // 
            this.chkla.AutoSize = true;
            this.chkla.Location = new System.Drawing.Point(287, 79);
            this.chkla.Name = "chkla";
            this.chkla.Size = new System.Drawing.Size(60, 16);
            this.chkla.TabIndex = 5;
            this.chkla.Text = "라조기";
            this.chkla.UseVisualStyleBackColor = true;
            // 
            // lblOrder
            // 
            this.lblOrder.AutoSize = true;
            this.lblOrder.Location = new System.Drawing.Point(409, 79);
            this.lblOrder.Name = "lblOrder";
            this.lblOrder.Size = new System.Drawing.Size(53, 12);
            this.lblOrder.TabIndex = 6;
            this.lblOrder.Text = "주문결과";
            // 
            // radioAgree
            // 
            this.radioAgree.AutoSize = true;
            this.radioAgree.Location = new System.Drawing.Point(40, 28);
            this.radioAgree.Name = "radioAgree";
            this.radioAgree.Size = new System.Drawing.Size(47, 16);
            this.radioAgree.TabIndex = 7;
            this.radioAgree.TabStop = true;
            this.radioAgree.Text = "동의";
            this.radioAgree.UseVisualStyleBackColor = true;
            // 
            // radioDisagree
            // 
            this.radioDisagree.AutoSize = true;
            this.radioDisagree.Location = new System.Drawing.Point(152, 28);
            this.radioDisagree.Name = "radioDisagree";
            this.radioDisagree.Size = new System.Drawing.Size(79, 16);
            this.radioDisagree.TabIndex = 8;
            this.radioDisagree.TabStop = true;
            this.radioDisagree.Text = "동의 안 함";
            this.radioDisagree.UseVisualStyleBackColor = true;
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.radioAgree);
            this.groupBox1.Controls.Add(this.radioDisagree);
            this.groupBox1.Location = new System.Drawing.Point(36, 222);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(279, 60);
            this.groupBox1.TabIndex = 9;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "개인정보제공동의";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("맑은 고딕", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label2.Location = new System.Drawing.Point(37, 175);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(272, 30);
            this.label2.TabIndex = 10;
            this.label2.Text = "개인정보 활용 및 수집 동의";
            // 
            // btnEnter
            // 
            this.btnEnter.Location = new System.Drawing.Point(321, 230);
            this.btnEnter.Name = "btnEnter";
            this.btnEnter.Size = new System.Drawing.Size(77, 49);
            this.btnEnter.TabIndex = 11;
            this.btnEnter.Text = "응모";
            this.btnEnter.UseVisualStyleBackColor = true;
            this.btnEnter.Click += new System.EventHandler(this.btnEnter_Click);
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(36, 356);
            this.textBox1.Multiline = true;
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(279, 70);
            this.textBox1.TabIndex = 12;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("맑은 고딕", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label3.Location = new System.Drawing.Point(34, 312);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(174, 30);
            this.label3.TabIndex = 13;
            this.label3.Text = "주문 시 요청사항";
            // 
            // btnReset
            // 
            this.btnReset.Location = new System.Drawing.Point(323, 356);
            this.btnReset.Name = "btnReset";
            this.btnReset.Size = new System.Drawing.Size(75, 70);
            this.btnReset.TabIndex = 14;
            this.btnReset.Text = "접수";
            this.btnReset.UseVisualStyleBackColor = true;
            this.btnReset.Click += new System.EventHandler(this.btnReset_Click);
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Font = new System.Drawing.Font("맑은 고딕", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label4.Location = new System.Drawing.Point(36, 454);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(97, 30);
            this.label4.TabIndex = 15;
            this.label4.Text = "결제방법";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Font = new System.Drawing.Font("맑은 고딕", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label5.Location = new System.Drawing.Point(170, 454);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(97, 30);
            this.label5.TabIndex = 16;
            this.label5.Text = "결제정보";
            // 
            // cbPay
            // 
            this.cbPay.FormattingEnabled = true;
            this.cbPay.Items.AddRange(new object[] {
            "신용카드",
            "무통장입금",
            "포인트졀제"});
            this.cbPay.Location = new System.Drawing.Point(42, 500);
            this.cbPay.Name = "cbPay";
            this.cbPay.Size = new System.Drawing.Size(81, 20);
            this.cbPay.TabIndex = 17;
            this.cbPay.Text = "신용카드";
            this.cbPay.SelectedIndexChanged += new System.EventHandler(this.cbPay_SelectedIndexChanged);
            // 
            // lbArea
            // 
            this.lbArea.FormattingEnabled = true;
            this.lbArea.ItemHeight = 12;
            this.lbArea.Items.AddRange(new object[] {
            "잀불",
            "3개월 할부",
            "6개월 할부"});
            this.lbArea.Location = new System.Drawing.Point(159, 500);
            this.lbArea.Name = "lbArea";
            this.lbArea.Size = new System.Drawing.Size(120, 88);
            this.lbArea.TabIndex = 18;
            // 
            // btnPay
            // 
            this.btnPay.Location = new System.Drawing.Point(311, 500);
            this.btnPay.Name = "btnPay";
            this.btnPay.Size = new System.Drawing.Size(75, 88);
            this.btnPay.TabIndex = 19;
            this.btnPay.Text = "결제";
            this.btnPay.UseVisualStyleBackColor = true;
            this.btnPay.Click += new System.EventHandler(this.btnPay_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(559, 639);
            this.Controls.Add(this.btnPay);
            this.Controls.Add(this.lbArea);
            this.Controls.Add(this.cbPay);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.btnReset);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.btnEnter);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.lblOrder);
            this.Controls.Add(this.chkla);
            this.Controls.Add(this.chkTang);
            this.Controls.Add(this.chkjjam);
            this.Controls.Add(this.chkbok);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.btnEvent);
            this.Controls.Add(this.groupBox1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button btnEvent;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.CheckBox chkbok;
        private System.Windows.Forms.CheckBox chkjjam;
        private System.Windows.Forms.CheckBox chkTang;
        private System.Windows.Forms.CheckBox chkla;
        private System.Windows.Forms.Label lblOrder;
        private System.Windows.Forms.RadioButton radioAgree;
        private System.Windows.Forms.RadioButton radioDisagree;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Button btnEnter;
        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Button btnReset;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.ComboBox cbPay;
        private System.Windows.Forms.ListBox lbArea;
        private System.Windows.Forms.Button btnPay;
    }
}

