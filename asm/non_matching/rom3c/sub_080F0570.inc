	THUMB_FUNC_START sub_080F0570
sub_080F0570: @ 0x080F0570
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _080F05BC  @ =gRam
	ldr r0, _080F05C0  @ =0x00001142
	add r2, r4, r0
	add r2, r5, r2
	ldr r3, _080F05C4  @ =gUnknown_08178CE4
	ldr r1, _080F05C8  @ =0x00001052
	add r0, r4, r1
	add r0, r5, r0
	ldrb r0, [r0]
	lsr r0, r0, #3
	mov r1, #7
	and r0, r0, r1
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r2]
	add r0, r5, #0
	bl sub_080F06F0
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F0604
	ldr r1, _080F05CC  @ =0x00000FC2
	add r0, r4, r1
	add r1, r5, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080F05D0
_080F05B2:
	add r0, r5, #0
	bl sub_080F0610
	b _080F0604
	.byte 0x00
	.byte 0x00
_080F05BC:
	.4byte gRam
_080F05C0:
	.4byte 0x00001142
_080F05C4:
	.4byte gUnknown_08178CE4
_080F05C8:
	.4byte 0x00001052
_080F05CC:
	.4byte 0x00000FC2
_080F05D0:
	mov r0, #3
	strb r0, [r1]
	mov r1, #15
	ldr r0, _080F060C  @ =0x00000FA2
	add r3, r4, r0
	add r0, r0, #80
	add r2, r4, r0
_080F05DE:
	add r0, r1, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _080F05EE
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #16
	beq _080F05B2
_080F05EE:
	sub r1, r1, #1
	cmp r1, #0
	bge _080F05DE
	ldr r1, _080F060C  @ =0x00000FA2
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #6
	strb r1, [r0]
	add r0, r5, #0
	bl sub_080F0990
_080F0604:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F060C:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080F0570

