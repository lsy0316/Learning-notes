# 📖 经典论文

本文件夹包含深度学习领域的经典论文，这些论文奠定了现代深度学习的基础。

## 📂 文件夹结构

```
经典论文/
├── notes/                     # 论文详细笔记
├── Gradient-based_learning_applied_to_document_recognition.pdf
├── He_Deep_Residual_Learning_CVPR_2016_paper.pdf
├── Mamba Linear-Time Sequence Modeling with Selective State Spaces.pdf
├── NIPS-2012-imagenet-classification-with-deep-convolutional-neural-networks-Paper.pdf
├── NIPS-2017-attention-is-all-you-need-Paper.pdf
├── VMamba：Visualstatespacemodule_0_1779024235662.pdf
└── README.md
```

---

## 📄 论文列表

### 1. LeNet: Gradient-based Learning Applied to Document Recognition (1998)

**文件**: `Gradient-based_learning_applied_to_document_recognition.pdf`

**基本信息**:
- **作者**: Yann LeCun, Léon Bottou, Yoshua Bengio, Patrick Haffner
- **年份**: 1998
- **发表**: Proceedings of the IEEE

**核心贡献**:
- 提出了卷积神经网络（CNN）的基本架构
- 引入了反向传播算法训练卷积网络
- 在手写数字识别任务上取得突破性成果
- 奠定了现代深度学习的基础

**网络架构**:
- 输入层 → 卷积层 → 池化层 → 卷积层 → 池化层 → 全连接层 → 输出层
- 参数量：约 60K
- 应用：手写数字识别（MNIST）

**历史意义**:
- 开创性的工作，证明了神经网络在模式识别任务上的有效性
- 为后来的 AlexNet、VGG、ResNet 等网络奠定了基础

**详细笔记**: [LeNet.md](notes/LeNet.md)

---

### 2. AlexNet: ImageNet Classification with Deep Convolutional Neural Networks (NIPS 2012)

**文件**: `NIPS-2012-imagenet-classification-with-deep-convolutional-neural-networks-Paper.pdf`

**基本信息**:
- **作者**: Alex Krizhevsky, Ilya Sutskever, Geoffrey E. Hinton
- **年份**: 2012
- **会议**: Neural Information Processing Systems (NIPS)

**核心贡献**:
- 深度学习复兴的里程碑
- ImageNet 2012 竞赛冠军，Top-5 错误率 15.3%（远超第二名 26.2%）
- 首次在大规模数据集上成功训练深层网络
- 引入 ReLU 激活函数、Dropout、数据增强等技术

**网络架构**:
- 5 个卷积层 + 3 个全连接层
- 参数量：约 60M
- 使用双 GPU 并行训练
- 引入局部响应归一化（LRN）

**关键技术**:
- ReLU 激活函数：解决梯度消失问题，加速训练
- Dropout：防止过拟合
- 数据增强：随机裁剪、水平翻转
- GPU 并行计算：加速训练过程

**历史意义**:
- 标志着深度学习时代的开启
- 证明了深层网络在大规模数据上的强大能力
- 推动了计算机视觉领域的革命性发展

**详细笔记**: [AlexNet.md](notes/AlexNet.md)

---

### 3. ResNet: Deep Residual Learning for Image Recognition (CVPR 2016)

**文件**: `He_Deep_Residual_Learning_CVPR_2016_paper.pdf`

**基本信息**:
- **作者**: Kaiming He, Xiangyu Zhang, Shaoqing Ren, Jian Sun
- **年份**: 2016
- **会议**: IEEE Conference on Computer Vision and Pattern Recognition (CVPR)
- **荣誉**: CVPR 2016 最佳论文

**核心贡献**:
- 提出残差学习（Residual Learning）框架
- 解决了深层网络训练中的退化问题
- 使网络深度可以突破 100 层甚至 1000 层
- ImageNet 分类冠军，Top-5 错误率 3.57%

**核心思想**:
- 残差块：`H(x) = F(x) + x`
- 恒等映射：让网络学习残差而非完整映射
- 跳跃连接（Skip Connection）：实现恒等映射

**网络架构**:
- ResNet-18, ResNet-34, ResNet-50, ResNet-101, ResNet-152
- 瓶颈结构（Bottleneck）：1×1, 3×3, 1×1 卷积
- 批归一化（Batch Normalization）

**关键技术**:
- 残差学习：解决梯度消失和退化问题
- 跳跃连接：允许梯度直接反向传播
- 批归一化：加速训练，提升性能

**历史意义**:
- 成为最常用的骨干网络之一
- 残差思想被广泛应用于各种网络架构
- 推动了深度网络向更深层次发展

**详细笔记**: [ResNet.md](notes/ResNet.md)

---

### 4. Transformer: Attention Is All You Need (NIPS 2017)

**文件**: `NIPS-2017-attention-is-all-you-need-Paper.pdf`

