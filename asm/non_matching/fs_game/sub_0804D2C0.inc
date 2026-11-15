	THUMB_FUNC_START sub_0804D2C0
sub_0804D2C0: @ 0x0804D2C0
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	mov r2, #1
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0804D3B0
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #30
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #8
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #24]
	ldr r1, _0804D34C  @ =0x80010000
	add r0, r1, #0
	bl play_sound
	mov r0, #46
	bl play_sound
	ldr r0, _0804D350  @ =gUnknown_03006C80
	ldr r1, [r0, #28]
	ldr r0, _0804D354  @ =0x00000E0F
	cmp r1, r0
	bhi _0804D358
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #124
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #3
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	b _0804D3A6
	.byte 0x00
	.byte 0x00
_0804D34C:
	.4byte 0x80010000
_0804D350:
	.4byte gUnknown_03006C80
_0804D354:
	.4byte 0x00000E0F
_0804D358:
	ldr r0, _0804D37C  @ =gUnknown_03006C80
	ldr r1, [r0, #28]
	ldr r0, _0804D380  @ =0x00002A2F
	cmp r1, r0
	bhi _0804D384
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #124
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	b _0804D3A6
_0804D37C:
	.4byte gUnknown_03006C80
_0804D380:
	.4byte 0x00002A2F
_0804D384:
	ldr r0, _0804D3A8  @ =gUnknown_03006C80
	ldr r1, [r0, #28]
	ldr r0, _0804D3AC  @ =0x0000464F
	cmp r1, r0
	bhi _0804D3A6
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #124
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
_0804D3A6:
	b _0804D43A
_0804D3A8:
	.4byte gUnknown_03006C80
_0804D3AC:
	.4byte 0x0000464F
_0804D3B0:
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #255
	beq _0804D3FE
	ldr r4, [r7]
	ldr r0, [r7]
	ldr r1, _0804D444  @ =gUnknown_03006C80
	ldrb r0, [r0, #23]
	ldrb r1, [r1]
	bl __umodsi3
	ldrb r1, [r4, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	add r1, r2, #0
	orr r1, r1, r0
	add r0, r1, #0
	strb r0, [r4, #23]
_0804D3FE:
	ldr r0, [r7]
	mov r1, #0
	bl sub_08003870
	mov r0, #5
	bl sub_08003DFC
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	cmp r1, #18
	bne _0804D43A
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #28]
	mov r0, #32
	mov r1, #0
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _0804D43A
	ldr r1, [r7, #4]
	ldr r0, [r7]
	bl sub_0803D3D0
_0804D43A:
	add sp, sp, #8
	pop {r4,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0804D444:
	.4byte gUnknown_03006C80
	THUMB_FUNC_END sub_0804D2C0

