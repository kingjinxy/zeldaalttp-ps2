	THUMB_FUNC_START sub_080EEC64
sub_080EEC64: @ 0x080EEC64
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080EF19C
	add r0, r4, #0
	bl Sprite3_Move
	ldr r5, _080EECC0  @ =gRam
	ldr r1, _080EECC4  @ =0x00001052
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _080EECE2
	add r0, r4, #0
	mov r1, #14
	bl sub_08106FA4
	mov r3, #150
	lsl r3, r3, #4
	add r2, r5, r3
	mov r0, #0
	ldrsb r0, [r2, r0]
	ldr r3, _080EECC8  @ =0x000011D2
	add r1, r5, r3
	add r0, r0, r1
	mov r1, #16
	strb r1, [r0]
	ldr r1, _080EECCC  @ =0x00001092
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #5
	beq _080EECD4
	mov r0, #0
	ldrsb r0, [r2, r0]
	ldr r2, _080EECD0  @ =0x000012FE
	add r1, r5, r2
	add r0, r0, r1
	mov r1, #79
	b _080EECE0
	.byte 0x00
	.byte 0x00
_080EECC0:
	.4byte gRam
_080EECC4:
	.4byte 0x00001052
_080EECC8:
	.4byte 0x000011D2
_080EECCC:
	.4byte 0x00001092
_080EECD0:
	.4byte 0x000012FE
_080EECD4:
	mov r0, #0
	ldrsb r0, [r2, r0]
	ldr r3, _080EECE8  @ =0x000012FE
	add r1, r5, r3
	add r0, r0, r1
	mov r1, #47
_080EECE0:
	strb r1, [r0]
_080EECE2:
	pop {r4,r5}
	pop {r0}
	bx r0
_080EECE8:
	.4byte 0x000012FE
	THUMB_FUNC_END sub_080EEC64

