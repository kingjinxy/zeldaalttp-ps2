	THUMB_FUNC_START sub_080E6B98
sub_080E6B98: @ 0x080E6B98
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	str r4, [sp]
	ldr r0, _080E6C68  @ =gRam
	mov r8, r0
	ldr r0, _080E6C6C  @ =0x00000FB2
	add r0, r0, r8
	add r6, r4, r0
	ldrb r1, [r6]
	add r7, r1, #0
	ldr r0, _080E6C70  @ =0x00000FD2
	add r0, r0, r8
	add r0, r0, r4
	mov r10, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080E6BCE
	ldr r0, _080E6C74  @ =gUnknown_08177774
	add r0, r1, r0
	ldrb r0, [r0]
	strb r0, [r6]
_080E6BCE:
	mov r5, #150
	lsl r5, r5, #4
	add r5, r5, r8
	mov r0, #0
	strb r0, [r5]
	ldr r0, _080E6C78  @ =0x00000F92
	add r0, r0, r8
	add r0, r0, r4
	mov r9, r0
	ldrb r0, [r0]
	cmp r0, #7
	bne _080E6BEA
	mov r0, #64
	strb r0, [r5]
_080E6BEA:
	ldr r2, _080E6C7C  @ =0x00001122
	add r2, r2, r8
	add r2, r4, r2
	ldrb r0, [r2]
	mov r1, #191
	and r1, r1, r0
	ldr r0, _080E6C80  @ =gUnknown_08177770
	add r0, r7, r0
	ldrb r0, [r0]
	orr r1, r1, r0
	ldrb r0, [r5]
	orr r1, r1, r0
	strb r1, [r2]
	add r0, r4, #0
	bl sub_080E6E24
	strb r7, [r6]
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _080E6C1A
	b _080E6D8E
_080E6C1A:
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	beq _080E6C28
	b _080E6D8E
_080E6C28:
	add r0, r4, #0
	bl Sprite3_Move
	add r0, r4, #0
	bl sub_080C5044
	ldr r0, _080E6C84  @ =0x00000F52
	add r0, r0, r8
	add r7, r4, r0
	ldrb r1, [r7]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _080E6CE8
	add r0, r4, #0
	bl sub_080C3540
	ldr r0, _080E6C88  @ =0x00000FC2
	add r0, r0, r8
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	beq _080E6CA0
	ldr r0, _080E6C8C  @ =0x00000FF2
	add r0, r0, r8
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #8
	beq _080E6C90
	cmp r0, #10
	beq _080E6C98
	b _080E6D8E
_080E6C68:
	.4byte gRam
_080E6C6C:
	.4byte 0x00000FB2
_080E6C70:
	.4byte 0x00000FD2
_080E6C74:
	.4byte gUnknown_08177774
_080E6C78:
	.4byte 0x00000F92
_080E6C7C:
	.4byte 0x00001122
_080E6C80:
	.4byte gUnknown_08177770
_080E6C84:
	.4byte 0x00000F52
_080E6C88:
	.4byte 0x00000FC2
_080E6C8C:
	.4byte 0x00000FF2
_080E6C90:
	add r0, r4, #0
	bl sub_080E6F64
	b _080E6D8E
_080E6C98:
	add r0, r4, #0
	bl sub_080E6DA8
	b _080E6D8E
_080E6CA0:
	ldrb r4, [r6]
	bl GetRandomInt
	mov r1, #63
	and r1, r1, r0
	add r1, r1, #48
	ldrb r0, [r7]
	add r0, r0, #1
	strb r0, [r7]
	strb r1, [r5]
	mov r0, #3
	and r1, r1, r0
	strb r1, [r6]
	ldr r0, _080E6CE4  @ =0x000009AC
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #26
	bne _080E6CD0
	mov r0, #79
	strb r0, [r5]
	add r0, r4, #0
	mov r1, #1
	eor r0, r0, r1
	strb r0, [r6]
_080E6CD0:
	ldrb r0, [r6]
	cmp r0, r4
	beq _080E6D8E
	cmp r0, r4
	bne _080E6D8E
	mov r0, #8
	mov r2, r10
	strb r0, [r2]
	b _080E6D8E
	.byte 0x00
	.byte 0x00
_080E6CE4:
	.4byte 0x000009AC
_080E6CE8:
	ldrb r1, [r6]
	mov r0, #2
	and r0, r0, r1
	lsl r0, r0, #1
	strb r0, [r5]
	ldr r1, _080E6D58  @ =0x00001052
	add r1, r1, r8
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #27
	mov r1, #3
	and r0, r0, r1
	ldrb r1, [r5]
	orr r0, r0, r1
	mov r1, r9
	strb r0, [r1]
	ldr r0, _080E6D5C  @ =0x00000FC2
	add r0, r0, r8
	add r3, r4, r0
	ldrb r0, [r3]
	cmp r0, #0
	beq _080E6D74
	ldr r1, _080E6D60  @ =0x00000F22
	add r1, r1, r8
	add r1, r4, r1
	ldr r2, _080E6D64  @ =gUnknown_08177778
	ldrb r0, [r6]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080E6D68  @ =0x00000F12
	add r1, r1, r8
	add r1, r4, r1
	ldr r2, _080E6D6C  @ =gUnknown_0817777C
	ldrb r0, [r6]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080C6F48
	ldr r0, _080E6D70  @ =0x00001042
	add r0, r0, r8
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080E6D8E
	ldrb r0, [r6]
	mov r2, #1
	eor r0, r0, r2
	strb r0, [r6]
	b _080E6D8E
	.byte 0x00
	.byte 0x00
_080E6D58:
	.4byte 0x00001052
_080E6D5C:
	.4byte 0x00000FC2
_080E6D60:
	.4byte 0x00000F22
_080E6D64:
	.4byte gUnknown_08177778
_080E6D68:
	.4byte 0x00000F12
_080E6D6C:
	.4byte gUnknown_0817777C
_080E6D70:
	.4byte 0x00001042
_080E6D74:
	ldrb r0, [r7]
	add r0, r0, #1
	strb r0, [r7]
	ldr r1, _080E6DA0  @ =gUnknown_08177780
	ldr r0, _080E6DA4  @ =0x00000FF2
	add r0, r0, r8
	ldr r2, [sp]
	add r0, r2, r0
	ldrb r0, [r0]
	sub r0, r0, #8
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r3]
_080E6D8E:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E6DA0:
	.4byte gUnknown_08177780
_080E6DA4:
	.4byte 0x00000FF2
	THUMB_FUNC_END sub_080E6B98

