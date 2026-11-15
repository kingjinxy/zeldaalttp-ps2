	THUMB_FUNC_START sub_080CA9F8
sub_080CA9F8: @ 0x080CA9F8
	push {r4-r6,lr}
	ldr r3, _080CAA54  @ =gRam
	mov r1, #193
	lsl r1, r1, #4
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080CAA4E
	lsr r0, r0, #7
	ldr r4, _080CAA58  @ =0x00000958
	add r2, r3, r4
	ldr r1, _080CAA5C  @ =gUnknown_081728A8
	lsl r0, r0, #1
	add r0, r0, r1
	mov r4, #0
	ldrsh r1, [r2, r4]
	ldrh r0, [r0]
	add r1, r1, r0
	ldr r2, _080CAA60  @ =0x00000952
	add r0, r3, r2
	mov r4, #0
	ldrsh r0, [r0, r4]
	sub r0, r0, #48
	lsl r0, r0, #16
	lsr r2, r0, #16
	mov r5, #21
	lsl r6, r1, #16
_080CAA2E:
	lsl r4, r2, #16
	asr r4, r4, #16
	add r0, r4, #0
	asr r1, r6, #16
	bl sub_080CAA64
	add r4, r4, #16
	lsl r4, r4, #16
	lsr r2, r4, #16
	lsl r0, r5, #24
	mov r1, #255
	lsl r1, r1, #24
	add r0, r0, r1
	lsr r5, r0, #24
	cmp r0, #0
	bge _080CAA2E
_080CAA4E:
	pop {r4-r6}
	pop {r0}
	bx r0
_080CAA54:
	.4byte gRam
_080CAA58:
	.4byte 0x00000958
_080CAA5C:
	.4byte gUnknown_081728A8
_080CAA60:
	.4byte 0x00000952
	THUMB_FUNC_END sub_080CA9F8

