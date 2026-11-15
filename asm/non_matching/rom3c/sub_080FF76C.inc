	THUMB_FUNC_START sub_080FF76C
sub_080FF76C: @ 0x080FF76C
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r9, r4
	add r0, r4, #0
	bl sub_080F40C0
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r7, r0, #24
	cmp r7, #0
	bne _080FF80E
	add r0, r4, #0
	bl sub_080C90F4
	add r0, r4, #0
	bl sub_080C2FA8
	ldr r6, _080FF7D8  @ =gRam
	ldr r2, _080FF7DC  @ =0x00001082
	add r1, r6, r2
	add r1, r1, r4
	mov r8, r1
	mov r1, #3
	eor r0, r0, r1
	mov r1, r8
	strb r0, [r1]
	ldr r2, _080FF7E0  @ =0x00000F52
	add r0, r6, r2
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	beq _080FF7EC
	ldr r1, _080FF7E4  @ =0x00000FA2
	add r0, r6, r1
	add r0, r4, r0
	strb r7, [r0]
	ldr r2, _080FF7E8  @ =0x00001663
	add r1, r6, r2
	mov r0, #6
	strb r0, [r1]
	bl sub_0812F9A8
	add r0, r4, #0
	bl sub_081146A4
	b _080FF80E
	.byte 0x00
	.byte 0x00
_080FF7D8:
	.4byte gRam
_080FF7DC:
	.4byte 0x00001082
_080FF7E0:
	.4byte 0x00000F52
_080FF7E4:
	.4byte 0x00000FA2
_080FF7E8:
	.4byte 0x00001663
_080FF7EC:
	ldr r1, _080FF81C  @ =0x00000125
	mov r0, r9
	mov r2, sp
	bl sub_080C94F4
	lsl r0, r0, #24
	cmp r0, #0
	beq _080FF80E
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	ldr r1, _080FF820  @ =0x00000FB2
	add r0, r6, r1
	add r0, r0, r9
	mov r2, r8
	ldrb r1, [r2]
	strb r1, [r0]
_080FF80E:
	add sp, sp, #4
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_080FF81C:
	.4byte 0x00000125
_080FF820:
	.4byte 0x00000FB2
	THUMB_FUNC_END sub_080FF76C

