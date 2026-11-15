	THUMB_FUNC_START sub_080E7E90
sub_080E7E90: @ 0x080E7E90
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldr r4, _080E7F18  @ =gRam
	ldr r1, _080E7F1C  @ =0x00001122
	add r0, r4, r1
	add r0, r0, r7
	mov r8, r0
	ldrb r1, [r0]
	mov r0, #1
	mov r9, r0
	and r0, r0, r1
	cmp r0, #0
	bne _080E7EBE
	ldr r1, _080E7F20  @ =0x00001610
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #2
	bhi _080E7F4C
_080E7EBE:
	ldr r1, _080E7F24  @ =0x000010E2
	add r0, r4, r1
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080E7ED0
	mov r0, #8
	bl sub_080CF388
_080E7ED0:
	ldr r1, _080E7F28  @ =0x00000F52
	add r0, r4, r1
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080E7F30
	add r1, r1, #64
	add r0, r4, r1
	add r5, r7, r0
	ldrb r6, [r5]
	cmp r6, #3
	bhi _080E7F3E
	mov r0, r8
	ldrb r4, [r0]
	ldr r0, _080E7F2C  @ =gUnknown_081778F0
	add r0, r6, r0
	ldrb r1, [r0]
	add r0, r4, #0
	eor r0, r0, r1
	mov r1, r8
	strb r0, [r1]
	mov r1, r9
	and r0, r0, r1
	mov r1, #1
	eor r0, r0, r1
	lsl r0, r0, #2
	ldrb r1, [r5]
	add r0, r0, r1
	strb r0, [r5]
	add r0, r7, #0
	bl sub_080C6240
	mov r0, r8
	strb r4, [r0]
	strb r6, [r5]
	b _080E7F4C
_080E7F18:
	.4byte gRam
_080E7F1C:
	.4byte 0x00001122
_080E7F20:
	.4byte 0x00001610
_080E7F24:
	.4byte 0x000010E2
_080E7F28:
	.4byte 0x00000F52
_080E7F2C:
	.4byte gUnknown_081778F0
_080E7F30:
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	add r2, r7, #0
	bl sub_080C632C
	b _080E7F4C
_080E7F3E:
	lsl r1, r6, #3
	ldr r0, _080E7F5C  @ =gUnknown_081778D4
	add r1, r1, r0
	add r0, r7, #0
	mov r2, #2
	bl sub_080C9480
_080E7F4C:
	add sp, sp, #4
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E7F5C:
	.4byte gUnknown_081778D4
	THUMB_FUNC_END sub_080E7E90

