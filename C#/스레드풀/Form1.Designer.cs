namespace 스레드풀
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
            this.txtThreadPool = new System.Windows.Forms.TextBox();
            this.btnThreadPool = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // txtThreadPool
            // 
            this.txtThreadPool.Location = new System.Drawing.Point(12, 12);
            this.txtThreadPool.Multiline = true;
            this.txtThreadPool.Name = "txtThreadPool";
            this.txtThreadPool.Size = new System.Drawing.Size(328, 195);
            this.txtThreadPool.TabIndex = 0;
            // 
            // btnThreadPool
            // 
            this.btnThreadPool.Location = new System.Drawing.Point(13, 214);
            this.btnThreadPool.Name = "btnThreadPool";
            this.btnThreadPool.Size = new System.Drawing.Size(327, 63);
            this.btnThreadPool.TabIndex = 1;
            this.btnThreadPool.Text = "스레드풀　생성";
            this.btnThreadPool.UseVisualStyleBackColor = true;
            this.btnThreadPool.Click += new System.EventHandler(this.btnThreadPool_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(352, 289);
            this.Controls.Add(this.btnThreadPool);
            this.Controls.Add(this.txtThreadPool);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox txtThreadPool;
        private System.Windows.Forms.Button btnThreadPool;
    }
}

