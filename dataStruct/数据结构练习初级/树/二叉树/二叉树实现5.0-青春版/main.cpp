#include <iostream>
//�ݹ�1����ֹ����2��������3���ݹ��
//�з���ֵ�ģ�1���п�2����ֹ����3���ݹ��  �磺find������parent������sum���������񣨣���������⡣
//�ְ��������Եģ��ֽ⹦������=���ݹ�ӻ��ݣ��ݹ��ҵ����õ㣬���ݽ�����⡣���͵ľ���size������height��������̨�ף����θ��ǡ�

//void�͵ģ�ֱ��if��root�����������������delete





#include<queue>
#include<stack>
using namespace std;

struct treenode
{
    int data;//���к����У�find�����죬addΪ�ؼ�
    treenode* left;
    treenode* right;
};

    treenode* initree()//����ͷ���
    {
      treenode * p;
      if(p=new treenode)
      {
          cout<<"please enter the root"<<endl;
          cin>>p->data;
          p->right=NULL;
              p->left=NULL;
      }
      return(p);
    }
  /*  treenode* find1(treenode *root,int temp)//�����ڵ�
    {
        treenode* pt;
        if(root==NULL)
        {
            return NULL;
        }
        else{
            if(root->data==temp)
            {
                return(root);
            }
            else{
                if(pt=find1(root->left,temp))
                {
                    return(pt);
                }
                else if(pt=find1(root->right,temp))
                {
                    return(pt);
                }
                else{
                    return NULL;
                }

            }
        }

    }
    */


    treenode* find1(treenode *root,int temp)//�����ڵ�
    {

        if(root==NULL)
        {
            return NULL;
        }

        else{
            if(root->data==temp)
            {
                return(root);
            }
            else{

                return find1(root->left,temp);
                return find1(root->right,temp);
            }

        }

    }


  treenode * find2(treenode * root,int temp)//�ݹ�1����ֹ����2��������3���ݹ��
  //�ַ���ֵ�ģ���Ҫ��֤�ǿգ�void�͵ģ�ֱ��if��root��
    {
        if(root==NULL)
        {

            return NULL;
        }
        else{
            if(root->data==temp)
            {

                return root;
            }
            else
            {
            return find1(root->left,temp);
            return find1(root->right,temp);

            }


            }
    }

    void add(treenode *root)//���Ԫ��
    {
        treenode * p,*parent;
        int temp;
        int al;
      if(p=new treenode)
      {
          cout<<"������������"<<endl;
          cin>>p->data;
          p->left=NULL;
              p->right=NULL;
              cout<<"�������丸�ڵ�����"<<endl;
              cin>>temp;
              parent=find1(root,temp);
              cout<<"�����������밴1�������������밴2"<<endl;
              do
              {
                  cin>>al;
                  switch(al)
                  {
                  case 1:
                    parent->left=p;
                    cout<<"������ӳɹ�"<<endl;
                    break;
                  case 2:
                    parent->right=p;
                    cout<<"������ӳɹ�"<<endl;
                    break;
                  }
              }while(al!=1&&al!=2);
      }
    }





   void visit(treenode* root)
   {

       cout<<root->data;
   }


void delete1(treenode* root)//ȫɾ
{
        if(root)
        {
            delete1(root->left);
            delete1(root->right);
            delete(root);
        }

}
    void firstpro(treenode*root)//����
    {
        if(root)
        {
        visit(root);
        firstpro(root->left);
        firstpro(root->right);
        }
    }
     void inpro(treenode*root)//����
    {
        if(root)
        {

        inpro(root->left);
        visit(root);
        inpro(root->right);
        }
    }
     void lastpro(treenode*root)//����
    {
        if(root)
        {

        lastpro(root->left);
        lastpro(root->right);
         visit(root);
        }
    }



    int size1(treenode*root)//�ڵ���Ŀ
    {
        if(root==NULL)
        {
            return(0);
        }
        else{
            return 1+size1(root->left)+size1(root->right);
        }
    }

    void delete2(treenode*root,int temp)//����ɾ��
    {
       treenode*pt=find1(root,temp);
       delete pt;
    }

    int height(treenode*root)//�߶Ȼ����
    {
        if(root==NULL)
        {
            return 0;
        }
        else{


        if(height(root->left)<=height(root->right))
        {
            return(height(root->right)+1);
        }
        else
        {
            return(height(root->left)+1);
        }
        }

    }
    bool reroot(treenode*root)//����ͷ���
    {
        if(root==NULL||root->data==0)
        {
            return true;
        }
        else{
            return false;
        }
    }
    void leftget(treenode*root,int temp)//���ض�������
    {
        treenode*pt=find1(root,temp);
        cout<<pt->left->data;
    }
     void rightget(treenode*root,int temp)
    {
        treenode*pt=find1(root,temp);
        cout<<pt->right->data;
    }
  /*  treenode* parent(treenode*root,treenode *pt)
    {
        if(root==NULL)
        {

            return NULL;
        }
        else{

         if(root->left==pt||root->right==pt)
         {
             return (root);
         }
         else
         {
             parent(root->left,pt);
             parent(root->right,pt);
         }
        }


    }
    */
    treenode * parent(treenode * root,int temp)
    {
        if(root==NULL)
        {

            return NULL;

        }
        else
            {
            if(root->left->data==temp||root->right->data==temp)
            {

                return root;
            }
            else{

                return parent(root->left,temp);
                return parent(root->right,temp);
            }





            }


    }

    treenode* getroot(treenode*root)//������ͷָ��ָ��һ����û���±�ֻ�ܱ���������ÿ��������������Ҫ��root
    {
        return root;
    }


