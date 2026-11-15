	THUMB_FUNC_START sub_080CA988
sub_080CA988: @ 0x080CA988
	push {r4-r6,lr}
	ldr r3, _080CA9E4  @ =gRam
	ldr r1, _080CA9E8  @ =0x00000C11
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080CA9DC
	lsr r0, r0, #7
	ldr r4, _080CA9EC  @ =0x00000952
	add r2, r3, r4
	ldr r1, _080CA9F0  @ =gUnknown_081728A8
	lsl r0, r0, #1
	add r0, r0, r1
	mov r4, #0
	ldrsh r1, [r2, r4]
	ldrh r0, [r0]
	add r1, r1, r0
	ldr r2, _080CA9F4  @ =0x00000958
	add r0, r3, r2
	mov r4, #0
	ldrsh r0, [r0, r4]
	sub r0, r0, #48
	lsl r0, r0, #16
	lsr r2, r0, #16
	mov r5, #21
	lsl r6, r1, #16
_080CA9BC:
	lsl r4, r2, #16
	asr r4, r4, #16
	asr r0, r6, #16
	add r1, r4, #0
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
	bge _080CA9BC
_080CA9DC:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080CA9E4:
	.4byte gRam
_080CA9E8:
	.4byte 0x00000C11
_080CA9EC:
	.4byte 0x00000952
_080CA9F0:
	.4byte gUnknown_081728A8
_080CA9F4:
	.4byte 0x00000958
	THUMB_FUNC_END sub_080CA988

