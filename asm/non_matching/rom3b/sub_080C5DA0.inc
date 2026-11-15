	THUMB_FUNC_START sub_080C5DA0
sub_080C5DA0: @ 0x080C5DA0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	add r4, r2, #0
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r7, r1, #24
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r1, r7, #0
	add r2, r4, #0
	bl sub_080C5F10
	add r6, r4, #0
	ldr r0, _080C5DF8  @ =gUnknown_03003E74
	ldrh r0, [r0]
	lsl r0, r0, #3
	ldr r1, _080C5DFC  @ =gUnknown_03002780
	add r4, r0, r1
	cmp r6, #0
	bge _080C5DD2
	b _080C5EE0
_080C5DD2:
	mov r0, #1
	mov r10, r0
	ldr r1, _080C5E00  @ =0xFFFFFE00
	mov r9, r1
_080C5DDA:
	mov r0, #128
	and r0, r0, r7
	cmp r0, #0
	beq _080C5E04
	ldrh r2, [r4, #2]
	lsl r1, r2, #23
	lsr r1, r1, #23
	mov r0, #255
	and r1, r1, r0
	mov r3, r9
	and r2, r2, r3
	orr r2, r2, r1
	strh r2, [r4, #2]
	b _080C5E2C
	.byte 0x00
	.byte 0x00
_080C5DF8:
	.4byte gUnknown_03003E74
_080C5DFC:
	.4byte gUnknown_03002780
_080C5E00:
	.4byte 0xFFFFFE00
_080C5E04:
	ldrh r2, [r4, #2]
	lsl r1, r2, #23
	lsr r1, r1, #23
	add r0, r7, #0
	mov r3, r10
	and r0, r0, r3
	lsl r0, r0, #8
	orr r1, r1, r0
	mov r0, r9
	and r2, r2, r0
	orr r2, r2, r1
	strh r2, [r4, #2]
	lsr r1, r7, #1
	and r1, r1, r3
	lsl r1, r1, #6
	ldrb r2, [r4, #3]
	mov r0, #63
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r4, #3]
_080C5E2C:
	mov r3, #0
	ldr r5, _080C5EF0  @ =gRam
	ldr r1, _080C5EF4  @ =0x0000096D
	add r0, r5, r1
	ldrb r1, [r0]
	ldrb r0, [r4, #2]
	sub r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r2, r0, #0
	mov r0, #128
	mov r8, r0
	add r0, r2, #0
	mov r1, r8
	and r0, r0, r1
	cmp r0, #0
	beq _080C5E50
	mov r3, #255
_080C5E50:
	ldr r1, _080C5EF8  @ =0x00000964
	add r0, r5, r1
	ldrb r1, [r0]
	add r1, r1, r2
	ldr r2, _080C5EFC  @ =0x00000965
	add r0, r5, r2
	ldrb r0, [r0]
	add r0, r0, r3
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r3, _080C5F00  @ =0x00000968
	add r0, r5, r3
	strh r1, [r0]
	bl sub_080C65B0
	lsl r0, r0, #24
	cmp r0, #0
	beq _080C5E88
	ldrh r2, [r4, #2]
	lsl r1, r2, #23
	lsr r1, r1, #23
	mov r0, #128
	lsl r0, r0, #1
	orr r1, r1, r0
	mov r0, r9
	and r2, r2, r0
	orr r2, r2, r1
	strh r2, [r4, #2]
_080C5E88:
	mov r3, #0
	ldr r2, _080C5F04  @ =0x0000096C
	add r1, r5, r2
	ldrb r0, [r4]
	ldrb r1, [r1]
	sub r0, r0, r1
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r0, r2, #0
	mov r1, r8
	and r0, r0, r1
	cmp r0, #0
	beq _080C5EA4
	mov r3, #255
_080C5EA4:
	mov r1, #150
	lsl r1, r1, #4
	add r0, r5, r1
	ldrb r1, [r0]
	add r1, r1, r2
	ldr r2, _080C5F08  @ =0x00000961
	add r0, r5, r2
	ldrb r0, [r0]
	add r0, r0, r3
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r3, _080C5F0C  @ =0x00000971
	add r0, r5, r3
	strb r1, [r0]
	lsr r1, r1, #8
	add r2, r2, #19
	add r0, r5, r2
	strb r1, [r0]
	bl sub_080C5FB4
	lsl r0, r0, #24
	cmp r0, #0
	beq _080C5ED6
	mov r0, #240
	strb r0, [r4]
_080C5ED6:
	sub r6, r6, #1
	add r4, r4, #8
	cmp r6, #0
	blt _080C5EE0
	b _080C5DDA
_080C5EE0:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C5EF0:
	.4byte gRam
_080C5EF4:
	.4byte 0x0000096D
_080C5EF8:
	.4byte 0x00000964
_080C5EFC:
	.4byte 0x00000965
_080C5F00:
	.4byte 0x00000968
_080C5F04:
	.4byte 0x0000096C
_080C5F08:
	.4byte 0x00000961
_080C5F0C:
	.4byte 0x00000971
	THUMB_FUNC_END sub_080C5DA0