/*
    void levelor(treenode*root)//��������
    {
        queue<treenode*>q;
        treenode*p=root;
        q.push(root);
        while(!q.empty())
        {
            p=q.front();
            q.pop();
            cout<<p->data;
            if(p->left!=NULL)
            {
                q.push(p->left);
            }
            if(p->right!=NULL)
            {
                q.push(p->right);
            }
        }
    }



*/


    void level(treenode * root)
    {
        queue<treenode *>q;
        treenode *p=root;
        q.push(root);
        while(!q.empty())
        {
            p=q.front();
            q.pop();
            cout<<p->data;
            if(p->left!=NULL)
            {
                q.push(p->left);

            }
            if(p->right!=NULL)
            {

                q.push(p->right);
            }

        }



    }
    /*void stackproor(treenode*root)//�ǵݹ�ǰ��
    {
        stack<treenode*>s;
        treenode*p=root;
        s.push(root);
        while(!s.empty())
        {
           p=s.top();
            s.pop();
            cout<<p->data;
            if(p->right!=NULL)
            {
                s.push(p->right);
            }
              if(p->left!=NULL)
            {
                s.push(p->left);
            }
        }
    }
    */



void fan(treenode * root)
{

      queue<treenode *>q;
        treenode * p=root;
        treenode * temp;
        q.push(root);
        while(!q.empty())
        {
            p=q.front();
            q.pop();
            temp=p->left;
            p->left=p->right;
            p->right=temp;
            cout<<p->data;
            if(p->left!=NULL)
            {

                q.push(p->left);
            }
                if(p->right!=NULL)
            {

                q.push(p->right);
            }


        }

}

    /*void stackinpro(treenode*root)
    {
        stack<treenode*>s;
        treenode*p=root;
    while(p!=NULL||!s.empty())
    {
            while(p!=NULL)
            {
                s.push(p);
                p=p->left;
            }
            if(!s.empty())
            {
                p=s.top();
                 cout<<p->data;
               s.pop();

                p=p->right;
            }
        }
    }

    */

    void stackinpro(treenode * root)
    {
        treenode *p=root;
        stack<treenode *>s;
        while(p!=NULL||!s.empty())
        {
            while(p!=NULL)
            {
                s.push(p);
                p=p->left;

            }
            if(!s.empty())
            {
                p=s.top();
                s.pop();
                cout<<p->data;
                p=p->right;

            }

        }

    }











    void stackFirstPro(treenode * root)
    {
        stack<treenode *>s;
        treenode *p=root;
        s.push(root);
        while(!s.empty())
        {
            p=s.top();
            s.pop();
            cout<<p->data;
        if(p->right!=NULL)
        {

            s.push(p->right);
        }
        if(p->left!=NULL)
        {

            s.push(p->left);
        }

        }

    }
  void stacklastpro(treenode * root)
  {
      treenode *p=root;
      stack<treenode *> s;
      treenode *p1 = root;
      s.push(root);
     while (!s.empty())
     {
         p = s.top();
         if( (p->left == NULL && p->right == NULL) || (p->right == NULL && p1 == p->left) || (p1 == p->right) )//Ҷ�ӽڵ����ʹ�
         {
             cout<<p->data;
             p1 = p;//���һ�����ʵĽڵ�
             s.pop();
         }
         else
         {
             if(p->right!=NULL)
                 s.push(p->right);
             if(p->left!=NULL)
                 s.push(p->left);
         }

     }
  }












void guangyi(treenode*root)
{
    if(root!=NULL)
    {
        cout<<root->data;

    if(root->left!=NULL||root->right!=NULL)
    {
        cout<<"(";
        guangyi(root->left);
        cout<<",";

        if(root->right!=NULL)
        {
            guangyi(root->right);
        }
        cout<<")";

    }
    }
}
void display2(treenode*root,int level)
{
    if(root==NULL)
    {
        return;
    }
    display2(root->right,level+1);
 if(level!=1)
    {
        for(int i=0;i<6*(level-2);i++)
        {
            cout<<"*";
        }
            cout<<"_____";

    }
    cout<<root->data<<endl;;
    display2(root->left,level+1);
}
 bool iss(treenode * pRoot)//�ж��Ƿ��Ǿ��������
    {
    treenode  *p=pRoot;
        queue<treenode *>q;
        q.push(pRoot);
        bool flag=true;
        if(pRoot==NULL)
        {
            flag=false;
         }
        else
        {
        while(!q.empty())
        {
            p=q.front();
            q.pop();
            if(p->left!=NULL||p->right!=NULL)
            {
            if(p->left->data!=p->right->data)
            {

               flag=false;
            }
            }
             if(p->left!=NULL)
            {
             q.push(p->left);
            }
            if(p->right!=NULL)
            {
                q.push(p->right);
             }
        }

        }

       return flag;

    }

/*
    vector<vector<int> > Print(treenode * pRoot) {
        vector<vector<int> >v0;
        treenode * p=pRoot;
        queue<treenode *>q;
        if(pRoot==NULL)
        {
            return v0;
        }
        q.push(pRoot);
           int temp=0;
        while(!q.empty())
        {
              temp++;
            vector<int>v;


            int cnt=q.size();
            for(int i=0;i<cnt;i++)
            {

                p=q.front();
                q.pop();
                v.push_back(p->data);
                if(p->left!=NULL)
                {
                    q.push(p->left);
                 }
                if(p->right!=NULL)
                {
                    q.push(p->right);
                }
            }



            if(temp%2!=0)
            {
                int i,j;
                vector<int>v1;
                for(i=0,j=v.size()-1;i<v.size();i++,j--)
                {
                    v1[i]=v[j];
                }
                v=v1;
            }



             v0.push_back(v);
        }
        return v0;

    }
*/

int main()
{
    vector<vector<int> >v;
    treenode*root;
treenode*pt;
    root=initree();
    add(root);
 add(root);

 add(root);








}



