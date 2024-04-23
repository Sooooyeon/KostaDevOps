namespace NumBase
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
            this.btndouble = new System.Windows.Forms.Button();
            this.btnstring = new System.Windows.Forms.Button();
            this.lblResult = new System.Windows.Forms.Label();
            this.btnint = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // btndouble
            // 
            this.btndouble.BackColor = System.Drawing.Color.IndianRed;
            this.btndouble.Font = new System.Drawing.Font("맑은 고딕", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.btndouble.Location = new System.Drawing.Point(79, 186);
            this.btndouble.Name = "btndouble";
            this.btndouble.Size = new System.Drawing.Size(146, 52);
            this.btndouble.TabIndex = 1;
            this.btndouble.Text = "실수형 출력";
            this.btndouble.UseVisualStyleBackColor = false;
            this.btndouble.Click += new System.EventHandler(this.btndouble_Click);
            // 
            // btnstring
            // 
            this.btnstring.BackColor = System.Drawing.Color.SteelBlue;
            this.btnstring.Font = new System.Drawing.Font("맑은 고딕", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.btnstring.Location = new System.Drawing.Point(79, 272);
            this.btnstring.Name = "btnstring";
            this.btnstring.Size = new System.Drawing.Size(146, 52);
            this.btnstring.TabIndex = 2;
            this.btnstring.Text = "문자열 출력";
            this.btnstring.UseVisualStyleBackColor = false;
            this.btnstring.Click += new System.EventHandler(this.btnstring_Click);
            // 
            // lblResult
            // 
            this.lblResult.AutoSize = true;
            this.lblResult.Font = new System.Drawing.Font("맑은 고딕", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.lblResult.Location = new System.Drawing.Point(532, 197);
            this.lblResult.Name = "lblResult";
            this.lblResult.Size = new System.Drawing.Size(55, 30);
            this.lblResult.TabIndex = 3;
            this.lblResult.Text = "결과";
            // 
            // btnint
            // 
            this.btnint.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(224)))), ((int)(((byte)(192)))));
            this.btnint.Font = new System.Drawing.Font("맑은 고딕", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.btnint.Location = new System.Drawing.Point(79, 98);
            this.btnint.Name = "btnint";
            this.btnint.Size = new System.Drawing.Size(146, 52);
            this.btnint.TabIndex = 0;
            this.btnint.Text = "정수형출력";
            this.btnint.UseVisualStyleBackColor = false;
            this.btnint.Click += new System.EventHandler(this.btnint_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.lblResult);
            this.Controls.Add(this.btnstring);
            this.Controls.Add(this.btndouble);
            this.Controls.Add(this.btnint);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button btnint;
        private System.Windows.Forms.Button btndouble;
        private System.Windows.Forms.Button btnstring;
        private System.Windows.Forms.Label lblResult;
    }
}

