	THUMB_FUNC_START sub_08100D60
sub_08100D60: @ 0x08100D60
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r0, _08100DA8  @ =gRam
	ldr r1, _08100DAC  @ =0x00000F12
	add r0, r0, r1
	add r2, r4, r0
	ldrb r1, [r2]
	cmp r1, #0
	beq _08100D88
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08100D82
	add r0, r1, #0
	add r0, r0, #8
	strb r0, [r2]
_08100D82:
	ldrb r0, [r2]
	sub r0, r0, #4
	strb r0, [r2]
_08100D88:
	add r0, r4, #0
	bl Sprite3_MoveVert
	ldr r0, _08100DA8  @ =gRam
	ldr r1, _08100DB0  @ =0x00001042
	add r0, r0, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _08100DA2
	add r0, r4, #0
	bl sub_08100624
_08100DA2:
	pop {r4}
	pop {r0}
	bx r0
_08100DA8:
	.4byte gRam
_08100DAC:
	.4byte 0x00000F12
_08100DB0:
	.4byte 0x00001042
	THUMB_FUNC_END sub_08100D60

