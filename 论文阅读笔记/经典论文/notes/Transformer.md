# Transformer: Attention Is All You Need

**作者**: Ashish Vaswani, Noam Shazeer, Niki Parmar, Jakob Uszkoreit, et al.

**年份**: 2017

**机构**: Google Brain / Google Research

---

## 📌 总结概括

提出完全基于注意力机制的 Transformer 架构，抛弃 RNN 和 CNN，实现并行计算，在机器翻译任务上取得 SOTA 性能，彻底改变了序列建模的范式，开启了大模型时代。

---

## 💡 创新点

1. **自注意力机制**: Self-Attention，捕捉长距离依赖
2. **多头注意力**: Multi-Head Attention，多表示子空间学习
3. **位置编码**: Positional Encoding，为序列添加位置信息
4. **并行计算**: 抛弃 RNN，实现高效并行训练

---

## 🎯 收获与思考

- **收获**: 
  - 理解了自注意力的计算机制（Q, K, V）
  - 认识到位置编码的重要性
  - 体会到架构简洁性与性能的关系

- **思考**: 
  - 这篇论文是深度学习史上最重要的里程碑之一
  - 证明了"注意力机制"的强大能力
  - 催生了 BERT、GPT、ViT 等革命性工作
  - 影响深远，开启了大模型时代
