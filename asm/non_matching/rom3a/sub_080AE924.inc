	THUMB_FUNC_START sub_080AE924
sub_080AE924: @ 0x080AE924
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	mov r1, #12
	mov r2, sp
	bl sub_080AB89C
	lsl r0, r0, #24
	asr r6, r0, #24
	cmp r6, #0
	beq _080AE944
	b _080AEAEC
_080AE944:
	ldr r5, _080AEAF8  @ =gRam
	ldr r0, _080AEAFC  @ =0x000016D5
	add r4, r5, r0
	ldrb r1, [r4]
	lsl r1, r1, #25
	lsr r1, r1, #24
	ldr r3, _080AEB00  @ =gUnknown_02006880
	ldr r2, _080AEB04  @ =gUnknown_0816E80C
	add r0, r1, r2
	ldrb r0, [r0]
	strb r0, [r3]
	add r3, r3, #1
	add r0, r1, #1
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r3]
	add r3, r3, #1
	add r0, r1, #2
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r3]
	ldr r0, _080AEB08  @ =gUnknown_02006883
	add r1, r1, #3
	add r1, r1, r2
	ldrb r1, [r1]
	strb r1, [r0]
	add r0, r0, #1
	strb r1, [r0]
	mov r1, sp
	ldr r2, _080AEB0C  @ =0x00001844
	add r0, r5, r2
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #2
	strb r1, [r0]
	mov r1, sp
	ldr r3, _080AEB10  @ =0x00000E29
	add r0, r5, r3
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #76
	strb r1, [r0]
	mov r1, sp
	sub r2, r2, #18
	add r0, r5, r2
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #8
	strb r1, [r0]
	mov r1, sp
	sub r3, r3, #10
	add r0, r5, r3
	ldrb r1, [r1]
	add r0, r0, r1
	strb r6, [r0]
	mov r1, sp
	sub r2, r2, #26
	add r0, r5, r2
	ldrb r1, [r1]
	add r0, r0, r1
	strb r6, [r0]
	mov r1, sp
	ldr r3, _080AEB14  @ =0x00001827
	add r0, r5, r3
	ldrb r1, [r1]
	add r0, r0, r1
	strb r6, [r0]
	mov r1, sp
	add r2, r2, #31
	add r0, r5, r2
	ldrb r1, [r1]
	add r0, r0, r1
	strb r6, [r0]
	ldr r1, _080AEB18  @ =gUnknown_02006888
	mov r0, #14
	strb r0, [r1]
	ldrb r2, [r4]
	lsr r2, r2, #1
	mov r0, sp
	ldrb r0, [r0]
	ldr r3, _080AEB1C  @ =0x00000E3D
	add r7, r5, r3
	add r0, r0, r7
	strb r2, [r0]
	mov r0, sp
	ldr r4, _080AEB20  @ =0x00000DED
	add r1, r5, r4
	ldrb r0, [r0]
	add r1, r1, r0
	ldr r0, _080AEB24  @ =gUnknown_0816E81C
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	mov r0, sp
	sub r3, r3, #70
	add r1, r5, r3
	ldrb r0, [r0]
	add r1, r1, r0
	ldr r0, _080AEB28  @ =gUnknown_0816E820
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	mov r0, sp
	ldr r4, _080AEB2C  @ =0x0000183C
	add r1, r5, r4
	ldrb r0, [r0]
	add r1, r1, r0
	ldr r0, _080AEB30  @ =gUnknown_0816E824
	add r2, r2, r0
	ldrb r0, [r2]
	strb r0, [r1]
	ldr r1, _080AEB34  @ =0x000016C4
	add r0, r5, r1
	ldrb r2, [r0]
	ldr r3, _080AEB38  @ =0x000016C5
	add r0, r5, r3
	mov r3, #0
	ldrsb r3, [r0, r3]
	lsl r3, r3, #8
	mov r4, #182
	lsl r4, r4, #5
	add r0, r5, r4
	ldrb r1, [r0]
	add r4, r4, #1
	add r0, r5, r4
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	ldr r6, _080AEB3C  @ =gUnknown_0200688E
	orr r2, r2, r3
	add r2, r2, #8
	strh r2, [r6]
	ldr r4, _080AEB40  @ =gUnknown_02006890
	orr r1, r1, r0
	add r1, r1, #12
	strh r1, [r4]
	mov r0, sp
	ldrb r0, [r0]
	bl sub_080ABB30
	lsl r0, r0, #24
	cmp r0, #0
	beq _080AEAEC
	mov r0, sp
	ldrb r2, [r0]
	add r0, r2, r7
	ldrb r3, [r0]
	ldr r0, _080AEB44  @ =gUnknown_0816E828
	lsl r3, r3, #1
	add r0, r3, r0
	ldrh r0, [r0]
	ldrh r4, [r4]
	add r0, r0, r4
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r4, _080AEB48  @ =0x00000DC5
	add r1, r5, r4
	add r2, r2, r1
	strb r0, [r2]
	mov r2, sp
	add r4, r4, #20
	add r1, r5, r4
	ldrb r2, [r2]
	add r1, r1, r2
	lsr r0, r0, #8
	strb r0, [r1]
	ldr r0, _080AEB4C  @ =gUnknown_0816E830
	add r3, r3, r0
	ldrh r1, [r3]
	ldrh r6, [r6]
	add r1, r1, r6
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r2, sp
	ldr r3, _080AEB50  @ =0x00000DCF
	add r0, r5, r3
	ldrb r2, [r2]
	add r0, r0, r2
	strb r1, [r0]
	mov r2, sp
	add r4, r4, #10
	add r0, r5, r4
	ldrb r2, [r2]
	add r0, r0, r2
	lsr r1, r1, #8
	strb r1, [r0]
	mov r0, r8
	mov r1, #42
	bl sub_080C19F8
	mov r1, sp
	ldr r2, _080AEB54  @ =0x00000E15
	add r0, r5, r2
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #4
	strb r1, [r0]
	mov r1, sp
	ldr r3, _080AEB58  @ =0x00000E33
	add r0, r5, r3
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #7
	strb r1, [r0]
	mov r1, sp
	add r4, r4, #120
	add r0, r5, r4
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #16
	strb r1, [r0]
