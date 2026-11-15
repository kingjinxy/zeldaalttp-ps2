	THUMB_FUNC_START sub_0806C814
sub_0806C814: @ 0x0806C814
	push {lr}
	ldr r2, _0806C85C  @ =gRam
	ldr r3, _0806C860  @ =0x00000ABE
	add r1, r2, r3
	strh r0, [r1]
	ldr r1, _0806C864  @ =0x00001727
	add r0, r2, r1
	ldrb r3, [r0]
	mov r0, #3
	and r0, r0, r3
	cmp r0, #0
	beq _0806C870
	mov r1, #1
	and r1, r1, r3
	neg r0, r1
	orr r0, r0, r1
	asr r3, r0, #31
	mov r0, #2
	and r3, r3, r0
	ldr r1, _0806C868  @ =0x000009E3
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0806C846
	add r3, r3, #1
_0806C846:
	ldr r1, _0806C86C  @ =gUnknown_0814CB0A
	lsl r0, r3, #1
	add r0, r0, r1
	ldrh r0, [r0]
	mov r3, #185
	lsl r3, r3, #4
	add r1, r2, r3
	strh r0, [r1]
	add r0, r0, #2
	add r3, r3, #2
	b _0806C8BE
_0806C85C:
	.4byte gRam
_0806C860:
	.4byte 0x00000ABE
_0806C864:
	.4byte 0x00001727
_0806C868:
	.4byte 0x000009E3
_0806C86C:
	.4byte gUnknown_0814CB0A
_0806C870:
	mov r0, #4
	and r0, r0, r3
	mov r3, #2
	cmp r0, #0
	beq _0806C87C
	mov r3, #0
_0806C87C:
	ldr r1, _0806C89C  @ =0x000009E4
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0806C888
	add r3, r3, #1
_0806C888:
	mov r0, #2
	and r0, r0, r3
	cmp r0, #0
	beq _0806C8A4
	ldr r1, _0806C8A0  @ =gUnknown_0814CB02
	lsl r0, r3, #1
	add r0, r0, r1
	ldrh r0, [r0]
	add r0, r0, #32
	b _0806C8AE
_0806C89C:
	.4byte 0x000009E4
_0806C8A0:
	.4byte gUnknown_0814CB02
_0806C8A4:
	ldr r1, _0806C8C8  @ =gUnknown_0814CB02
	lsl r0, r3, #1
	add r0, r0, r1
	ldrh r0, [r0]
	sub r0, r0, #32
_0806C8AE:
	ldr r3, _0806C8CC  @ =0x00000B8C
	add r1, r2, r3
	strh r0, [r1]
	ldr r1, _0806C8CC  @ =0x00000B8C
	add r0, r2, r1
	ldrh r0, [r0]
	add r0, r0, #2
	ldr r3, _0806C8D0  @ =0x00000B8E
_0806C8BE:
	add r1, r2, r3
	strh r0, [r1]
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806C8C8:
	.4byte gUnknown_0814CB02
_0806C8CC:
	.4byte 0x00000B8C
_0806C8D0:
	.4byte 0x00000B8E
	THUMB_FUNC_END sub_0806C814

