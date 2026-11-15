	THUMB_FUNC_START sub_08089A38
sub_08089A38: @ 0x08089A38
	push {r4-r7,lr}
	ldr r4, _08089AD0  @ =gRam
	ldr r0, _08089AD4  @ =0x00000ACA
	add r5, r4, r0
	ldrh r0, [r5]
	mov r1, #3
	and r1, r1, r0
	ldr r2, _08089AD8  @ =0x00000958
	add r6, r4, r2
	ldrh r2, [r6]
	mov r3, #203
	lsl r3, r3, #3
	add r0, r3, #0
	sub r0, r0, r2
	mov r7, #150
	lsl r7, r7, #4
	add r3, r4, r7
	strh r0, [r3]
	ldr r0, _08089ADC  @ =0x00000BF8
	add r2, r4, r0
	ldr r0, _08089AE0  @ =gUnknown_08153604
	lsl r1, r1, #1
	add r0, r1, r0
	ldrh r0, [r0]
	ldrh r7, [r2]
	add r0, r0, r7
	strh r0, [r2]
	ldr r0, _08089AE4  @ =0x00000BFC
	add r2, r4, r0
	ldr r0, _08089AE8  @ =gUnknown_081535FC
	add r1, r1, r0
	ldrh r0, [r1]
	ldrh r1, [r2]
	add r0, r0, r1
	strh r0, [r2]
	ldrh r1, [r2]
	mov r7, #0
	ldrsh r0, [r3, r7]
	cmp r1, r0
	blt _08089A9A
	ldr r0, _08089AEC  @ =0x00000ABA
	add r1, r4, r0
	mov r0, #7
	strh r0, [r1]
	ldr r3, _08089AF0  @ =0x000009E8
	add r1, r4, r3
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
_08089A9A:
	ldrh r0, [r5]
	add r0, r0, #1
	strh r0, [r5]
	ldr r7, _08089AF4  @ =0x00000BF6
	add r0, r4, r7
	ldrh r1, [r0]
	mov r3, #209
	lsl r3, r3, #3
	add r0, r3, #0
	sub r0, r0, r1
	ldrh r1, [r6]
	sub r0, r0, r1
	sub r7, r7, #38
	add r1, r4, r7
	strh r0, [r1]
	ldrh r1, [r2]
	add r0, r0, r1
	ldr r2, _08089AF8  @ =0x00000974
	add r1, r4, r2
	strh r0, [r1]
	mov r3, #0
	ldrsh r0, [r1, r3]
	bl sub_0808AD8C
	pop {r4-r7}
	pop {r0}
	bx r0
_08089AD0:
	.4byte gRam
_08089AD4:
	.4byte 0x00000ACA
_08089AD8:
	.4byte 0x00000958
_08089ADC:
	.4byte 0x00000BF8
_08089AE0:
	.4byte gUnknown_08153604
_08089AE4:
	.4byte 0x00000BFC
_08089AE8:
	.4byte gUnknown_081535FC
_08089AEC:
	.4byte 0x00000ABA
_08089AF0:
	.4byte 0x000009E8
_08089AF4:
	.4byte 0x00000BF6
_08089AF8:
	.4byte 0x00000974
	THUMB_FUNC_END sub_08089A38

