	THUMB_FUNC_START sub_080D9804
sub_080D9804: @ 0x080D9804
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080D9834  @ =gRam
	ldr r3, _080D9838  @ =0x00000F52
	add r1, r2, r3
	add r1, r0, r1
	mov r3, #3
	strb r3, [r1]
	ldr r3, _080D983C  @ =0x000010E2
	add r1, r2, r3
	add r1, r0, r1
	mov r3, #160
	strb r3, [r1]
	ldr r1, _080D9840  @ =0x00000FA2
	add r2, r2, r1
	add r2, r0, r2
	mov r1, #9
	strb r1, [r2]
	bl sub_080ED8C8
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D9834:
	.4byte gRam
_080D9838:
	.4byte 0x00000F52
_080D983C:
	.4byte 0x000010E2
_080D9840:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080D9804

