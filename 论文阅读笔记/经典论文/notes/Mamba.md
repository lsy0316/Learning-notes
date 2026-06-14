# Mamba: Linear-Time Sequence Modeling with Selective State Spaces

**作者**: Albert Gu, Tri Dao

**年份**: 2023

**机构**: Carnegie Mellon University / Princeton University

---

## 📌 总结概括

提出选择性状态空间模型（Selective SSM），实现线性时间复杂度的序列建模，在长序列任务上超越 Transformer，推理速度提升 5 倍。

---

## 💡 创新点

1. **选择性机制**: Δ, B, C 等参数依赖于输入，动态调整
2. **线性复杂度**: O(n) 时间复杂度，适合长序列
3. **硬件感知算法**: 优化 GPU 内存访问，提升效率

---

## 🎯 收获与思考

- **收获**: 
  - 理解了状态空间模型的基本原理
  - 认识到选择性机制的重要性
  - 了解了硬件优化对算法效率的影响

- **思考**: 
  - Mamba 为长序列建模提供了新思路
  - 有望成为 Transformer 的高效替代方案
  - 但训练稳定性和理论理解仍需完善
