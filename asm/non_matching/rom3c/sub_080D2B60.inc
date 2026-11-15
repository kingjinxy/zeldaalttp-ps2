	THUMB_FUNC_START sub_080D2B60
sub_080D2B60: @ 0x080D2B60
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	ldr r1, _080D2BA8  @ =gRam
	ldr r2, _080D2BAC  @ =0x00000ECD
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _080D2C32
	mov r3, #0
	cmp r0, #3
	bls _080D2B8E
	mov r3, #1
	ldr r4, _080D2BB0  @ =0x00000ECE
	add r0, r1, r4
	ldrb r0, [r0]
	cmp r0, #0
	bne _080D2B8E
	mov r3, #2
_080D2B8E:
	ldr r1, _080D2BA8  @ =gRam
	ldr r0, _080D2BB4  @ =0x000015F9
	add r2, r1, r0
	mov r0, #3
	strb r0, [r2]
	ldr r4, _080D2BB8  @ =0x000015FA
	add r0, r1, r4
	strb r3, [r0]
	add r5, r1, #0
	add r6, r2, #0
	mov r9, r0
	mov r7, #32
	b _080D2C14
_080D2BA8:
	.4byte gRam
_080D2BAC:
	.4byte 0x00000ECD
_080D2BB0:
	.4byte 0x00000ECE
_080D2BB4:
	.4byte 0x000015F9
_080D2BB8:
	.4byte 0x000015FA
_080D2BBC:
	mov r0, r8
	mov r1, #94
	bl sub_080CF140
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	ldr r0, _080D2C50  @ =0x00000F22
	add r1, r5, r0
	add r1, r4, r1
	ldr r2, _080D2C54  @ =gUnknown_08174D30
	ldrb r0, [r6]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r2, _080D2C58  @ =0x00000F12
	add r1, r5, r2
	add r1, r4, r1
	ldr r2, _080D2C5C  @ =gUnknown_08174D34
	ldrb r0, [r6]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080D2C60  @ =0x00000D74
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #255
	strb r1, [r0]
	ldr r2, _080D2C64  @ =0x000010E2
	add r0, r5, r2
	add r0, r4, r0
	strb r7, [r0]
	ldr r1, _080D2C68  @ =0x000010B2
	add r0, r5, r1
	add r0, r4, r0
	strb r7, [r0]
	add r2, r2, #112
	add r0, r5, r2
	add r0, r4, r0
	strb r7, [r0]
	ldrb r0, [r6]
	sub r0, r0, #1
	strb r0, [r6]
_080D2C14:
	mov r0, #0
	ldrsb r0, [r6, r0]
	cmp r0, #0
	blt _080D2C32
	ldr r0, _080D2C6C  @ =gUnknown_08174D38
	mov r4, r9
	ldrb r1, [r4]
	add r1, r1, r0
	ldrb r0, [r1]
	mov r1, r8
	bl sub_080CA538
	add r4, r0, #0
	cmp r4, #0
	bge _080D2BBC
_080D2C32:
	ldr r0, _080D2C70  @ =gRam
	ldr r2, _080D2C74  @ =0x00000ECD
	add r1, r0, r2
	mov r2, #0
	strb r2, [r1]
	ldr r4, _080D2C78  @ =0x00000ECE
	add r0, r0, r4
	strb r2, [r0]
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D2C50:
	.4byte 0x00000F22
_080D2C54:
	.4byte gUnknown_08174D30
_080D2C58:
	.4byte 0x00000F12
_080D2C5C:
	.4byte gUnknown_08174D34
_080D2C60:
	.4byte 0x00000D74
_080D2C64:
	.4byte 0x000010E2
_080D2C68:
	.4byte 0x000010B2
_080D2C6C:
	.4byte gUnknown_08174D38
_080D2C70:
	.4byte gRam
_080D2C74:
	.4byte 0x00000ECD
_080D2C78:
	.4byte 0x00000ECE
	THUMB_FUNC_END sub_080D2B60

