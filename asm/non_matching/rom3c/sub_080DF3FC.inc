	THUMB_FUNC_START sub_080DF3FC
sub_080DF3FC: @ 0x080DF3FC
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r0, #185
	add r1, r5, #0
	bl sub_080CA538
	add r4, r0, #0
	cmp r4, #0
	blt _080DF436
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	ldr r1, _080DF43C  @ =gRam
	ldr r2, _080DF440  @ =0x00001052
	add r0, r1, r2
	add r0, r4, r0
	mov r2, #2
	strb r2, [r0]
	ldr r2, _080DF444  @ =0x00001082
	add r0, r1, r2
	add r0, r4, r0
	strb r5, [r0]
	ldr r0, _080DF448  @ =0x00001172
	add r1, r1, r0
	add r1, r4, r1
	mov r0, #1
	strb r0, [r1]
_080DF436:
	pop {r4,r5}
	pop {r0}
	bx r0
_080DF43C:
	.4byte gRam
_080DF440:
	.4byte 0x00001052
_080DF444:
	.4byte 0x00001082
_080DF448:
	.4byte 0x00001172
	THUMB_FUNC_END sub_080DF3FC

