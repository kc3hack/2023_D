using UnityEngine;
using UnityEngine.UI;

public class ListViewController : MonoBehaviour
{
    public RectTransform content_;
    public GameObject item_prefab_;
    public string[] itemList_;

    private float itemHight_;

    // Use this for initialization
    void Start()
    {
        GameObject item = Instantiate(item_prefab_);
        RectTransform rect = item.GetComponent<RectTransform>();
        itemHight_ = rect.rect.height;
        Destroy(item);
    }

    private void UpdateListView()
    {
        // item���ɍ��킹��Content�̍�����ύX����.
        int setting_count = itemList_.Length;
        float newHeight = setting_count * itemHight_;
        content_.sizeDelta = new Vector2(content_.sizeDelta.x, newHeight); // ������ύX����.

        // Content�̎q�v�f��ListViewItem��ǉ����Ă���.
        foreach (string itemStr in itemList_)
        {
            GameObject item = Instantiate(item_prefab_); // ListViewItem �̃C���X�^���X�쐬.
            Text itemText = item.GetComponentInChildren<Text>(); // Text�R���|�[�l���g���擾.
            itemText.text = itemStr;

            RectTransform itemTransform = (RectTransform)item.transform;
            itemTransform.SetParent(content_, false); // �쐬����Item��Content�̎q�v�f�ɐݒ�.
        }
    }

    private void RemoveAllListViewItem()
    {
        foreach (Transform child in content_.transform)
        {
            Destroy(child.gameObject);
        }
    }
}
