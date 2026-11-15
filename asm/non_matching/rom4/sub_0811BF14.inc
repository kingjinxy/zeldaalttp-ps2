	THUMB_FUNC_START sub_0811BF14
sub_0811BF14: @ 0x0811BF14
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r3, _0811BF98  @ =gRam
	ldr r1, _0811BF9C  @ =0x00001832
	add r0, r3, r1
	add r1, r6, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	blt _0811BF3A
	b _0811C0BA
_0811BF3A:
	mov r0, #0
	strb r0, [r1]
	ldr r2, _0811BFA0  @ =0x000009AD
	add r0, r3, r2
	ldrb r4, [r0]
	cmp r4, #0
	bne _0811BFC0
	ldr r5, _0811BFA4  @ =0x00001844
	add r0, r3, r5
	add r1, r6, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0811BF66
	strb r4, [r1]
	ldr r1, _0811BFA8  @ =0x00000E29
	add r0, r3, r1
	add r0, r6, r0
	mov r1, #1
	strb r1, [r0]
_0811BF66:
	ldr r2, _0811BFA8  @ =0x00000E29
	add r0, r3, r2
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811BFC0
	ldr r5, _0811BFAC  @ =0x00000DED
	add r2, r3, r5
	add r2, r6, r2
	ldrb r1, [r2]
	add r1, r1, #252
	strb r1, [r2]
	add r5, r5, #10
	add r0, r3, r5
	add r0, r6, r0
	strb r1, [r0]
	ldrb r0, [r2]
	cmp r0, #231
	bhi _0811BFB4
	ldr r1, _0811BFB0  @ =0x00000E15
	add r0, r3, r1
	add r0, r6, r0
	strb r4, [r0]
	b _0811C0BA
	.byte 0x00
	.byte 0x00
_0811BF98:
	.4byte gRam
_0811BF9C:
	.4byte 0x00001832
_0811BFA0:
	.4byte 0x000009AD
_0811BFA4:
	.4byte 0x00001844
_0811BFA8:
	.4byte 0x00000E29
_0811BFAC:
	.4byte 0x00000DED
_0811BFB0:
	.4byte 0x00000E15
_0811BFB4:
	add r0, r6, #0
	bl sub_080BF774
	add r0, r6, #0
	bl sub_080C1768
_0811BFC0:
	add r0, r6, #0
	bl sub_080C177C
	ldr r5, _0811C0CC  @ =gRam
	ldr r2, _0811C0D0  @ =0x00000DCF
	add r0, r5, r2
	add r0, r6, r0
	ldrb r0, [r0]
	ldr r1, _0811C0D4  @ =0x0000096C
	add r3, r5, r1
	strb r0, [r3]
	add r2, r2, #20
	add r0, r5, r2
	add r0, r6, r0
	ldrb r1, [r0]
	ldr r2, _0811C0D8  @ =0x0000096D
	add r0, r5, r2
	strb r1, [r0]
	ldr r1, _0811C0DC  @ =0x0000181D
	add r0, r5, r1
	add r0, r6, r0
	ldrb r0, [r0]
	ldr r2, _0811C0E0  @ =0x00001732
	add r2, r2, r5
	mov r9, r2
	strb r0, [r2]
	add r1, r1, #5
	add r0, r5, r1
	add r0, r6, r0
	ldrb r0, [r0]
	ldr r2, _0811C0E4  @ =0x00001733
	add r4, r5, r2
	strb r0, [r4]
	mov r0, r9
	ldrb r2, [r0]
	ldrb r0, [r4]
	lsl r0, r0, #8
	add r2, r2, r0
	ldrh r0, [r3]
	sub r2, r2, r0
	mov r1, #151
	lsl r1, r1, #4
	add r3, r5, r1
	mov r0, r9
	ldrb r1, [r0]
	ldrb r0, [r4]
	lsl r0, r0, #8
	add r1, r1, r0
	add r2, r2, r1
	ldr r1, _0811C0E8  @ =0x00000952
	add r0, r5, r1
	ldrh r0, [r0]
	add r0, r0, #8
	sub r2, r2, r0
	strh r2, [r3]
	ldr r2, _0811C0EC  @ =0x00000E1F
	add r0, r5, r2
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #2
	bne _0811C040
	mov r0, #8
	bl sub_080C1984
_0811C040:
	mov r0, #1
	mov r3, r9
	strb r0, [r3]
	mov r0, #0
	strb r0, [r4]
	ldr r0, _0811C0F0  @ =gUnknown_03003E74
	mov r8, r0
	add r7, r5, #0
	mov r10, r4
_0811C052:
	mov r1, r8
	ldrh r0, [r1]
	ldr r2, _0811C0F4  @ =gUnknown_03002B94
	ldrh r1, [r2]
	mov r3, #150
	lsl r3, r3, #4
	add r2, r7, r3
	ldrh r2, [r2]
	str r2, [sp, #4]
	ldr r5, _0811C0F8  @ =0x00000E29
	add r3, r7, r5
	add r3, r6, r3
	ldrb r3, [r3]
	ldr r2, _0811C0FC  @ =gUnknown_0817F840
	add r3, r3, r2
	ldrb r3, [r3]
	mov r5, r10
	ldrb r4, [r5]
	mov r5, #4
	orr r4, r4, r5
	ldr r2, _0811C100  @ =gUnknown_03003954
	ldrb r2, [r2]
	mov r12, r2
	mov r5, r12
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #0
	str r4, [sp]
	ldr r2, [sp, #4]
	bl sub_080C6368
	mov r1, r8
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	mov r0, #64
	mov r2, r10
	strb r0, [r2]
	mov r3, #151
	lsl r3, r3, #4
	add r0, r7, r3
	ldrh r0, [r0]
	ldr r5, _0811C0F4  @ =gUnknown_03002B94
	strh r0, [r5]
	mov r1, r9
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0811C052
_0811C0BA:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0811C0CC:
	.4byte gRam
_0811C0D0:
	.4byte 0x00000DCF
_0811C0D4:
	.4byte 0x0000096C
_0811C0D8:
	.4byte 0x0000096D
_0811C0DC:
	.4byte 0x0000181D
_0811C0E0:
	.4byte 0x00001732
_0811C0E4:
	.4byte 0x00001733
_0811C0E8:
	.4byte 0x00000952
_0811C0EC:
	.4byte 0x00000E1F
_0811C0F0:
	.4byte gUnknown_03003E74
_0811C0F4:
	.4byte gUnknown_03002B94
_0811C0F8:
	.4byte 0x00000E29
_0811C0FC:
	.4byte gUnknown_0817F840
_0811C100:
	.4byte gUnknown_03003954
	THUMB_FUNC_END sub_0811BF14

