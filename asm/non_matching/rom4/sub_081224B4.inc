	THUMB_FUNC_START sub_081224B4
sub_081224B4: @ 0x081224B4
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _081225F4  @ =gRam
	ldr r1, _081225F8  @ =0x00000A92
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #0
	strb r1, [r0]
	ldr r2, _081225FC  @ =0x00000996
	add r0, r4, r2
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _081224DA
	add r0, r5, #0
	bl sub_08122390
_081224DA:
	ldr r7, _08122600  @ =0x00000DED
	add r0, r4, r7
	add r1, r5, r0
	ldrb r0, [r1]
	add r0, r0, #255
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #239
	bhi _081224EE
	mov r0, #240
_081224EE:
	strb r0, [r1]
	add r0, r5, #0
	bl sub_080BF774
	ldr r3, _081225F4  @ =gRam
	ldr r1, _08122604  @ =0x00000DC5
	add r0, r3, r1
	add r6, r5, r0
	ldrb r0, [r6]
	mov r7, #150
	lsl r7, r7, #4
	add r2, r3, r7
	strb r0, [r2]
	add r1, r1, #20
	add r0, r3, r1
	add r4, r5, r0
	ldrb r0, [r4]
	ldr r1, _08122608  @ =0x00000961
	add r7, r3, r1
	strb r0, [r7]
	mov r0, #163
	lsl r0, r0, #4
	add r1, r3, r0
	ldrh r0, [r2]
	ldrh r1, [r1]
	sub r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #31
	bhi _081225D0
	add r0, r1, #0
	add r0, r0, #32
	strh r0, [r2]
	ldrb r0, [r2]
	strb r0, [r6]
	ldrb r0, [r7]
	strb r0, [r4]
	ldr r1, _0812260C  @ =0x000009AD
	add r6, r3, r1
	ldrb r4, [r6]
	cmp r4, #0
	bne _081225D0
	ldr r2, _08122610  @ =gCrystalCount
	ldr r1, _08122614  @ =gUnknown_0814CADC
	ldr r7, _08122618  @ =0x00000AB2
	add r0, r3, r7
	ldrh r0, [r0]
	lsr r0, r0, #1
	add r0, r0, r1
	ldrb r1, [r2]
	ldrb r0, [r0]
	orr r1, r1, r0
	strb r1, [r2]
	mov r0, #25
	strb r0, [r6]
	ldr r1, _0812261C  @ =0x000009E8
	add r0, r3, r1
	strh r4, [r0]
	mov r1, #0
	add r4, r3, #0
	ldr r3, _08122620  @ =gUnknown_02000800
	mov r2, #0
_0812256A:
	lsl r0, r1, #24
	asr r1, r0, #24
	add r0, r1, #0
	add r0, r0, #64
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r3
	strh r2, [r0]
	add r0, r1, #0
	add r0, r0, #96
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r3
	strh r2, [r0]
	add r0, r1, #0
	add r0, r0, #128
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r3
	strh r2, [r0]
	add r0, r1, #0
	add r0, r0, #160
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r3
	strh r2, [r0]
	add r0, r1, #0
	add r0, r0, #192
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r3
	strh r2, [r0]
	add r0, r1, #0
	add r0, r0, #224
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r3
	strh r2, [r0]
	add r0, r1, #2
	lsl r0, r0, #24
	lsr r1, r0, #24
	asr r0, r0, #24
	cmp r0, #32
	bne _0812256A
	ldr r2, _08122624  @ =0x00000CF8
	add r0, r4, r2
	mov r1, #0
	strh r1, [r0]
	ldr r7, _08122628  @ =0x00000CFA
	add r0, r4, r7
	strh r1, [r0]
_081225D0:
	add r0, r5, #0
	bl sub_080C17A8
	ldr r0, _081225F4  @ =gRam
	mov r2, #150
	lsl r2, r2, #4
	add r1, r0, r2
	ldrh r1, [r1]
	ldr r7, _0812262C  @ =0x0000096C
	add r0, r0, r7
	strh r1, [r0]
	add r0, r5, #0
	bl sub_081189A4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081225F4:
	.4byte gRam
_081225F8:
	.4byte 0x00000A92
_081225FC:
	.4byte 0x00000996
_08122600:
	.4byte 0x00000DED
_08122604:
	.4byte 0x00000DC5
_08122608:
	.4byte 0x00000961
_0812260C:
	.4byte 0x000009AD
_08122610:
	.4byte gCrystalCount
_08122614:
	.4byte gUnknown_0814CADC
_08122618:
	.4byte 0x00000AB2
_0812261C:
	.4byte 0x000009E8
_08122620:
	.4byte gUnknown_02000800
_08122624:
	.4byte 0x00000CF8
_08122628:
	.4byte 0x00000CFA
_0812262C:
	.4byte 0x0000096C
	THUMB_FUNC_END sub_081224B4

