	THUMB_FUNC_START sub_0810F9B4
sub_0810F9B4: @ 0x0810F9B4
	push {r4,r5,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_0810FA38
	mov r2, #40
	neg r2, r2
	mov r5, #72
	neg r5, r5
	add r0, r4, #0
	mov r1, #2
	add r3, r5, #0
	bl sub_0810F650
	add r0, r4, #0
	mov r1, #3
	mov r2, #8
	add r3, r5, #0
	bl sub_0810F650
	mov r2, #88
	neg r2, r2
	add r0, r4, #0
	mov r1, #4
	add r3, r5, #0
	bl sub_0810F650
	ldr r0, _0810FA04  @ =gRam
	ldr r1, _0810FA08  @ =0x00001172
	add r0, r0, r1
	add r4, r4, r0
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810FA04:
	.4byte gRam
_0810FA08:
	.4byte 0x00001172
	THUMB_FUNC_END sub_0810F9B4

