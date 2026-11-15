	THUMB_FUNC_START sub_080C80C8
sub_080C80C8: @ 0x080C80C8
	push {r4-r6,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	mov r1, #110
	bl sub_080CF0AC
	ldr r5, _080C810C  @ =gRam
	ldr r1, _080C8110  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	mov r2, #0
	mov r6, #3
	strb r6, [r0]
	add r1, r1, #32
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #15
	strb r1, [r0]
	ldr r1, _080C8114  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	strb r2, [r0]
	bl GetRandomInt
	ldr r0, _080C8118  @ =0x00001012
	add r5, r5, r0
	add r4, r4, r5
	strb r6, [r4]
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C810C:
	.4byte gRam
_080C8110:
	.4byte 0x00000FA2
_080C8114:
	.4byte 0x00000F52
_080C8118:
	.4byte 0x00001012
	THUMB_FUNC_END sub_080C80C8

