	THUMB_FUNC_START sub_080DE670
sub_080DE670: @ 0x080DE670
	push {r4,r5,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r5, _080DE6A4  @ =gRam
	ldr r0, _080DE6A8  @ =0x00001776
	add r1, r5, r0
	mov r0, #0
	strb r0, [r1]
	mov r0, #75
	bl sub_080A1588
	ldr r1, _080DE6AC  @ =0x00000F52
	add r0, r5, r1
	add r4, r4, r0
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	mov r0, #179
	lsl r0, r0, #5
	add r5, r5, r0
	mov r0, #3
	strb r0, [r5]
	pop {r4,r5}
	pop {r0}
	bx r0
_080DE6A4:
	.4byte gRam
_080DE6A8:
	.4byte 0x00001776
_080DE6AC:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080DE670

