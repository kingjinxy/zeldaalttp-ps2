	THUMB_FUNC_START sub_080DC9E4
sub_080DC9E4: @ 0x080DC9E4
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r7, r4, #0
	ldr r6, _080DCA50  @ =gRam
	ldr r1, _080DCA54  @ =0x00000FC2
	add r0, r6, r1
	add r0, r0, r4
	mov r8, r0
	ldrb r5, [r0]
	cmp r5, #0
	bne _080DCAA0
	ldr r2, _080DCA58  @ =0x00000F62
	add r0, r6, r2
	add r2, r4, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	mov r3, r8
	strb r0, [r3]
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #1
	bne _080DCA70
	ldr r1, _080DCA5C  @ =0x00000113
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9564
	ldr r0, _080DCA60  @ =0x00000F52
	add r1, r6, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080DCA64  @ =0x00000F92
	add r0, r6, r1
	add r0, r4, r0
	strb r5, [r0]
	ldr r2, _080DCA68  @ =0x00001152
	add r0, r6, r2
	add r0, r4, r0
	strb r5, [r0]
	ldr r3, _080DCA6C  @ =0x00000F22
	add r0, r6, r3
	add r0, r4, r0
	strb r5, [r0]
	mov r0, #255
	mov r1, r8
	b _080DCA9E
	.byte 0x00
	.byte 0x00
_080DCA50:
	.4byte gRam
_080DCA54:
	.4byte 0x00000FC2
_080DCA58:
	.4byte 0x00000F62
_080DCA5C:
	.4byte 0x00000113
_080DCA60:
	.4byte 0x00000F52
_080DCA64:
	.4byte 0x00000F92
_080DCA68:
	.4byte 0x00001152
_080DCA6C:
	.4byte 0x00000F22
_080DCA70:
	ldr r3, _080DCAAC  @ =0x00001152
	add r0, r6, r3
	add r0, r7, r0
	lsr r1, r1, #26
	strb r1, [r0]
	ldr r0, _080DCAB0  @ =0x00000F22
	add r1, r6, r0
	add r1, r7, r1
	ldr r3, _080DCAB4  @ =gUnknown_08176140
	ldrb r2, [r2]
	mov r4, #1
	mov r0, #1
	and r0, r0, r2
	add r0, r0, r3
	ldrb r0, [r0]
	ldrb r2, [r1]
	add r0, r0, r2
	strb r0, [r1]
	ldr r3, _080DCAB8  @ =0x00000F92
	add r1, r6, r3
	add r1, r7, r1
	ldrb r0, [r1]
	eor r0, r0, r4
_080DCA9E:
	strb r0, [r1]
_080DCAA0:
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080DCAAC:
	.4byte 0x00001152
_080DCAB0:
	.4byte 0x00000F22
_080DCAB4:
	.4byte gUnknown_08176140
_080DCAB8:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_080DC9E4

