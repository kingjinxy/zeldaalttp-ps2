	THUMB_FUNC_START sub_080B8CA0
sub_080B8CA0: @ 0x080B8CA0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r2, _080B8D34  @ =gRam
	ldr r1, _080B8D38  @ =0x00000996
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	beq _080B8CBC
	b _080B8DCA
_080B8CBC:
	ldr r0, _080B8D3C  @ =0x000009D3
	add r4, r2, r0
	ldrb r3, [r4]
	cmp r3, #5
	bne _080B8CC8
	b _080B8DCA
_080B8CC8:
	add r0, r0, #21
	add r1, r2, r0
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _080B8CE0
	mov r0, #31
	strh r0, [r1]
	add r0, r3, #1
	strb r0, [r4]
_080B8CE0:
	mov r1, #0
	mov r8, r1
	mov r2, #248
	lsl r2, r2, #7
	mov r10, r2
	ldr r0, _080B8D40  @ =gUnknown_02000C00
	mov r9, r0
_080B8CEE:
	mov r0, r8
	add r0, r0, #80
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r12, r0
	lsl r1, r0, #1
	ldr r0, _080B8D44  @ =gUnknown_02000800
	add r0, r1, r0
	ldrh r0, [r0]
	mov r5, #31
	and r5, r5, r0
	mov r6, #248
	lsl r6, r6, #2
	and r6, r6, r0
	mov r7, r10
	and r7, r7, r0
	add r1, r1, r9
	ldrh r0, [r1]
	mov r4, #31
	and r4, r4, r0
	mov r2, #248
	lsl r2, r2, #2
	and r2, r2, r0
	mov r3, r10
	and r3, r3, r0
	ldr r1, _080B8D48  @ =gUnknown_03002C03
	ldrb r0, [r1]
	cmp r0, #1
	beq _080B8D5A
	cmp r0, #1
	bgt _080B8D4C
	cmp r0, #0
	beq _080B8D56
	b _080B8D98
	.byte 0x00
	.byte 0x00
_080B8D34:
	.4byte gRam
_080B8D38:
	.4byte 0x00000996
_080B8D3C:
	.4byte 0x000009D3
_080B8D40:
	.4byte gUnknown_02000C00
_080B8D44:
	.4byte gUnknown_02000800
_080B8D48:
	.4byte gUnknown_03002C03
_080B8D4C:
	cmp r0, #2
	beq _080B8D70
	cmp r0, #3
	beq _080B8D84
	b _080B8D98
_080B8D56:
	mov r4, #0
	b _080B8D6A
_080B8D5A:
	cmp r5, r4
	beq _080B8D6A
	add r0, r4, #1
	lsl r0, r0, #16
	lsr r4, r0, #16
	cmp r4, r5
	bcc _080B8D6A
	add r4, r5, #0
_080B8D6A:
	mov r2, #0
_080B8D6C:
	mov r3, #0
	b _080B8D98
_080B8D70:
	cmp r6, r2
	beq _080B8D6C
	add r0, r2, #0
	add r0, r0, #32
	lsl r0, r0, #16
	lsr r2, r0, #16
	cmp r2, r6
	bcc _080B8D6C
	add r2, r6, #0
	b _080B8D6C
_080B8D84:
	cmp r7, r3
	beq _080B8D98
	mov r1, #128
	lsl r1, r1, #3
	add r0, r3, r1
	lsl r0, r0, #16
	lsr r3, r0, #16
	cmp r3, r7
	bcc _080B8D98
	add r3, r7, #0
_080B8D98:
	mov r0, r12
	lsl r1, r0, #1
	add r1, r1, r9
	add r0, r4, r2
	add r0, r3, r0
	strh r0, [r1]
	mov r1, #1
	add r8, r8, r1
	mov r2, r8
	cmp r2, #15
	ble _080B8CEE
	ldr r0, _080B8DD8  @ =gRam
	ldr r2, _080B8DDC  @ =0x000009D3
	add r1, r0, r2
	ldrb r0, [r1]
	cmp r0, #4
	bne _080B8DBE
	mov r0, #5
	strb r0, [r1]
_080B8DBE:
	ldr r0, _080B8DD8  @ =gRam
	ldr r2, _080B8DE0  @ =0x0000099B
	add r1, r0, r2
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080B8DCA:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080B8DD8:
	.4byte gRam
_080B8DDC:
	.4byte 0x000009D3
_080B8DE0:
	.4byte 0x0000099B
	THUMB_FUNC_END sub_080B8CA0

