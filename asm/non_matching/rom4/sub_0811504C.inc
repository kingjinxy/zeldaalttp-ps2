	THUMB_FUNC_START sub_0811504C
sub_0811504C: @ 0x0811504C
	push {r4-r7,lr}
	ldr r5, _081150A4  @ =gRam
	ldr r0, _081150A8  @ =0x00001668
	add r7, r5, r0
	ldrb r1, [r7]
	ldr r2, _081150AC  @ =0x000009B2
	add r6, r5, r2
	mov r0, #0
	ldrsb r0, [r6, r0]
	cmp r1, r0
	bne _081150F4
	ldr r1, _081150B0  @ =0x00001804
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _081150C4
	bl sub_08115424
	add r4, r0, #0
	cmp r4, #0
	bne _081150C4
	bl sub_08114600
	ldrb r0, [r6]
	strb r0, [r7]
	ldr r2, _081150B4  @ =0x00001663
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #13
	bne _08115096
	ldr r1, _081150B8  @ =0x00000B5C
	add r0, r5, r1
	mov r1, #254
	strb r1, [r0]
	ldr r2, _081150BC  @ =0x00000B5D
	add r0, r5, r2
	strb r4, [r0]
_08115096:
	ldr r1, _081150C0  @ =0x0000166A
	add r0, r5, r1
	strb r4, [r0]
	bl sub_081154AC
	b _081150F4
	.byte 0x00
	.byte 0x00
_081150A4:
	.4byte gRam
_081150A8:
	.4byte 0x00001668
_081150AC:
	.4byte 0x000009B2
_081150B0:
	.4byte 0x00001804
_081150B4:
	.4byte 0x00001663
_081150B8:
	.4byte 0x00000B5C
_081150BC:
	.4byte 0x00000B5D
_081150C0:
	.4byte 0x0000166A
_081150C4:
	ldr r1, _081150FC  @ =gRam
	ldr r2, _08115100  @ =0x00001663
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #13
	bne _081150F0
	ldr r2, _08115104  @ =0x000009B2
	add r0, r1, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _081150F0
	ldr r2, _08115108  @ =0x00000B5C
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _081150F0
	mov r0, #0
	mov r1, #58
	bl sub_0811BAB0
_081150F0:
	bl sub_081153B0
_081150F4:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081150FC:
	.4byte gRam
_08115100:
	.4byte 0x00001663
_08115104:
	.4byte 0x000009B2
_08115108:
	.4byte 0x00000B5C
	THUMB_FUNC_END sub_0811504C

