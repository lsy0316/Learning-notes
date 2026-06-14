# ResNet: Deep Residual Learning for Image Recognition

**作者**: Kaiming He, Xiangyu Zhang, Shaoqing Ren, Jian Sun

**年份**: 2016

**机构**: Microsoft Research Asia

---

## 📌 总结概括

提出残差学习框架，通过跳跃连接（skip connection）解决深层网络训练中的退化问题，使网络深度可以突破 100 层甚至 1000 层，成为计算机视觉最常用的骨干网络。

---

## 💡 创新点

1. **残差学习**: H(x) = F(x) + x，学习残差而非完整映射
2. **跳跃连接**: 实现恒等映射，让梯度直接传播
3. **瓶颈结构**: 1×1, 3×3, 1×1 卷积堆叠，降低计算量

---

## 🎯 收获与思考

- **收获**: 
  - 理解了残差学习的核心思想
  - 认识到跳跃连接对梯度传播的重要性
  - 学会了瓶颈结构的设计方法

- **思考**: 
  - 残差学习简单但有效，解决了深层网络训练难题
  - 残差思想被广泛应用于后续工作（DenseNet、Transformer等）
  - 成为CV领域最重要的backbone之一
