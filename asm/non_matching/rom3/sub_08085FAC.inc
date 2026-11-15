	THUMB_FUNC_START sub_08085FAC
sub_08085FAC: @ 0x08085FAC
	push {r4-r6,lr}
	ldr r0, _0808602C  @ =gRam
	ldr r2, _08086030  @ =0x000009AC
	add r1, r0, r2
	ldrb r1, [r1]
	add r5, r0, #0
	cmp r1, #7
	beq _08085FBE
	b _08086134
_08085FBE:
	mov r3, #150
	lsl r3, r3, #4
	add r0, r5, r3
	ldrh r1, [r0]
	mov r0, #252
	lsl r0, r0, #1
	add r2, r0, #0
	and r2, r2, r1
	lsl r2, r2, #3
	ldr r6, _08086034  @ =0x00000968
	add r1, r5, r6
	strh r2, [r1]
	add r3, r3, #4
	add r1, r5, r3
	ldrh r1, [r1]
	and r0, r0, r1
	lsr r0, r0, #3
	orr r0, r0, r2
	add r4, r0, #0
	sub r4, r4, #130
	mov r3, #2
	ldr r6, _08086038  @ =gUnknown_0200CB1E
	add r0, r0, r6
_08085FEC:
	ldrb r1, [r0]
	cmp r1, #98
	bne _08085FF4
	b _080860F8
_08085FF4:
	mov r2, #240
	and r1, r1, r2
	cmp r1, #240
	beq _0808603C
	add r0, r0, #2
	add r4, r4, #2
	ldrb r1, [r0]
	cmp r1, #98
	beq _080860F8
	and r1, r1, r2
	cmp r1, #240
	beq _0808603C
	add r0, r0, #2
	add r4, r4, #2
	ldrb r1, [r0]
	cmp r1, #98
	beq _080860F8
	and r1, r1, r2
	cmp r1, #240
	beq _0808603C
	add r0, r0, #124
	add r4, r4, #124
	sub r3, r3, #1
	cmp r3, #0
	bge _08086028
	b _08086138
_08086028:
	b _08085FEC
	.byte 0x00
	.byte 0x00
_0808602C:
	.4byte gRam
_08086030:
	.4byte 0x000009AC
_08086034:
	.4byte 0x00000968
_08086038:
	.4byte gUnknown_0200CB1E
_0808603C:
	ldr r1, _080860C8  @ =gUnknown_0200CBA0
	add r0, r4, r1
	ldrb r0, [r0]
	mov r3, #15
	and r3, r3, r0
	lsl r0, r3, #1
	ldr r2, _080860CC  @ =0x000018B0
	add r1, r5, r2
	add r0, r0, r1
	ldrh r0, [r0]
	mov r1, #126
	and r1, r1, r0
	cmp r1, #40
	beq _08086060
	cmp r1, #42
	beq _08086060
	cmp r1, #46
	bne _08086138
_08086060:
	mov r6, #192
	lsl r6, r6, #4
	add r0, r5, r6
	strh r4, [r0]
	ldr r1, _080860D0  @ =0x0000097C
	add r0, r5, r1
	mov r2, #0
	ldrsh r4, [r0, r2]
	ldr r6, _080860D4  @ =0x00001849
	add r2, r5, r6
	add r2, r4, r2
	lsl r3, r3, #1
	ldr r1, _080860D8  @ =0x000018D0
	add r0, r5, r1
	add r0, r3, r0
	ldrb r1, [r0]
	mov r0, #126
	and r0, r0, r1
	ldr r6, _080860DC  @ =0x00000BA8
	add r1, r5, r6
	lsl r0, r0, #2
	ldrb r1, [r1]
	add r0, r0, r1
	strb r0, [r2]
	ldr r1, _080860E0  @ =0x0000184D
	add r0, r5, r1
	add r0, r4, r0
	ldr r2, _080860E4  @ =0x00000BAA
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r6, _080860E8  @ =0x00001851
	add r1, r5, r6
	add r1, r4, r1
	ldr r2, _080860EC  @ =0x000018F0
	add r0, r5, r2
	add r3, r3, r0
	ldrb r2, [r3]
	mov r0, #3
	and r0, r0, r2
	strb r0, [r1]
	ldr r3, _080860F0  @ =0x00000504
	add r1, r5, r3
	mov r0, #123
	bl sub_0812A324
	ldr r6, _080860F4  @ =0x000009AD
	add r1, r5, r6
	mov r0, #10
	strb r0, [r1]
	b _08086138
	.byte 0x00
	.byte 0x00
_080860C8:
	.4byte gUnknown_0200CBA0
_080860CC:
	.4byte 0x000018B0
_080860D0:
	.4byte 0x0000097C
_080860D4:
	.4byte 0x00001849
_080860D8:
	.4byte 0x000018D0
_080860DC:
	.4byte 0x00000BA8
_080860E0:
	.4byte 0x0000184D
_080860E4:
	.4byte 0x00000BAA
_080860E8:
	.4byte 0x00001851
_080860EC:
	.4byte 0x000018F0
_080860F0:
	.4byte 0x00000504
_080860F4:
	.4byte 0x000009AD
_080860F8:
	add r2, r5, #0
	ldr r1, _08086128  @ =0x000009DA
	add r0, r2, r1
	ldrh r0, [r0]
	cmp r0, #101
	bne _08086114
	ldr r3, _0808612C  @ =0x00000AA8
	add r2, r2, r3
	ldrh r1, [r2]
	mov r6, #128
	lsl r6, r6, #5
	add r0, r6, #0
	orr r0, r0, r1
	strh r0, [r2]
_08086114:
	mov r0, #0
	bl sub_080815E4
	ldr r0, _08086130  @ =0x00000504
	add r1, r5, r0
	mov r0, #123
	bl sub_0812A324
	b _08086138
	.byte 0x00
	.byte 0x00
_08086128:
	.4byte 0x000009DA
_0808612C:
	.4byte 0x00000AA8
_08086130:
	.4byte 0x00000504
_08086134:
	bl sub_0808D254
_08086138:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08085FAC

	.byte 0x00
	.byte 0x00
