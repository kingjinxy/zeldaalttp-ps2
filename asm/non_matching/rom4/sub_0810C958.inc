	THUMB_FUNC_START sub_0810C958
sub_0810C958: @ 0x0810C958
	push {r4-r6,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r5, _0810C984  @ =gRam
	ldr r1, _0810C988  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	mov r6, #0
	mov r1, #3
	strb r1, [r0]
	add r0, r4, #0
	mov r1, #121
	bl sub_080CF140
	ldr r0, _0810C98C  @ =0x00001052
	add r5, r5, r0
	add r4, r4, r5
	strb r6, [r4]
	pop {r4-r6}
	pop {r0}
	bx r0
_0810C984:
	.4byte gRam
_0810C988:
	.4byte 0x00000F52
_0810C98C:
	.4byte 0x00001052
	THUMB_FUNC_END sub_0810C958