_080AEAEC:
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080AEAF8:
	.4byte gRam
_080AEAFC:
	.4byte 0x000016D5
_080AEB00:
	.4byte gUnknown_02006880
_080AEB04:
	.4byte gUnknown_0816E80C
_080AEB08:
	.4byte gUnknown_02006883
_080AEB0C:
	.4byte 0x00001844
_080AEB10:
	.4byte 0x00000E29
_080AEB14:
	.4byte 0x00001827
_080AEB18:
	.4byte gUnknown_02006888
_080AEB1C:
	.4byte 0x00000E3D
_080AEB20:
	.4byte 0x00000DED
_080AEB24:
	.4byte gUnknown_0816E81C
_080AEB28:
	.4byte gUnknown_0816E820
_080AEB2C:
	.4byte 0x0000183C
_080AEB30:
	.4byte gUnknown_0816E824
_080AEB34:
	.4byte 0x000016C4
_080AEB38:
	.4byte 0x000016C5
_080AEB3C:
	.4byte gUnknown_0200688E
_080AEB40:
	.4byte gUnknown_02006890
_080AEB44:
	.4byte gUnknown_0816E828
_080AEB48:
	.4byte 0x00000DC5
_080AEB4C:
	.4byte gUnknown_0816E830
_080AEB50:
	.4byte 0x00000DCF
_080AEB54:
	.4byte 0x00000E15
_080AEB58:
	.4byte 0x00000E33
	THUMB_FUNC_END sub_080AE924

