	THUMB_FUNC_START sub_08100DB4
sub_08100DB4: @ 0x08100DB4
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r2, #0
	ldr r1, _08100DE8  @ =gRam
	ldr r3, _08100DEC  @ =0x000009DA
	add r0, r1, r3
	ldrh r0, [r0]
	add r3, r1, #0
	cmp r0, #236
	bne _08100DCC
	mov r2, #1
_08100DCC:
	cmp r2, #0
	beq _08100E06
	ldr r0, _08100DF0  @ =gUnknown_02010990
	ldrb r0, [r0]
	cmp r0, #0
	beq _08100DF8
	ldr r1, _08100DF4  @ =0x00001032
	add r0, r3, r1
	add r0, r4, r0
	ldrb r2, [r0]
	mov r1, #64
	orr r1, r1, r2
	b _08100E04
	.byte 0x00
	.byte 0x00
_08100DE8:
	.4byte gRam
_08100DEC:
	.4byte 0x000009DA
_08100DF0:
	.4byte gUnknown_02010990
_08100DF4:
	.4byte 0x00001032
_08100DF8:
	ldr r2, _08100E30  @ =0x00001032
	add r0, r3, r2
	add r0, r4, r0
	ldrb r2, [r0]
	mov r1, #191
	and r1, r1, r2
_08100E04:
	strb r1, [r0]
_08100E06:
	ldr r0, _08100E34  @ =0x000010E2
	add r1, r3, r0
	add r1, r4, r1
	ldr r2, _08100E38  @ =0x00001072
	add r0, r3, r2
	add r0, r4, r0
	ldrb r1, [r1]
	ldrb r0, [r0]
	orr r0, r0, r1
	cmp r0, #0
	bne _08100E22
	add r0, r4, #0
	bl sub_080C5044
_08100E22:
	add r0, r4, #0
	bl sub_081011BC
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08100E30:
	.4byte 0x00001032
_08100E34:
	.4byte 0x000010E2
_08100E38:
	.4byte 0x00001072
	THUMB_FUNC_END sub_08100DB4

