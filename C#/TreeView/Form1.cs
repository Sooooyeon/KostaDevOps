using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Xml.Linq;

namespace TreeView
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnAdd_Click(object sender, EventArgs e)
        {
            TreeNode node1 = new TreeNode(txtNode.Text);

            if(treeView1.SelectedNode.Nodes != null && treeView1.SelectedNode.IsSelected)
            {
                treeView1.SelectedNode.Nodes.Add(node1);
            }
            else
            {
                // 선택한 노드가 없는 경우
                treeView1.Nodes.Add(node1);
            }
        }

        private void btnDelete_Click(object sender, EventArgs e)
        {
            if (treeView1.SelectedNode.Nodes != null && treeView1.SelectedNode.IsSelected)
            {
                treeView1.SelectedNode.Remove();
            }

        }

        private void btnExpand_Click(object sender, EventArgs e)
        {
            treeView1.ExpandAll();
        }

        private void btnCollapse_Click(object sender, EventArgs e)
        {
            treeView1.CollapseAll();
        }
    }
}
