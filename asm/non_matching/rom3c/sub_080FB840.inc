	THUMB_FUNC_START sub_080FB840
sub_080FB840: @ 0x080FB840
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	add r0, r4, #0
	bl sub_080ED830
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	bne _080FB8BC
	ldr r1, _080FB8C4  @ =gUnknown_020109B8
	mov r0, #48
	strb r0, [r1]
	sub r1, r1, #2
	mov r0, #128
	strh r0, [r1]
	ldr r0, _080FB8C8  @ =gUnknown_020109B9
	strb r2, [r0]
	add r0, r0, #3
	strb r2, [r0]
	sub r0, r0, #2
	strh r2, [r0]
	add r0, r4, #0
	bl sub_080FCF58
	bl sub_080ED97C
	mov r1, #0
	ldr r3, _080FB8CC  @ =gRam
	ldr r2, _080FB8D0  @ =0x000009DA
	add r0, r3, r2
	ldrh r0, [r0]
	cmp r0, #105
	bne _080FB888
	mov r1, #1
_080FB888:
	cmp r1, #0
	beq _080FB8BC
	ldr r0, _080FB8D4  @ =0x00000EA5
	add r2, r3, r0
	add r2, r5, r2
	ldrb r1, [r2]
	mov r0, #240
	and r0, r0, r1
	mov r1, #7
	orr r0, r0, r1
	strb r0, [r2]
	ldr r0, _080FB8D8  @ =0x00001122
	add r2, r3, r0
	add r2, r5, r2
	ldrb r1, [r2]
	mov r0, #241
	and r0, r0, r1
	mov r1, #6
	orr r0, r0, r1
	strb r0, [r2]
	ldr r2, _080FB8DC  @ =0x00001022
	add r1, r3, r2
	add r1, r5, r1
	ldrb r0, [r1]
	lsl r0, r0, #2
	strb r0, [r1]
_080FB8BC:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FB8C4:
	.4byte gUnknown_020109B8
_080FB8C8:
	.4byte gUnknown_020109B9
_080FB8CC:
	.4byte gRam
_080FB8D0:
	.4byte 0x000009DA
_080FB8D4:
	.4byte 0x00000EA5
_080FB8D8:
	.4byte 0x00001122
_080FB8DC:
	.4byte 0x00001022
	THUMB_FUNC_END sub_080FB840