**基本信息**:
- **作者**: Ashish Vaswani, Noam Shazeer, Niki Parmar, Jakob Uszkoreit, et al.
- **年份**: 2017
- **会议**: Neural Information Processing Systems (NIPS)

**核心贡献**:
- 提出完全基于注意力机制的 Transformer 架构
- 抛弃了传统的 RNN 和 CNN 结构
- 引入自注意力机制（Self-Attention）
- 在机器翻译任务上取得 SOTA 性能

**核心组件**:
- **自注意力机制**: Query, Key, Value
- **多头注意力**: Multi-Head Attention
- **位置编码**: Positional Encoding
- **前馈网络**: Feed Forward Network
- **层归一化**: Layer Normalization

**网络架构**:
- Encoder-Decoder 结构
- Encoder: 6 层，每层包含多头注意力和前馈网络
- Decoder: 6 层，额外包含掩码多头注意力

**关键技术**:
- 自注意力：捕捉序列内部的依赖关系
- 多头注意力：从不同表示子空间学习信息
- 位置编码：保留序列的位置信息
- 残差连接 + 层归一化

**历史意义**:
- 彻底改变了 NLP 领域
- 成为 BERT、GPT 等预训练模型的基础
- 推动了 Vision Transformer (ViT) 等视觉模型的发展
- 开启了大模型时代

**详细笔记**: [Transformer.md](notes/Transformer.md)

---

### 5. Mamba: Linear-Time Sequence Modeling with Selective State Spaces (2023)

**文件**: `Mamba Linear-Time Sequence Modeling with Selective State Spaces.pdf`

**基本信息**:
- **作者**: Albert Gu, Tri Dao
- **年份**: 2023
- **机构**: Carnegie Mellon University, Princeton University

**核心贡献**:
- 提出选择性状态空间模型（Selective State Space Model）
- 实现线性时间复杂度的序列建模
- 在长序列建模任务上超越 Transformer
- 推理速度比 Transformer 快 5 倍

**核心思想**:
- 状态空间模型（SSM）：将序列建模为连续时间的状态空间
- 选择性机制：根据输入动态调整状态转移
- 硬件感知算法：优化 GPU 内存访问

**关键技术**:
- 选择性状态空间：让模型根据内容过滤信息
- 线性递归：避免 Transformer 的二次复杂度
- 并行扫描算法：高效实现序列建模

**优势**:
- 线性时间复杂度 O(n)
- 长序列建模能力强
- 推理速度快
- 内存占用低

**历史意义**:
- 为序列建模提供了新的范式
- 有望成为 Transformer 的高效替代方案
- 推动了 Vision Mamba 等视觉模型的发展

**详细笔记**: [Mamba.md](notes/Mamba.md)

---

### 6. VMamba: Visual State Space Model (2024)

**文件**: `VMamba：Visualstatespacemodule_0_1779024235662.pdf`

**基本信息**:
- **年份**: 2024
- **研究方向**: Vision Mamba

**核心贡献**:
- 将 Mamba 引入视觉任务
- 提出 2D 选择性扫描机制
- 开创 Vision Mamba 研究领域
- 在视觉任务上取得优异性能

**核心思想**:
- 将 2D 图像展平为 1D 序列
- 设计 2D 选择性扫描（SS2D）
- 跨扫描机制：四个方向扫描

**关键技术**:
- 2D 选择性扫描：适应 2D 视觉数据
- 跨扫描模块：捕捉全局空间信息
- 层次化架构：类似 CNN 的金字塔结构

**优势**:
- 线性复杂度：适合高分辨率图像
- 全局感受野：捕捉长距离依赖
- 高效推理：速度快于 ViT

**历史意义**:
- 开创了 Vision Mamba 研究方向
- 为视觉模型提供了新的架构选择
- 推动了状态空间模型在视觉领域的应用

**详细笔记**: [VMamba.md](notes/VMamba.md)

---

## 📊 论文时间线

```
1998  LeNet        - 卷积神经网络的开创性工作
  ↓
2012  AlexNet      - 深度学习复兴的里程碑
  ↓
2016  ResNet       - 残差学习突破深度限制
  ↓
2017  Transformer  - 注意力机制改变世界
  ↓
2023  Mamba        - 线性时间序列建模
  ↓
2024  VMamba       - Vision Mamba 开创新领域
```

---

## 📝 阅读建议

### 初学者路线
1. LeNet → 2. AlexNet → 3. ResNet → 4. Transformer

### 进阶路线
1. ResNet（深入理解残差学习）
2. Transformer（掌握注意力机制）
3. Mamba（了解最新进展）
4. VMamba（探索视觉应用）

---

## 📖 相关资源

- [返回论文阅读笔记](../README.md)
- [前沿论文列表](../README.md#前沿论文列表)
- [组会汇报课件](../组会汇报课件/README.md)

---

⭐ 持续更新中...
