	THUMB_FUNC_START sub_080F4CB8
sub_080F4CB8: @ 0x080F4CB8
	push {r4-r6,lr}
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r0, #242
	bl sub_080CA538
	add r6, r0, #0
	cmp r6, #0
	blt _080F4D0A
	bl GetRandomInt
	ldr r5, _080F4D14  @ =gRam
	mov r1, #150
	lsl r1, r1, #4
	add r2, r5, r1
	mov r4, #15
	add r1, r4, #0
	and r1, r1, r0
	ldr r0, _080F4D18  @ =0x0000FFF8
	add r1, r1, r0
	ldrh r0, [r2]
	add r1, r1, r0
	strh r1, [r2]
	bl GetRandomInt
	ldr r2, _080F4D1C  @ =0x00000964
	add r1, r5, r2
	and r4, r4, r0
	ldrh r0, [r1]
	add r4, r4, r0
	strh r4, [r1]
	lsl r0, r6, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	ldr r1, _080F4D20  @ =0x00001052
	add r5, r5, r1
	add r5, r6, r5
	mov r0, #1
	strb r0, [r5]
_080F4D0A:
	add r0, r6, #0
	pop {r4-r6}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080F4D14:
	.4byte gRam
_080F4D18:
	.4byte 0x0000FFF8
_080F4D1C:
	.4byte 0x00000964
_080F4D20:
	.4byte 0x00001052
	THUMB_FUNC_END sub_080F4CB8

