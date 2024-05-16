using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ListView
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnInsert_Click(object sender, EventArgs e)
        {
            string name = txtName.Text;
            string org = txtOrg.Text;
            string phone = txtPhone.Text;

            if(name == "" ||  org == "" ||  phone == "")
            {
                MessageBox.Show("입력하지 않는 곳을 채워주세요.");
            }
            else
            {
                string[] strArr = new string[] { name, phone, org };
                ListViewItem lvt = new ListViewItem(strArr); // 전처리
                listView1.Items.Add(lvt); // 리스트뷰에 항목 추가
                txtName.Clear();
                txtOrg.Clear();
                txtPhone.Clear();
            }
        }

        private void btnDelete_Click(object sender, EventArgs e)
        {
            int selectedIndex = listView1.FocusedItem.Index;
            listView1.Items.RemoveAt(selectedIndex);
        }
    }
}
