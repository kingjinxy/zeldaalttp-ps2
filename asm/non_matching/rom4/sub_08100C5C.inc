	THUMB_FUNC_START sub_08100C5C
sub_08100C5C: @ 0x08100C5C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r0, _08100CA4  @ =gRam
	ldr r1, _08100CA8  @ =0x00000F22
	add r0, r0, r1
	add r2, r4, r0
	ldrb r1, [r2]
	cmp r1, #0
	beq _08100C82
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08100C7C
	add r0, r1, #4
	strb r0, [r2]
_08100C7C:
	ldrb r0, [r2]
	sub r0, r0, #2
	strb r0, [r2]
_08100C82:
	add r0, r4, #0
	bl sub_081016C8
	ldr r0, _08100CA4  @ =gRam
	ldr r1, _08100CAC  @ =0x00001042
	add r0, r0, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _08100C9C
	add r0, r4, #0
	bl sub_08100624
_08100C9C:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08100CA4:
	.4byte gRam
_08100CA8:
	.4byte 0x00000F22
_08100CAC:
	.4byte 0x00001042
	THUMB_FUNC_END sub_08100C5C

