	THUMB_FUNC_START sub_0804EB3C
sub_0804EB3C: @ 0x0804EB3C
	push {r4,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #65
	ldrb r0, [r1]
	mov r1, #128
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _0804EB5C
	b _0804ED0C
_0804EB5C:
	ldr r0, [r7]
	ldr r1, [r0, #76]
	ldrb r0, [r1, #8]
	cmp r0, #1
	beq _0804EB68
	b _0804ED0C
_0804EB68:
	ldr r0, _0804ECF8  @ =gUnknown_03006A30
	ldr r1, [r7]
	ldr r2, [r1, #76]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrh r1, [r0, #54]
	cmp r1, #0
	beq _0804EB82
	b _0804ED0C
_0804EB82:
	ldr r0, _0804ECF8  @ =gUnknown_03006A30
	ldr r1, [r7]
	ldr r2, [r1, #76]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #5]
	cmp r1, #0
	beq _0804EB9C
	b _0804ED0C
_0804EB9C:
	ldr r0, _0804ECF8  @ =gUnknown_03006A30
	ldr r1, [r7]
	ldr r2, [r1, #76]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r2, r0, r1
	add r0, r2, #0
	add r1, r2, #0
	add r1, r1, #38
	ldrb r0, [r1]
	cmp r0, #0
	beq _0804EBBC
	b _0804ED0C
_0804EBBC:
	mov r0, #0
	mov r1, #0
	bl set_palette_color
	ldr r0, _0804ECF8  @ =gUnknown_03006A30
	ldr r1, [r7]
	ldr r2, [r1, #76]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldr r1, _0804ECF8  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldr r3, [r2, #76]
	ldrb r2, [r3, #10]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, r2
	ldrh r2, [r1, #54]
	mov r3, #4
	add r1, r2, #0
	orr r1, r1, r3
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #76]
	str r2, [r0, #88]
	ldr r0, [r7]
	ldr r1, [r0, #76]
	ldr r0, [r7]
	str r0, [r1, #88]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #4
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #255
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r0, [r7]
	mov r1, #0
	str r1, [r0, #56]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #5
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #24]
	ldr r0, [r7]
	mov r1, #6
	bl sub_08003870
	ldr r0, _0804ECFC  @ =gLCDRegisterBuffer
	ldr r1, [r7]
	ldr r2, [r1, #88]
	ldrb r0, [r0]
	ldrb r1, [r2, #10]
	cmp r0, r1
	bne _0804ECEC
	ldr r0, [r7]
	ldr r1, _0804ED00  @ =gUnknown_030004A0
	add r2, r0, #0
	add r0, r0, #104
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, _0804ED00  @ =gUnknown_030004A0
	ldr r1, _0804ED00  @ =gUnknown_030004A0
	ldrh r2, [r1]
	ldr r3, _0804ED04  @ =0x0000F1FF
	add r1, r2, #0
	and r1, r1, r3
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, _0804ED08  @ =gUnknown_03000948
	ldrb r1, [r0, #4]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #4]
	ldr r0, [r7]
	ldrb r1, [r0, #31]
	mov r2, #1
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #31]
	ldr r0, [r7]
	ldr r2, [r0, #88]
	add r1, r2, #0
	add r0, r2, #0
	add r0, r0, #46
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #46
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	mov r0, #64
	bl sub_0800D200
_0804ECEC:
	ldr r0, [r7]
	ldr r1, [r0, #88]
	add r0, r1, #0
	bl 0x080074C0
	b _0804ED3A
_0804ECF8:
	.4byte gUnknown_03006A30
_0804ECFC:
	.4byte gLCDRegisterBuffer
_0804ED00:
	.4byte gUnknown_030004A0
_0804ED04:
	.4byte 0x0000F1FF
_0804ED08:
	.4byte gUnknown_03000948
_0804ED0C:
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #46
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #4
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r1, [r7]
	ldr r0, [r1, #84]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
_0804ED3A:
	add sp, sp, #4
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0804EB3C

	.byte 0x00
	.byte 0x00
